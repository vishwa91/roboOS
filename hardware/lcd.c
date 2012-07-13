//
//  lcd.c
//  lcdmodule
//
//  Created by Pavankumar Reddy M on 15/06/12.
//  Copyright (c) 2012 __roboOS__. All rights reserved.
//

/****************************
        REFERENCES
 ****************************
 *roboOS/references/lcd_ref.gif
    Has all the commands that can be sent to the LCD
 
 *****************************/

/** Operating in 4-bit IO mode
    Not valid for 8-bit IO mode
 
    The fout data lines D4-D7 and the control lines RW, RS AND E can be on same port or different ports
 
    Current mapping is
    
    PB0-PB3 : D4-D7 and PB4 : RS and PB5 : RW and PB6 : E
    
*/



/**************************************/
#include <hardware/lcd.h>

#define LCD_DATA_PORT 	PORT(LCD_DATA)
#define LCD_E_PORT 		PORT(LCD_E)
#define LCD_RS_PORT 	PORT(LCD_RS)
#define LCD_RW_PORT 	PORT(LCD_RW)

#define LCD_DATA_DDR 	DDR(LCD_DATA)
#define LCD_E_DDR 		DDR(LCD_E)
#define LCD_RS_DDR 		DDR(LCD_RS)
#define LCD_RW_DDR 		DDR(LCD_RW)

#define LCD_DATA_PIN	PIN(LCD_DATA)

#define SET_E() (LCD_E_PORT|=(1<<LCD_E_POS))
#define SET_RS() (LCD_RS_PORT|=(1<<LCD_RS_POS))
#define SET_RW() (LCD_RW_PORT|=(1<<LCD_RW_POS))

#define CLEAR_E() (LCD_E_PORT&=(~(1<<LCD_E_POS)))
#define CLEAR_RS() (LCD_RS_PORT&=(~(1<<LCD_RS_POS)))
#define CLEAR_RW() (LCD_RW_PORT&=(~(1<<LCD_RW_POS)))

#ifdef LCD_TYPE_162
#define LCD_TYPE_204
#endif

#ifdef LCD_TYPE_202
#define LCD_TYPE_204
#endif

uint8_t address_locations[] = {0x00,0x40,0x20,0x60};

/* Global/ Exported functions */

/*************************************************************************** 
 Name : InitializeLCD 
 Description: This function initialize the LCD to 4 bit mode. Set display lines to 2.
 Makes the cursor blink and place it at home
 Parameters: None
 Return: None
 Comments:
 ****************************************************************************/

void initializeLCD(){
    
    // Wait for LCD to power up to initialize
    _delay_ms(30);
    
    // Set IO Ports - All bits are set high
    LCD_DATA_DDR |= (0x0F<<LCD_DATA_POS);
    LCD_E_DDR|=(1<<LCD_E_POS);
	LCD_RS_DDR|=(1<<LCD_RS_POS);
	LCD_RW_DDR|=(1<<LCD_RW_POS);
    
    // Writing initial data to ports and control pins - All set to 0
    LCD_DATA_PORT&=(~(0x0F<<LCD_DATA_POS));
	CLEAR_E();
	CLEAR_RW();
	CLEAR_RS();
    
    // Initializing LCD in 4 bit mode
    writeToLCD(LOW, LOW, 0x02); // 4-bit mode. else 0x03
    // Initializing LCD with 2 line, 4-bit, 5x7 dot format
    writeToLCD(LOW, LOW, 0x28); // 0b00101000 N = 1 and F = 0
    // Display off (D = 0), cursor on (C = 1), blink on (B = 1)
    writeToLCD(LOW, LOW, 0x0B); // 0b00001011
    // Display on (D = 1), cursor on (C = 1), blink on (B = 1)
    writeToLCD(LOW, LOW, 0x0F); // 0b00001111
    // Display direction increment (I/D = 1), display shift (S = 0)
    writeToLCD(LOW, LOW, 0x06); // 0b000000110
    // Clear Display and return home
    writeToLCD(LOW, LOW, 0x01);
    
    _delay_ms(30);
}

/*************************************************************************** 
 Name : writeToLCD 
 Description: This function is used to write data and control signals to the LCD
 Parameters: 
    RS_VAL  - Input RS value for the LCD
    RW_VAL  - Input RW value for the LCD
    data    - Data to be written or command to be executed
 Return: None
 Comments:
 ****************************************************************************/

void writeToLCD(uchar RS_VAL, uchar RW_VAL, uint8_t data){
    if(RS_VAL)
        SET_RS();
    else
        CLEAR_RS();
    if(RW_VAL)
        SET_RW();
    else
        CLEAR_RW();
    
    _delay_ms(0.500);
    
    SET_E();
    
    // LCD is in 4-bit mode. So, higher nibble is sent first and then the lower nibble
    
    // Send high nibble
    LCD_DATA_PORT = (LCD_DATA_PORT & (~(0x0F<<LCD_DATA_POS)))|((data>>4)<<LCD_DATA_POS);
    
    _delay_us(1);
    
    // Time to pull E low
    CLEAR_E();
    
    // Send low nibble
    SET_E();
    LCD_DATA_PORT = (LCD_DATA_PORT & (~(0x0F<<LCD_DATA_POS)))|(data<<LCD_DATA_POS);
    
    _delay_us(1);
    
    _delayWhileBusy(0);
}


/*************************************************************************** 
 Name : delayWhileBusy 
 Description: Constantly polls busy bit and waits while LCD is busy
 Parameters: 
    num_polls - maximum number of times function should poll. set it to 0 for default value
 Return: None
 Comments:
 ****************************************************************************/

void _delayWhileBusy(int num_polls){
    uint8_t busy;
    int timeout = 100; // Default value of 100 loops for timeout
    
    if(num_polls)
        timeout = num_polls;
    
    // Change port to input type
    LCD_DATA_PIN &= (~(0x0F<<LCD_DATA_POS));
    
    // Change LCD mode
    SET_RW();       // Read Mode
    CLEAR_RS();     // REad Status
    
    // Let the RW/RS lines stabilize
    
    _delay_us(0.5);
    
    while (timeout) {
        
        _delay_us(0.5);
        
        SET_E();
        
        busy = (LCD_DATA_PIN>>LCD_DATA_POS)<<4;
        _delay_us(0.5);
        // Pull E low
        CLEAR_E();
        _delay_us(1);
        
        // MSB of busy is busy bit. If, it is 1 loop or break
        if (busy & 0x80)
            timeout--;
        else
            break;
    }
    
    CLEAR_RW(); // Back to write mode
    LCD_DATA_DDR |= (0x0F<<LCD_DATA_POS); // Change the port to output
}

/*************************************************************************** 
 Name : moveCursorXY
 Description: Move the cursor to give x(column) and y(row)
 Parameters: 
    x   - The column to which cursor should be moved
    y   - The row to which cursor should be moved
 Return: None
 Comments:
 ****************************************************************************/

void moveCursorXY(uchar x, uchar y){
    uint8_t cmd = 0x01;
    
    if (x < LCD_MAX_COL && y < LCD_MAX_ROW) {
        cmd = address_locations[y] + x + 0x80; // Setting D7 high
    }
    
    writeCmd(cmd);
}

/*************************************************************************** 
 Name : writeStringatPos
 Description: write a string at position given in the parameters
 Parameters: 
 x   - The column to which cursor should be moved
 y   - The row to which cursor should be moved
 str - String to be printed
 Return: None
 Comments:
 ****************************************************************************/

void writeStringatPos(uchar x, uchar y, char *str){
    uchar i = 0;
    
    if (x < LCD_MAX_COL && y < LCD_MAX_ROW) {
        moveCursorXY(x, y);
        while ((i+x) < LCD_MAX_COL && str[i]!='\0') {
            writeData(str[i]);
            i++;
        }
    }
}

/*************************************************************************** 
 Name : writeString
 Description: write a string
 Parameters: 
 str - String to be printed
 Return: None
 Comments:
 ****************************************************************************/

void writeString(char *str){
    uchar i = 0;
    
    while ((i) < LCD_MAX_COL && str[i]!='\0') {
        writeData(str[i]);
        i++;
    }
}

/*************************************************************************** 
 Name : printint
 Description: not part of API
 Parameters: 
 Return: 
 Comments:
 ****************************************************************************/


void _printint(int num){
	if(num == 0)
		writeData('0');
	else{
		int reversed;
		int lastDig;
		
		if(num < 0){
			writeData('-');
			lastDig = -(num % 10);
			num /= 10;
			num *= -1;
			reversed = lastDig;
			//printf("\nlastDig - %d\n", lastDig);
		}
		
		else{
			reversed = num%10;
			num /= 10;
		}
		
		while(num != 0){
			reversed *= 10;
			reversed += num%10;
			num /= 10;
		}
		
		while(reversed != 0){
			writeData(reversed%10 + '0');
			reversed /= 10;
		}
	}
}

/*************************************************************************** 
 Name : printfLCD
 Description: print formatted strings to LCD. Syntax similar to C printf. Currently,
    %d, %c, %s are supported 
 Parameters: 
 Return: 0 on successful completion(not like printf)
 Comments:
 ****************************************************************************/

int printfLCD(const char *str, ...){
	int x;
	char *cpy = strdup(str);
	
	va_list args;
	va_start(args, str);
	
	for(; *cpy != '\0'; cpy++){
		if(*cpy != '%'){
			writeData(*cpy);
		}
		else{
			switch(*++cpy){
				case 'c': writeData(va_arg(args, int));break;
				case 'd': 
					x = (va_arg(args, int));
					_printint(x);break;
				case 's':
                    writeString(va_arg(args, char*));break;
			}
		}
	}
	
	va_end(args);
	
	return 0;
}
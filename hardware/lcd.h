//
//  lcd.h
//  
//
//  Created by Pavankumar Reddy M on 16/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef _lcd_h
#define _lcd_h

#define _CONCAT(a,b) a##b
#define PORT(x) _CONCAT(PORT,x)
#define PIN(x) _CONCAT(PIN,x)
#define DDR(x) _CONCAT(DDR,x)

#include <config.h>
#define F_CPU CONFIG_F_CPU
#include <avr/io.h>
#include <util/delay.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>


#define writeData(x)    writeToLCD(HIGH, LOW, x)
#define writeCmd(x)     writeToLCD(LOW, LOW, x)

#define LCD_MAX_COL 16
#define LCD_MAX_ROW 4

#define HIGH 1
#define LOW 0

/******************************
    LCD CONNECTIONS
******************************/

#define LCD_DATA B
#define LCD_DATA_POS 0

#define LCD_E B
#define LCD_E_POS PB6

#define LCD_RS B
#define LCD_RS_POS PB4

#define LCD_RW B
#define LCD_RW_POS PB5

/******************************
    FUNCTION PROTOTYPES
*******************************/
typedef unsigned char uchar;



void initializeLCD();
void writeToLCD(uchar, uchar, uint8_t);
void _delayWhileBusy(int);
void moveCursorXY(uchar, uchar);
void writeStringatPos(uchar, uchar, char *);
void writeString(char *);
void _printint(int);
int printfLCD(const char *, ...);

/************************************************************
 Name : _lcd_
 Type : struct
 Description :  An attempt to make the code object oriented
                by making them structs with member variables
                and functional pointers
 ************************************************************/
struct __lcd__{
    void (*init)(); // No customization for init until the module is tested
    int (*printf)(const char *, ...);
};

typedef struct __lcd__ lcd;

#endif

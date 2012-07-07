/**************************************************************
 Copyright(c) 2012 The roboOS open source project.

 This software is compatible with GPLv3. For 
 further support, visit:
 http://www.gnu.org/copyleft/gpl.html

===============================================================

 Module: usart.c 
 Dependencies: usart.h

 Description: routines for USART

 Note: 
**************************************************************/

#include <hardware/usart.h>

/************************************************************** 
 Name : calculate_ubrr
 Description: Calculates UBRR value, for setting baud rate
 Parameters: Required baud rate 
 
 Return: UBRR value
 Comments: None
 *************************************************************/
unsigned int calculate_ubrr(int baud_rate){
	return ( (FOSC / 16 / baud_rate) - 1 );
}

/************************************************************** 
 Name : usart_init
 Description: Initialise the USART peripheral
 Parameters: Required baud rate 
 
 Return: None
 Comments: None
 *************************************************************/

void usart_init(unsigned int baud){
	unsigned int ubrr = calculate_ubrr(baud);		// Calculate the UBRR value
		
	UBRR0H = (unsigned char) (ubrr >> 8);			// Assign the high byte and the low byte
	UBRR0L = (unsigned char) (ubrr);
	
	// Enable the transmitter and receiver
	UCSR0B = (1 << TXEN0 ) | (1 << RXEN0 );	
	
	// 8 bit data, two stop bits (We need to verify the stop bits once)
	UCSR0C = ( 1 << USBS0 ) | (3 << UCSZ00);	
}

/************************************************************** 
 Name : _transmit
 Description: Transmit a single character
 Parameters: Character to be sent 
 
 Return: 0 if successful
 Comments: None
 *************************************************************/
unsigned int _usart_transmit(unsigned char data){
	// Wait till transmit buffer is empty
	while ( !(UCSR0A & (1 <<UDRE0) ) );
	// Now put the character to UDR buffer
	UDR0 = data;
	
	return 0;
}

/************************************************************** 
 Name : _receive
 Description: Receive a single character
 Parameters: None 
 
 Return: Returned charater
 Comments: None
 *************************************************************/
unsigned char _usart_receive(void){
	// Wait till data is received
	while ( !(UCSR0A & (1 << RXC0) ) );
	// Now return the data
	
	return UDR0;
}

/************************************************************** 
 Name : transmit
 Description: Send a line of data. Similar to printf, but it is 
 			  written to USART
 Parameters: String. Format is similar to printf 
 
 Return: 0 if successful
 Comments: None
 *************************************************************/
unsigned char usart_transmit(const char *str, ...){
	const char *token;
	token = strdup(str);		// Take a duplicate of the input string, since we dont want to meddle with the original one
	va_list tokens;
	va_start(tokens, str);
	while(token != '\0'){
		if( *token != '%')
			_transmit(*token);
		else{
			switch(*token++){
				case 'c': _transmit(va_arg(tokens, int));
					break;
				case 'd': _transmit(va_arg(tokens, int)+'0');
					break;
				case 's':transmit(va_arg(tokens, char*));	// carefully observe that this line calls the function again.
					break;
			}
		}
		token++;
	}
	va_end(tokens);
	return 0;	
}

/************************************************************** 
 Name : receive
 Description: Receive a string from the host
 Parameters: None 
 
 Return: The read string
 Comments: None
 *************************************************************/
char *usart_receive(void){
	char *input_string;
	char token;
	input_string = (char * ) malloc( sizeof(char) * MAXLEN ); // If this line is not given, we will get a segfault
	int i=0;
	token = _receive();
	while(token != '\0'){
		input_string[i] = token;
		token = _receive();
		i++;
	}
	input_string[i] = '\0';
	return input_string;
}

/************************************************************** 
 Name : __usart__
 Description: In an attempt to make the code object oriented,
 			  the peripherals will be structs. There is one
 			  drawback. The peripherals must be initialised,
 			  since there are function pointers.
 Parameters: Not defined 
 
 Return: Not defined
 Comments: None
 *************************************************************/
struct __usart__{
	long int BAUD;
	unsigned char BUSY;
	void (*init)(long int);
	void (*transmit)(unsigned char *);
	unsigned char * (*receive)(void);
};
typedef struct __usart__ usart;

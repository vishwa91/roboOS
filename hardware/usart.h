/**************************************************************
 Copyright(c) 2012 The roboOS open source project.

 This software is compatible with GPLv3. For 
 further support, visit:
 http://www.gnu.org/copyleft/gpl.html
 
===============================================================

 Module: usart.h
 Dependencies: config.h
 			   stdarg.h
 			   string.h

 Description: Header file for USART routines

 Note: <Notes if any>.
**************************************************************/

#include <config.h>
#define FOSC CONFIG_F_CPU
#define F_CPU CONFIG_F_CPU

#include <avr/io.h>
#include <util/delay.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

unsigned int calculate_ubrr(int baud_rate);
void usart_init(long int baud);

unsigned int _usart_transmit(unsigned char data);
unsigned char _usart_receive(void);

unsigned char usart_transmit(const char *str, ...);
char *usart_receive(void);

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
	unsigned char (*transmit)(const char *, ...);
	char * (*receive)(void);
};
typedef struct __usart__ usart;

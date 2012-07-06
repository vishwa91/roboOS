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

#include <avr/io.h>
#include <util/delay.h>
#include <stdarg.h>
#include <string.h>

unsigned int calculate_ubrr(int baud_rate);
void usart_init(unsigned int baud);

unsigned int _transmit(unsigned char data);
unsigned char _receive(void);

unsigned char transmit(const char *str, ...);
unsigned char *receive(void);

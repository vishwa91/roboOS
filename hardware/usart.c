/*********************************************
Project: roboOS
Collaborators:	vishwanath
				pavan

This file holds all the routines for usart 
communication.
*********************************************/

#include <avr/io.h>

#define FOSC CONFIG_F_CPU
#include <util/delay.h>

// calculate_ubrr returns the UBRR value to be used
unsigned int calculate_ubrr(int baud_rate)
{
	return ( (FOSC / 16 / baud_rate) - 1 )
}

void usart_init(unsigned int baud)
{
	unsigned int ubrr = calculate_ubrr(baud);		// Calculate the UBRR value
		
	UBRR0H = (unsigned char) (ubrr >> 8);			// Assign the high byte and the low byte
	UBRR0l = (unsigned char) (ubrr);
	
	// Enable the transmitter and receiver
	UCSR0B = (1 << TXEN0 ) | (1 << RXEN0 );	
	
	// 8 bit data, two stop bits (We need to verify the stop bits once)
	UCSR0C = ( 1 << USBS0 ) | (3 << USCZ0);	
}

// Sends a single character
unsigned int _transmit(unsigned char data)
{
	// Wait till transmit buffer is empty
	while ( !(UCSR0A & (1 <<UDRE0) ) );
	// Now put the character to UDR buffer
	UDR0 = data;
	
	return 0;
}

// Receives a single character
unsigned char _receive(void)
{
	// Wait till data is received
	while ( !(UCSR0A & (1 << RXC0) ) );
	// Now return the data
	
	return UDR0;
}

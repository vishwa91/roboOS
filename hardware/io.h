/************************************************
Copyright(c) 2012 The roboOS open source project.

This software is compatible with GPLv3. For 
further support, visit:
http://www.gnu.org/copyleft/gpl.html

=================================================

Module: io.h
Dependencies: None

Description: This file has the structs for 
			 manipulating the GPIO pins

Note: <Notes if any>.
************************************************/

struct portB{
	pin0 = PORTB | (1 << PB0);
	pin1 = PORTB | (1 << PB1);
	pin2 = PORTB | (1 << PB2);
	pin3 = PORTB | (1 << PB3);
	pin4 = PORTB | (1 << PB4);
	pin5 = PORTB | (1 << PB5);
	pin6 = PORTB | (1 << PB6);
	pin7 = PORTB | (1 << PB7);
};

struct portC{
	pin0 = PORTC | (1 << PC0);
	pin1 = PORTC | (1 << PC1);
	pin2 = PORTC | (1 << PC2);
	pin3 = PORTC | (1 << PC3);
	pin4 = PORTC | (1 << PC4);
	pin5 = PORTC | (1 << PC5);
	pin6 = PORTC | (1 << PC6);
};

struct portD{
	pin0 = PORTD | (1 << PD0);
	pin1 = PORTD | (1 << PD1);
	pin2 = PORTD | (1 << PD2);
	pin3 = PORTD | (1 << PD3);
	pin4 = PORTD | (1 << PD4);
	pin5 = PORTD | (1 << PD5);
	pin6 = PORTD | (1 << PD6);
	pin7 = PORTA | (1 << PD7);
};

void make_pin_high( unsigned char pin );
void make_pin_low( unsigned char pin );
void make_pin_out( unsigned char pin );
void make_pin_in(unsigned char pin );

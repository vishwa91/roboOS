/************************************************
Copyright(c) 2012 The roboOS open source project.

This software is compatible with GPLv3. For 
further support, visit:
http://www.gnu.org/copyleft/gpl.html

=================================================

Module: io.c
Dependencies: hardware/io.h

Description: This file has the structs for 
			 manipulating the GPIO unsigned char pins

Note: <Notes if any>.
************************************************/
#include <hardware/io.h>
#include <avr/io.h>

void set_portB(unsigned char pin){
	PORTB |= pin;
}

void set_portC(unsigned char pin){
	PORTC |= pin;
}

void set_portD(unsigned char pin){
	PORTD |= pin;
}

void clr_portB(unsigned char pin){
	PORTB &= ~pin;
}

void clr_portC(unsigned char pin){
	PORTC &= ~pin;
}

void clr_portD(unsigned char pin){
	PORTD &= ~pin;
}

void mkin_portB(unsigned char pin){
	DDRB &= ~pin;
}

void mkin_portC(unsigned char pin){
	DDRC &= ~pin;
}

void mkin_portD(unsigned char pin){
	DDRD &= ~pin;
}

void mkout_portB(unsigned char pin){
	DDRB |= pin;
}

void mkout_portC(unsigned char pin){
	DDRC |= pin;
}

void mkout_portD(unsigned char pin){
	DDRD |= pin;
}

unsigned char read_portB(unsigned char pin){
	return PINB & pin;
}

unsigned char read_portC(unsigned char pin){
	return PINC & pin;
}

unsigned char read_portD(unsigned char pin){
	return PIND & pin;
}

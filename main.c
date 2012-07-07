// Author		vishwanath<vishwa.hyd@gmail.com>
// Simple firmware to blink an LED with 1s clock and 50% duty cycle
// This program will be used to help write the initial Makefile

#include<avr/io.h>
#define F_CPU 1000000U	// The compiler gives a warning if this is not defined
#include<util/delay.h>
#include"hardware/lcd.h"
#include"hardware/lcd.c"

#define B0_out DDRB |= (1<< PB0)

int main(void)
{
	B0_out;	// make PB0 output. PORTA does not exist!
	while(1)
	{
		PORTB |= (1 << PB0);
		_delay_ms(500);
		PORTB &= ~(1 << PB0);
		_delay_ms(500);
		initializeLCD();
        printfLCD("This is a string %s","abcd");
	}
}

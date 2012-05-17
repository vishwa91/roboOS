// Author		vishwanath<vishwa.hyd@gmail.com>
// Simple firmware to blink an LED with 1s clock and 50% duty cycle
// This program will be used to help write the initial Makefile

#include<avr/io.h>
#define F_CPU 1000000U	// The compiler gives a warning if this is not defined
#include<util/delay.h>

int main(void)
{
	DDRA |= (1 << PA0 );	// make PA0 output. @pavan, please verify this
	while(1)
	{
		PORTA |= (1 << PA0);
		_delay_ms(500);
		PORTA &= ~(1 << PA0);
		__delay_ms(500);
	}
}

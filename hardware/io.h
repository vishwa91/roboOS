/************************************************
Copyright(c) 2012 The roboOS open source project.

This software is compatible with GPLv3. For 
further support, visit:
http://www.gnu.org/copyleft/gpl.html

=================================================

Module: io.h
Dependencies: None

Description: This file has the structs for 
			 manipulating the GPIO unsigned char pins

Note: <Notes if any>.
************************************************/
#include <avr/io.h>

struct __port__{
	unsigned char pin0;
	unsigned char pin1;
	unsigned char pin2;
	unsigned char pin3;
	unsigned char pin4;
	unsigned char pin5;
	unsigned char pin6;
	unsigned char pin7;
	
	void (* set )(unsigned char);
	void (* clr )(unsigned char);
	void (*mkin )(unsigned char);
	void (*mkout )(unsigned char);
	void ( *read )(unsigned char);
};
typedef struct __port__ port;

struct __io__{
	struct __port__ portB;
	struct __port__ portC;
	struct __port__ portD;
};
typedef struct __io__ io;

void set_portB( unsigned char pin );
void set_portC( unsigned char pin );
void set_portD( unsigned char pin );

void clr_portB( unsigned char pin );
void clr_portC( unsigned char pin );
void clr_portD( unsigned char pin );

void mkin_portB( unsigned char pin );
void mkin_portC( unsigned char pin );
void mkin_portD( unsigned char pin );

void mkout_portB( unsigned char pin );
void mkout_portC( unsigned char pin );
void mkout_portD( unsigned char pin );

unsigned char read_portB( unsigned char pin );
unsigned char read_portC( unsigned char pin );
unsigned char read_portD( unsigned char pin );

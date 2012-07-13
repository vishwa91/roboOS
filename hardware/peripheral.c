/**************************************************************
 Copyright(c) 2012 The roboOS open source project.

 This software is compatible with GPLv3. For further support,
 visit:
 http://www.gnu.org/copyleft/gpl.html

===============================================================

 Module: peripheral.c
 Dependencies: usart.h
 			   lcd.h
 			   <more peripherals to be added>

 Description: Has routines to initialise the peripheral structs

 Note: <Notes if any>.
**************************************************************/

#include <config.h>
#include <hardware/io.h>
#include <hardware/usart.h>
#include <hardware/lcd.h>

void init_peripheral(int ID, ...){
	va_list device;
	va_start(device, ID);
		
	if( ID == IO ){

		struct __io__ * config_io;
		config_io = va_arg(device, io * );
		(*config_io).portB.set = set_portB;
		(*config_io).portB.clr = clr_portB;
		(*config_io).portB.mkin = mkin_portB;
		(*config_io).portB.mkout = mkout_portB;
		
		(*config_io).portC.set = set_portC;
		(*config_io).portC.clr = clr_portC;
		(*config_io).portC.mkin = mkin_portC;
		(*config_io).portC.mkout = mkout_portC;
			
		(*config_io).portD.set = set_portD;
		(*config_io).portD.clr = clr_portD;
		(*config_io).portD.mkin = mkin_portD;
		(*config_io).portD.mkout = mkout_portD;
	}
	
	else if( ID == LCD ){	
		lcd * config_lcd;
		config_lcd = va_arg(device, lcd * );
		 //Setting necessary params here
        (*config_lcd).init = initializeLCD;
        (*config_lcd).printf = printfLCD;
	}
			
	else if( ID == USART){
		usart *config_usart;
		config_usart = va_arg(device, usart * );
		(*config_usart).init = usart_init;
		(*config_usart).transmit = usart_transmit;
		(*config_usart).receive = usart_receive;
	}

	
	va_end(device);
}

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

void init_peripheral(unsigned char ID, ...){
	va_list device;
	va_start(device, ID);
	
	switch(ID){
			case IO: config_io *io;
					 config_io = va_args(device, *io);
					 *config_io.portB.set = set_portB;
					 *config_io.portB.clr = clr_portB;
					 *config_io.portB.mkin = mkin_portB;
					 *config_io.portB.mkout = mkout_portB;
					 
					 *config_io.portC.set = set_portC;
					 *config_io.portC.clr = clr_portC;
					 *config_io.portC.mkin = mkin_portC;
					 *config_io.portC.mkout = mkout_portC;
					 
					 *config_io.portD.set = set_portD;
					 *config_io.portD.clr = clr_portD;
					 *config_io.portD.mkin = mkin_portD;
					 *config_io.portD.mkout = mkout_portD;
			break;
			
		case LCD: 	config_lcd *lcd;
				 	config_lcd = va_args(device, *lcd);
				 //Set necessary params here
			break;
			
		case USART: config_usart *usart;
					config_usart = va_args(device, *usart);
					*config_usart.init = usart_init;
					*config_usart.transmit = usart_transmit;
					*config_usart.receive = usart_receive;
					*config_usart.BUSY = FALSE;
			break;

	}
}

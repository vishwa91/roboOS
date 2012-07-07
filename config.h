/**************************************************************
 Copyright(c) 2012 The roboOS open source project.

 This software is compatible with GPLv3. For further support,
 visit:
 http://www.gnu.org/copyleft/gpl.html

===============================================================

 Module: config.h
 Dependencies: None

 Description: This file will be edited by the user to set the 
 			  the device specific macros

 Note: <Notes if any>.
**************************************************************/

#define CONFIG_F_CPU	1000000UL
#define MAXLEN			32
// All the peripherals are enumerated. This is necessary, as we
// need to initialise the peripherals due to function pointers
// in them. To do so, we will use only one function.

#define IO 				0x01
#define USART			0x02
#define LCD				0x03

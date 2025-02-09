/********************************************************/
/************ Name: Mohaemd Esam ************************/
/************ Date:2/8/2024 *****************************/
/************ SWC: BUTTON  ******************************/
/************ version: 1.0 ******************************/
/********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_config.h"
#include "Button.h"

u8 button_u8read(u8 portname,u8 pinnumber)
{
	unsigned char x;
	x=DIO_u8read(portname,pinnumber);
	return x ;
}

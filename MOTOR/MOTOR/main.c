#include "STD_TYPES.h"
#include "BIT_MATH.h"
# define F_CPU 16000000UL
#include <util/delay.h>
#include "DIO_Private.h"
#include "DIO_interface.h"
#include "MOTOR_interface.h"


int main(void)
{
	
    Motor_Init(1);
    while (1) 
    {
		if (button_u8read(DIO_u8_PORTD,DIO_PIN0)==1)
		{
			Car_Move();
		}
		else if (button_u8read(DIO_u8_PORTD,DIO_PIN1)==1)
		{
			Car_Move_R();
		}
		else if (button_u8read(DIO_u8_PORTD,DIO_PIN2)==1)
		{
			Car_Move_L();
		}
		else if (button_u8read(DIO_u8_PORTD,DIO_PIN3)==1)
		{
			Car_Move_Back();
		}
		else if (button_u8read(DIO_u8_PORTD,DIO_PIN4)==1)
		{
			Car_Stop();
		}
		
    }
}


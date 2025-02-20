/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:16/2/2025           *****************************/
/************ SWC: RCC_interface.h     *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/


#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H


#define RCC_AHB              0             
#define RCC_APB1             1   
#define RCC_APB2             2  
            


void RCC_VoidInitSysClock(void);
void RCC_VoidEnablePeripheralClock(u8 Copy_BusId, u8 Copy_PeripheralId );
void RCC_VoidDisablePeripheralClock( u8 Copy_BusId, u8 Copy_PeripheralId );


#endif/*RCC_INTERFACE_H*/
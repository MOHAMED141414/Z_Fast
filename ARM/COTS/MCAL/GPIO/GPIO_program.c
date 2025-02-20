/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:20/2/2025           *****************************/
/************ SWC: GPIO_program.c      *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


u8 GPIO_u8SetPinMode(u8 Copy_PortId, u8 Copy_PinId, u8 Copy_PinMode)
{
    u8 Local_FunctionStatus = E_NOT_OK;

    switch (Copy_PortId)
    {
    case GPIO_PORTA:
        if(Copy_PinId < 8)
        {
            GPIOA_CRL &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOA_CRL |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else if(Copy_PinId < 16)
        {
            Copy_PinId -= 8;
            GPIOA_CRH &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOA_CRH |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else
        {
            Local_FunctionStatus = E_NOT_OK;
        }
        break;
    case GPIO_PORTB:
        if(Copy_PinId < 8)
        {
            GPIOB_CRL &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOB_CRL |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else if(Copy_PinId < 16)
        {
            Copy_PinId -= 8;
            GPIOB_CRH &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOB_CRH |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else
        {
            Local_FunctionStatus = E_NOT_OK;
        }
        break;
    case GPIO_PORTC:
        if(Copy_PinId < 8)
        {
            GPIOC_CRL &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOC_CRL |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else if(Copy_PinId < 16)
        {
            Copy_PinId -= 8;
            GPIOC_CRH &= ~((0b1111) << (Copy_PinId * 4)); 
            GPIOC_CRH |= (Copy_PinMode << (Copy_PinId * 4));
            Local_FunctionStatus = E_OK;
        }
        else
        {
            Local_FunctionStatus = E_NOT_OK;
        }
        break;
    
    default:
        Local_FunctionStatus = E_NOT_OK;
        break;
    }

    return Local_FunctionStatus;
}

u8 GPIO_u8SetPinValue(u8 Copy_PortId, u8 Copy_PinId, u8 Copy_PinValue)
{
    u8 Local_FunctionStatus = E_NOT_OK;

    if(Copy_PinId > GPIO_PIN15)
    {
        return Local_FunctionStatus;
    }
    
    switch (Copy_PortId)
    {
        case GPIO_PORTA:
            switch (Copy_PinValue)
            {
                case GPIO_HIGH:
                    SET_BIT(GPIOA_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                case GPIO_LOW:
                    CLEAR_BIT(GPIOA_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                default:
                    Local_FunctionStatus = E_NOT_OK;
                    break;
            }
            break;

        case GPIO_PORTB:
            switch (Copy_PinValue)
            {
                case GPIO_HIGH:
                    SET_BIT(GPIOB_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                case GPIO_LOW:
                    CLEAR_BIT(GPIOB_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                default:
                    Local_FunctionStatus = E_NOT_OK;
                    break;
            }
            break;

        case GPIO_PORTC:
              switch (Copy_PinValue)
            {
                case GPIO_HIGH:
                    SET_BIT(GPIOC_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                case GPIO_LOW:
                    CLEAR_BIT(GPIOC_ODR, Copy_PinId);
                    Local_FunctionStatus = E_OK;
                    break;
                default:
                    Local_FunctionStatus = E_NOT_OK;
                    break;
            }
            break;

        default:
            Local_FunctionStatus = E_NOT_OK;
            break;
    }

    return Local_FunctionStatus;
}

u8 GPIO_u8GetPinValue(u8 Copy_PortId, u8 Copy_PinId, u8 *Copy_PinReturnValue)
{
    u8 Local_FunctionStatus = E_NOT_OK;

    if(Copy_PinId > GPIO_PIN15)
    {
        return Local_FunctionStatus;
    }

    if(Copy_PinReturnValue != NULL)
    {
        switch (Copy_PortId)
        {
            case GPIO_PORTA:
                *Copy_PinReturnValue = GET_BIT(GPIOA_IDR, Copy_PinId);
                Local_FunctionStatus = E_OK;
                break;
            case GPIO_PORTB:
                *Copy_PinReturnValue = GET_BIT(GPIOB_IDR, Copy_PinId);
                Local_FunctionStatus = E_OK;
                break;
            case GPIO_PORTC:
                *Copy_PinReturnValue = GET_BIT(GPIOC_IDR, Copy_PinId);
                Local_FunctionStatus = E_OK;
                break;
            
            default:
                Local_FunctionStatus = E_NOT_OK;
                break;
        }
    }   
    else
    {
        Local_FunctionStatus = E_NOT_OK;
    }

    return Local_FunctionStatus;
}

u8 GPIO_u8TogglePin(u8 Copy_PortId, u8 Copy_PinId) 
{
    u8 Local_PinValue;
    
    if (GPIO_u8GetPinValue(Copy_PortId, Copy_PinId, &Local_PinValue) == E_NOT_OK) 
    {
        return E_NOT_OK; 
    }
    
    if (Local_PinValue == GPIO_HIGH) 
    {
        return GPIO_u8SetPinValue(Copy_PortId, Copy_PinId, GPIO_LOW);
    } 
    else 
    { 
        return GPIO_u8SetPinValue(Copy_PortId, Copy_PinId, GPIO_HIGH);
    }
}




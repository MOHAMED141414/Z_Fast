/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:7/3/2025            *****************************/
/************ SWC: SCB_program.c       *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SCB_interface.h"
#include "SCB_private.h"
#include "SCB_config.h"
/*****************************< Function Implementations *****************************/
void SCB_SetPriorityGrouping(u32 Copy_PriorityGrouping)
{
    /* Clear the PRIGROUP bits in AIRCR and set them to the configured value */
    SCB_AIRCR = Copy_PriorityGrouping;
}

void DisableGlobalInterrupts(void) 
{
    __asm volatile ("cpsid i");
}

void EnableGlobalInterrupts(void) 
{
    __asm volatile ("cpsie i");
}

void SCB_EnableMemFault(void)
{
    /**< Enable the Memory Management Fault */
    SCB_SHCSR |= (1 << SCB_SHCSR_MEMFAULTENA_POS);
}

void SCB_EnableBusFault(void)
{
    /**< Enable the Bus Fault */
    SCB_SHCSR |= (1 << SCB_SHCSR_BUSFAULTENA_POS);
}

void SCB_EnableUsageFault(void)
{
    /**< Enable the Usage Fault */
    SCB_SHCSR |= (1 << SCB_SHCSR_USGFAULTENA_POS);
}

void SCB_ClearMemFault(void)
{
    /**< Clear the Memory Management Fault */
    SCB_SHCSR &= ~(1 << SCB_SHCSR_MEMFAULTENA_POS);
}

void SCB_ClearBusFault(void)
{
    /**< Clear the Bus Fault */
    SCB_SHCSR &= ~(1 << SCB_SHCSR_BUSFAULTENA_POS);
}

void SCB_ClearUsageFault(void)
{
    /**< Clear the Usage Fault */
    SCB_SHCSR &= ~(1 << SCB_SHCSR_USGFAULTENA_POS);
}
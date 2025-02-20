/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:16/2/2025           *****************************/
/************ SWC: RCC_program.c       *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

       /*LAB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
      /*MCAL*/
#include "RCC_interface.h"
#include "RCC_privte.h"
#include "RCC_config.h"


void RCC_voidInitSysClock(void)
{
    #if RCC_SYSCLK == RCC_HSE
        
        /**< Enable the external clock to be the source for the system clock. */
        #if RCC_CLK_BYPASS == RCC_RC_CLK_
            SET_BIT(RCC_CR, RCC_CR_HSEBYP); /**< Choose RC as a SYSCLK */
        #elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK_
            CLR_BIT(RCC_CR, RCC_CR_HSEBYP); /**< Choose CRYSTAL as a SYSCLK */
        #else 
            #error "Wrong Choice !!"
        #endif /**< RCC_CLK_BYPASS */

        /**< Enable the High-Speed External clock. */
        SET_BIT(RCC_CR, RCC_CR_HSEON);

        /**< Wait until the High-Speed External clock is stable. */
        while(!GET_BIT(RCC_CR, RCC_CR_HSERDY));

        /**< Select High-Speed External clock as the system clock source. */
        RCC_CFGR = 0x00000001;
    #elif RCC_SYSCLK == RCC_HSI
        
        /**< Enable the High-Speed Internal clock. */
        SET_BIT(RCC_CR, RCC_CR_HSION);

        /**< Wait until the High-Speed Internal clock is stable. */
        while(!GET_BIT(RCC_CR, RCC_CR_HSIRDY));

        /**< Select High-Speed Internal clock as the system clock source. */
        RCC_CFGR = 0x00000000;
    #elif RCC_SYSCLK == RCC_PLL
        // Configure HSE or HSI as input source for PLL
        #if PLL_SOURCE == RCC_PLL_IN_HSI_DIV_2
            CLEAR_BIT(RCC_CFGR,RCC_CFGR_PLLSRC); // Set PLL to HSI divided by 2
        #elif PLL_SOURCE == RCC_PLL_IN_HSE
            SET_BIT(RCC_CFGR,RCC_CFGR_PLLSRC);// Set PLL to HSE
        #elif PLL_SOURCE == RCC_PLL_IN_HSE_DIV_2
            SET_BIT(RCC_CFGR,RCC_CFGR_PLLSRC);// Set PLL to HSE divided by 2
        #endif

        // Set the PLL multiplication factor
        RCC_CFGR |= ((PLL_MULTIPLIER - 2) << RCC_CFGR_PLLMUL);  // Set multiplication factor minus 2

        // Enable PLL
        SET_BIT(RCC_CR,RCC_CR_PLLON);
    #endif

        // 4. Set the main system clock source
        RCC_CFGR &= ~(0x3 << RCC_CFGR_SW);  // Clear previous values
        RCC_CFGR |= (RCC_SYSCLK << RCC_CFGR_SW);  // Set main clock source
}
void RCC_VoidEnablePeripheralClock( u8 Copy_BusId, u8 Copy_PeripheralId )
{
      switch(Copy_BusId)
    {
        /**< Enable the peripheral on the AHB bus. */
        case RCC_AHB:
            SET_BIT(RCC_AHBENR, Copy_PeripheralId);  break;
        case RCC_APB1:
            SET_BIT(RCC_APB1ENR, Copy_PeripheralId); break;
        case RCC_APB2:
            SET_BIT(RCC_APB2ENR, Copy_PeripheralId); break;
        default: break;
    }
}
void RCC_VoidDisablePeripheralClock( u8 Copy_BusId, u8 Copy_PeripheralId )
{
      switch(Copy_BusId)
    {
        /**< Enable the peripheral on the AHB bus. */
        case RCC_AHB:
             CLEAR_BIT(RCC_AHBENR, Copy_PeripheralId);  break;
        case RCC_APB1:
             CLEAR_BIT(RCC_APB1ENR, Copy_PeripheralId); break;
        case RCC_APB2:
            CLEAR_BIT(RCC_APB2ENR, Copy_PeripheralId); break;
        default: break;
    }
}

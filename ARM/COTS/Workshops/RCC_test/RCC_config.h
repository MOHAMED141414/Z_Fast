/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:16/2/2025           *****************************/
/************ SWC: RCC_config.h        *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/*
OPTIONS:
1-RCC_HSI
2-RCC_HSE
3-RCC_PLL
*/
#define RCC_SYSCLK            RCC_HSE

/*
OPTIONS:
1-RCC_CRYSTAL_CLK_
2-RCC_RC_CLK_
*/
#if RCC_SYSCLK == RCC_HSE

#define RCC_CLK_BYPASS        RCC_CRYSTAL_CLK_
                                
#endif /**< RCC_SYSCLK */
/*
OPTIONS:
1-RCC_PLL_IN_HSI_DIV_2
2-RCC_PLL_IN_HSE
3-RCC_PLL_IN_HSE_DIV_2
*/

#if CLOCK_TYPE == RCC_PLL
    #define PLL_SOURCE          RCC_PLL_IN_HSE

    /* PLL Multiplier */
    /* 2- 16 */
    #define PLL_MULTIPLIER      7
#endif




#endif/*RCC_CONFIG_H*/
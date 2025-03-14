/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:8/3/2025            *****************************/
/************ SWC: STK_PRIVATE.h        *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/




#ifndef STK_PRIVATE_H_
#define STK_PRIVATE_H_


#define STK_RELOAD_MAX  0x00FFFFFF

/*****************************< Register Definitions *****************************/
#define STK_BASE_ADDRESS                 0xE000E010U

typedef struct STK_RegDef_t { 
  volatile u32 CTRL;
  volatile u32 LOAD;
  volatile u32 VAL;
  volatile u32 CALIB;
} STK_RegDef_t;

#define STK           ((STK_RegDef_t *)STK_BASE_ADDRESS)

/*****************************< The following are defines for the bit fields in the STK_CTRL register. *****************************/
#define STK_CTRL_ENABLE_MASK             0x00000001      /**< Bit 0 : Counter Enable */
#define STK_CTRL_TICKINT_MASK            0x00000002      /**< Bit 1 : Interrupt Enable */
#define STK_CTRL_CLKSOURCE_MASK          0x00000004      /**< Bit 2 : Clock Source */
#define STK_CTRL_COUNTFLAG_MASK          0x00010000      /**< Bit 16: Count Flag */


#define STK_CTRL_CLKSOURCE_DIV_1             1
#define STK_CTRL_CLKSOURCE_DIV_8             0


#define STK_CTRL_TICKINT_ENABLE          1
#define STK_CTRL_TICKINT_DISABLE         0


#define STK_SINGLE_INTERVAL              0
#define STK_PERIOD_INTERVAL              1

#if STK_CTRL_CLKSOURCE == STK_CTRL_CLKSOURCE_DIV_1
    #define STK_AHB_CLK       8000000   /**< Processor clock (AHB clock) divided by 1 */
#elif STK_CTRL_CLKSOURCE == STK_CTRL_CLKSOURCE_DIV_8
    #define STK_AHB_CLK       1000000   /**< Processor clock (AHB clock) divided by 8 */
#else
    #error "You chose a wrong clock source for the SysTick"
#endif

#endif /**< STK_PRIVATE_H_ */
/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:3/8/2025            *****************************/
/************ SWC: EXTI_INTERFACE.h    *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H


typedef void (*EXTI_CallbackFunc_t)(void);


#define EXTI_RISING_EDGE  0   /**< Configure for rising edge trigger. */
#define EXTI_FALLING_EDGE 1   /**< Configure for falling edge trigger. */
#define EXTI_BOTH_EDGES   2   /**< Configure for both rising and falling edge trigger. */


#define EXTI_LINE0  0   /**< EXTI line number for GPIO pin 0. */
#define EXTI_LINE1  1   /**< EXTI line number for GPIO pin 1. */
#define EXTI_LINE2  2   /**< EXTI line number for GPIO pin 2. */
#define EXTI_LINE3  3   /**< EXTI line number for GPIO pin 3. */
#define EXTI_LINE4  4   /**< EXTI line number for GPIO pin 4. */
#define EXTI_LINE5  5   /**< EXTI line number for GPIO pin 5. */
#define EXTI_LINE6  6   /**< EXTI line number for GPIO pin 6. */
#define EXTI_LINE7  7   /**< EXTI line number for GPIO pin 7. */
#define EXTI_LINE8  8   /**< EXTI line number for GPIO pin 8. */
#define EXTI_LINE9  9   /**< EXTI line number for GPIO pin 9. */
#define EXTI_LINE10 10  /**< EXTI line number for GPIO pin 10. */
#define EXTI_LINE11 11  /**< EXTI line number for GPIO pin 11. */
#define EXTI_LINE12 12  /**< EXTI line number for GPIO pin 12. */
#define EXTI_LINE13 13  /**< EXTI line number for GPIO pin 13. */
#define EXTI_LINE14 14  /**< EXTI line number for GPIO pin 14. */
#define EXTI_LINE15 15  /**< EXTI line number for GPIO pin 15. */



void EXTI_vInit(void);

u8 EXTI_InitEXTIForGPIO(u8 GPIO_Pin, u8 GPIO_Port);


u8 EXTI_EnableLine(u8 Copy_Line);


u8 EXTI_DisableLine(u8 Copy_Line);

u8 EXTI_SetTrigger(u8 Copy_Line, u8 Copy_Mode);

u8 EXTI_SetCallback(u8 Copy_Line , EXTI_CallbackFunc_t CallbackFunc);



#endif/*EXTI_INTERFACE_H*/
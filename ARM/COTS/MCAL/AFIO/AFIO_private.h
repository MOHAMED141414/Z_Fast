/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:3/8/2025            *****************************/
/************ SWC: AFIO_PRIVATE.h      *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

#ifndef AFIO_PRIVATE_H
#define AFIO_PRIVATE_H


 #define AFIO_BASE_ADDRESS       0x40010000 /**< AFIO Peripheral Base Address */

 typedef struct 
 {
     volatile u32 EVCR;        /**< Event Control Register. */
     volatile u32 MAPR;        /**< Multiplexed Pin Assignments Register. */
     volatile u32 EXTICR[4];   /**< External Interrupt Configuration Registers. */
     volatile u32 MAPR2;       /**< Multiplexed Pin Assignments Register 2. */
 } AFIO_RegDef_t;
 
 /** AFIO peripheral instance. */
 #define AFIO    ((AFIO_RegDef_t *)AFIO_BASE_ADDRESS)
 

 #define AFIO_MAPR_SWJ_CFG_Pos        24 /**< Bit position for SWJ (Serial Wire JTAG) configuration. */
 #define AFIO_MAPR_SWJ_CFG_Msk        (0x7 << AFIO_MAPR_SWJ_CFG_Pos) /**< Bit mask for SWJ (Serial Wire JTAG) configuration. */
 
 #define AFIO_MAPR_SWJ_CFG_001        (0x1 << AFIO_MAPR_SWJ_CFG_Pos) /**< SWJ configuration: 001 */
 #define AFIO_MAPR_SWJ_CFG_010        (0x2 << AFIO_MAPR_SWJ_CFG_Pos) /**< SWJ configuration: 010 */
 
 #define AFIO_MAPR_ADC2_ETRGREG_Pos   20 /**< Bit position for ADC2 external trigger regular conversion remapping. */
 #define AFIO_MAPR_ADC2_ETRGREG_Msk   (0x1 << AFIO_MAPR_ADC2_ETRGREG_Pos) /**< Bit mask for ADC2 external trigger regular conversion remapping. */
 
 #define AFIO_MAPR_ADC2_ETRGINJ_Pos   19 /**< Bit position for ADC2 external trigger injected conversion remapping. */
 #define AFIO_MAPR_ADC2_ETRGINJ_Msk   (0x1 << AFIO_MAPR_ADC2_ETRGINJ_Pos) /**< Bit mask for ADC2 external trigger injected conversion remapping. */
 
 #define AFIO_MAPR_ADC1_ETRGREG_Pos   18 /**< Bit position for ADC1 external trigger regular conversion remapping. */
 #define AFIO_MAPR_ADC1_ETRGREG_Msk   (0x1 << AFIO_MAPR_ADC1_ETRGREG_Pos) /**< Bit mask for ADC1 external trigger regular conversion remapping. */
 
 #define AFIO_MAPR_ADC1_ETRGINJ_Pos   17 /**< Bit position for ADC1 external trigger injected conversion remapping. */
 #define AFIO_MAPR_ADC1_ETRGINJ_Msk   (0x1 << AFIO_MAPR_ADC1_ETRGINJ_Pos) /**< Bit mask for ADC1 external trigger injected conversion remapping. */
 
 #define AFIO_MAPR_TIM5CH4_Pos        16 /**< Bit position for TIM5 channel4 internal remap. */
 #define AFIO_MAPR_TIM5CH4_Msk        (0x1 << AFIO_MAPR_TIM5CH4_Pos) /**< Bit mask for TIM5 channel4 internal remap. */
 
 #define AFIO_MAPR_PD01_Pos           15 /**< Bit position for Port D0/Port D1 mapping on OSC_IN/OSC_OUT. */
 #define AFIO_MAPR_PD01_Msk           (0x1 << AFIO_MAPR_PD01_Pos) /**< Bit mask for Port D0/Port D1 mapping on OSC_IN/OSC_OUT. */
 
 #define AFIO_MAPR_CAN_REMAP_Pos      13 /**< Bit position for CAN alternate function remapping. */
 #define AFIO_MAPR_CAN_REMAP_Msk      (0x3 << AFIO_MAPR_CAN_REMAP_Pos) /**< Bit mask for CAN alternate function remapping. */
 
 #define AFIO_MAPR_TIM4_REMAP_Pos     12 /**< Bit position for TIM4 remapping. */
 #define AFIO_MAPR_TIM4_REMAP_Msk     (0x1 << AFIO_MAPR_TIM4_REMAP_Pos) /**< Bit mask for TIM4 remapping. */
 
 #define AFIO_MAPR_TIM3_REMAP_Pos     10 /**< Bit position for TIM3 remapping. */
 #define AFIO_MAPR_TIM3_REMAP_Msk     (0x3 << AFIO_MAPR_TIM3_REMAP_Pos) /**< Bit mask for TIM3 remapping. */
 
 #define AFIO_MAPR_TIM2_REMAP_Pos      8 /**< Bit position for TIM2 remapping. */
 #define AFIO_MAPR_TIM2_REMAP_Msk     (0x3 << AFIO_MAPR_TIM2_REMAP_Pos) /**< Bit mask for TIM2 remapping. */
 
 #define AFIO_MAPR_TIM1_REMAP_Pos      6 /**< Bit position for TIM1 remapping. */
 #define AFIO_MAPR_TIM1_REMAP_Msk     (0x3 << AFIO_MAPR_TIM1_REMAP_Pos) /**< Bit mask for TIM1 remapping. */
 
 #define AFIO_MAPR_USART3_REMAP_Pos    4 /**< Bit position for USART3 remapping. */
 #define AFIO_MAPR_USART3_REMAP_Msk   (0x3 << AFIO_MAPR_USART3_REMAP_Pos) /**< Bit mask for USART3 remapping. */
 
 #define AFIO_MAPR_USART2_REMAP_Pos    3 /**< Bit position for USART2 remapping. */
 #define AFIO_MAPR_USART2_REMAP_Msk   (0x1 << AFIO_MAPR_USART2_REMAP_Pos) /**< Bit mask for USART2 remapping. */
 
 #define AFIO_MAPR_USART1_REMAP_Pos    2 /**< Bit position for USART1 remapping. */
 #define AFIO_MAPR_USART1_REMAP_Msk   (0x1 << AFIO_MAPR_USART1_REMAP_Pos) /**< Bit mask for USART1 remapping. */
 
 #define AFIO_MAPR_I2C1_REMAP_Pos      1 /**< Bit position for I2C1 remapping. */
 #define AFIO_MAPR_I2C1_REMAP_Msk     (0x1 << AFIO_MAPR_I2C1_REMAP_Pos) /**< Bit mask for I2C1 remapping. */
 
 #define AFIO_MAPR_SPI1_REMAP_Pos      0 /**< Bit position for SPI1 remapping. */
 #define AFIO_MAPR_SPI1_REMAP_Msk     (0x1 << AFIO_MAPR_SPI1_REMAP_Pos) /**< Bit mask for SPI1 remapping. */
 
  


#endif/*AFIO_PRIVATE_H*/
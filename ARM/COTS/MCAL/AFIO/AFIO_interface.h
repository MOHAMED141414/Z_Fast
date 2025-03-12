/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:3/8/2025            *****************************/
/************ SWC: AFIO_INTERFACE.h    *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/

#ifndef AFIO_INTERFACE_H
#define AFIO_INTERFACE_H

typedef enum 
{
    AFIO_REMAP_NONE,     /**< No remap (default) */ 
    AFIO_REMAP_FULL,     /**< Full SWJ (JTAG-DP + SW-DP) but without NJTRST */ 
    AFIO_REMAP_PARTIAL,  /**< JTAG-DP Disabled and SW-DP Enabled */ 
    AFIO_REMAP_CUSTOM,   /**< Custom remap (user-defined) */ 
} AFIO_RemapConfig_t;


u8 AFIO_SetRemap(AFIO_RemapConfig_t Copy_RemapConfig);


u8 AFIO_SetMAPR2(u32 Copy_MAPR2Config);


u8 AFIO_SetEXTIConfiguration(u8 Copy_Line, u8 Copy_PortMap);




#endif/*AFIO_INTERFACE_H*/
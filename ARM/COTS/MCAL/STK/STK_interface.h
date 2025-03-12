/*******************************************************************/
/************ Name: Mohaemd Esam       *****************************/
/************ Date:8/3/2025            *****************************/
/************ SWC: STK_INTERFACE.h        *****************************/
/************ version: 1.0             *****************************/
/*******************************************************************/




#ifndef STK_INTERFACE_H_
#define STK_INTERFACE_H_

typedef void (*STK_CallbackFunc_t)(void);


void STK_xInit(u32 Copy_Ticks);


void STK_vInit(void);

u8 STK_SetReloadValue(u32 Copy_ReloadValue);


void STK_Start(void);


void STK_Stop(void);

void STK_Reset(void);


u32 STK_GetRemainingCounts(void);

u32 STK_GetElapsedCounts(void);

u8 STK_SetBusyWait(u32 Copy_Microseconds);


u8 STK_SetDelay_ms(f32 Copy_Milliseconds);


u8 STK_SetIntervalSingle(u32 Copy_Microseconds, STK_CallbackFunc_t CallbackFunc);


u8 STK_SetIntervalPeriodic(u32 Copy_Microseconds, STK_CallbackFunc_t CallbackFunc);

#endif /**< STK_INTERFACE_H_ */
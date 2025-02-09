/********************************************************/
/************ Name: Mohaemd Esam ************************/
/************ Date:2/8/2024 *****************************/
/************ SWC: TIM2  ********************************/
/************ version: 1.0 ******************************/
/********************************************************/ 


#ifndef TIM2_INTERFACE_H_
#define TIM2_INTERFACE_H_

void TIM2_Voidinit  (void);
void TIM2_Voidstart (void);
void TIM2_Voidstop  (void);
void TIM2_VoidsetCallBackOVF(void(*ptrToFun)(void));
void TIM2_VoidsetCallBackCTC(void(*ptrToFun)(void));
void TIM2_VoidsetCompareMatchValue(u8 compareValue);
void TIM2_VoidsetDelay_ms_usingCTC(u16 delat_ms);
void TIM2_VoidsetDutyCycle(u8 dutycylce);



#endif /* TIM2_INTERFACE_H_ */
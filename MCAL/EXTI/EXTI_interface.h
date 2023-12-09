/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: EXTI               *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/
#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

#define EXTI_INT0     6
#define EXTI_INT1     7
#define EXTI_INT2     5

/*SENSE_CTRL*/
#define EXTI_SENSE_LOW_LEVEL      0  
#define EXTI_SENSE_FALLING_EDGE   1  
#define EXTI_SENSE_RISING_EGDE    2
#define EXTI_SENSE_ON_CHANGE      3



void EXTI_voidInit(u8 copy_u8IntID,u8 copy_u8SenseMode);
void EXTI_voidInterruptDisbale(u8 copy_u8IntID);
void EXTI_callBack_INT0(void(*ptr_func)(void));
void EXTI_callBack_INT1(void(*ptr_func)(void));
void EXTI_callBack_INT2(void(*ptr_func)(void));

#endif

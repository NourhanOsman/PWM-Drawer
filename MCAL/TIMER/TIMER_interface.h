/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: TIMERS             *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/


#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_

#define TIMER_OVF_INT 0
#define TIMER_CTC_INT 1


void TIMER0_voidInit(void);
u8 TIMER0_callBack(u8 copy_u8IntID,void (*ptrToFunc)(void));

void TIMER1_voidInit(void);

void TIMER1_voidSetTimerValue(u16 copy_u16TimerValue);
u16 TIMER1_voidGetTimerValue(void);

#endif

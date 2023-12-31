/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: EXTI               *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#ifndef EXTI_REGISTER_H_
#define EXTI_REGISTER_H_

#define EXTI_MCUCR    (*((volatile u8*)0X55))
#define EXTI_GICR     (*((volatile u8*)0X5B))
#define EXTI_MCUCSR   (*((volatile u8*)0X54))


#endif
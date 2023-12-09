/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: TIMERS             *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#ifndef TIMER_REGISTER_H_
#define TIMER_REGISTER_H_
/*TIMER 0*/
#define TIMER_OCR0          (*((volatile u8*)0X5C))
#define TIMER_TCCR0         (*((volatile u8*)0X53))
#define TIMER_TCNT0         (*((volatile u8*)0X52))
#define TIMER_TIMSK         (*((volatile u8*)0X59))
#define TIMER_TIFR          (*((volatile u8*)0X58))

/*TIMER 1*/
#define TIMER1_TCCR1A       (*((volatile u8*)0X4F))
#define TIMER1_TCCR1B     (*((volatile u8*)0X4E))	  
#define TIMER1_OCR1A     (*((volatile u16*)0X4A))
#define TIMER1_ICR1      (*((volatile u16*)0X46))
#define TIMER1_TCNT1     (*((volatile u16*)0X4C))
		
#endif	
		
		

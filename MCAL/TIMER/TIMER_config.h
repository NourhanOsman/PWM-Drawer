/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: TIMERS             *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_


/* options

 TIMER_PRESCALER_1     
 TIMER_PRESCALER_8     
 TIMER_PRESCALER_64    
 TIMER_PRESCALER_256   
 TIMER_PRESCALER_1024  
*/

#define TIMER0_PRESCALER  TIMER_PRESCALER_64
#define TIMER0_OCR0_VALUE 192
#define TIMER1_PRESCALER  TIMER_PRESCALER_64

#endif
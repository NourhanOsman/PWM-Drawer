/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: DIO                *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#ifndef DIO_REGISTER_H_
#define DIO_REGISTER_H_

#define DIO_REG_PORTA  (*((volatile u8*)0X3B))
#define DIO_REG_DDRA   (*((volatile u8*)0X3A))
#define DIO_REG_PINA   (*((volatile u8*)0X39))
							   			
#define DIO_REG_PORTB  (*((volatile u8*)0X38))
#define DIO_REG_DDRB   (*((volatile u8*)0X37))
#define DIO_REG_PINB   (*((volatile u8*)0X36))
							   			
#define DIO_REG_PORTC  (*((volatile u8*)0X35))
#define DIO_REG_DDRC   (*((volatile u8*)0X34))
#define DIO_REG_PINC   (*((volatile u8*)0X33))
							   			
#define DIO_REG_PORTD  (*((volatile u8*)0X32))
#define DIO_REG_DDRD   (*((volatile u8*)0X31))
#define DIO_REG_PIND   (*((volatile u8*)0X30))


#endif
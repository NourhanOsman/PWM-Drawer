/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: CLCD               *************************/
/********************  LAYER: HAL              *************************/
/********************  DATE: 7/11/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#ifndef _CLCD_INTERFACE_H_
#define _CLCD_INTERFACE_H_

void CLCD_voidSendCommand(u8 copy_u8Command);
void CLCD_voidSendData(u8 copy_u8Data);
void CLCD_voidInit(void);
u8 CLCD_u8SendString(const u8 *copy_pu8String);
void CLCD_writeNumber(u32 number);
u8 CLCD_u8SetPos(u8 copy_u8PosRow,u8 copy_u8PosCol);

#endif

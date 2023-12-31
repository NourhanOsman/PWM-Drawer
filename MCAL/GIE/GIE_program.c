/***********************************************************************/
/***********************************************************************/
/********************  Author: Nourhan Osman   *************************/
/********************  SWC: GIE                *************************/
/********************  LAYER: MCAL             *************************/
/********************  DATE: 9/12/2023         *************************/
/***********************************************************************/
/***********************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Error_State.h"

#include "GIE_register.h"
#include "GIE_config.h"
#include "GIE_private.h"
#include "GIE_interface.h"

void GIE_voidEnable(void)
{
	SET_BIT(SREG,SREG_I);
	
}

void GIE_voidDisable(void)
{
	CLR_BIT(SREG,SREG_I);
	
}

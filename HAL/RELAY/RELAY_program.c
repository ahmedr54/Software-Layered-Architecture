#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "RELAY_interface.h"
#include "RELAY_private.h"
#include "RELAY_config.h"

void RELAY_voidInit (void)
{
	DIO_voidSetPinDirection (BASEDPORT ,BASEDPIN0,OUTPUT)   ;
	DIO_voidSetPinDirection (BASEDPORT ,BASEDPIN1,OUTPUT)   ;
	 
}

void RELAY_voidRotateClock(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,LOW)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,HIGH)       ;
}

void RELAY_voidRotateCounterClock(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,LOW)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,HIGH)       ;
}

void RELAY_voidRotateCuttoffMode(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,HIGH)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,HIGH)       ;
}
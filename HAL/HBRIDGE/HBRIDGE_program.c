#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "HBRIDGE_interface.h"
#include "HBRIDGE_private.h"
#include "HBRIDGE_config.h"

void HBRIDGE_voidInit (void)
{
	DIO_voidSetPinDirection (BASEDPORT ,BASEDPIN0,OUTPUT)   ;
	DIO_voidSetPinDirection (BASEDPORT ,BASEDPIN1,OUTPUT)   ;
	 
}

void HBRIDGE_voidRotateClock(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,LOW)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,HIGH)       ;
}

void HBRIDGE_voidRotateCounterClock(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,LOW)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,HIGH)       ;
}

void HBRIDGE_voidRotateCuttoffMode(void)
{
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN0 ,LOW)       ;
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN1 ,LOW)       ;
}
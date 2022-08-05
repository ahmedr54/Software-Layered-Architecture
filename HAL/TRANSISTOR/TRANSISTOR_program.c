#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "TRANSISTOR_interface.h"
#include "TRANSISTOR_private.h"
#include "TRANSISTOR_config.h"


void TRANSISTOR_voidInit (void)
{
	DIO_voidSetPinDirection  (BASEDPORT ,BASEDPIN,OUTPUT)   ;
	
}

void TRANSISTOR_voidCuttOffMode ( void)
{
	
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN,LOW)       ;
}

void TRANSISTOR_voidSaturationMode ( void)
{
	
	DIO_voidSetPinValue (BASEDPORT,BASEDPIN ,HIGH)       ;
	
	
}
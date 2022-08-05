#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"


void DIO_voidSetPinDirection (u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinState)
{
	if (Copy_u8PinNum >=PIN0 && Copy_u8PinNum <=PIN7)
    {
	   switch (Copy_u8PortName)
	  {
		case PORTA :
		  switch (Copy_u8PinState)
		  {
			case OUTPUT :
			SET_BIT(DIO_DDRA ,Copy_u8PinNum);
			break;
			case INPUT :
			CLR_BIT(DIO_DDRA ,Copy_u8PinNum);
			break;
		  }
		break;
		case PORTB :
		  switch (Copy_u8PinState)
		  {
			case OUTPUT :
			SET_BIT(DIO_DDRB ,Copy_u8PinNum);
			break;
			case INPUT :
			CLR_BIT(DIO_DDRB ,Copy_u8PinNum);
		    break;
		  }
		break;
		case PORTC :
		  switch (Copy_u8PinState)
		  {
			case OUTPUT :
			SET_BIT(DIO_DDRC ,Copy_u8PinNum);
			break;
			case INPUT :
			CLR_BIT(DIO_DDRC ,Copy_u8PinNum);
			break;
		  }
	    break;
		case PORTD :
		  switch (Copy_u8PinState)
		  {
			case OUTPUT :
			SET_BIT(DIO_DDRD ,Copy_u8PinNum);
			break;
			case INPUT :
			CLR_BIT(DIO_DDRD ,Copy_u8PinNum);
			break;
		   }
		break;
		
		
	  }
	
	}
	else 
	{
		/*do norhing*/
	}



} 
void DIO_voidSetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinValue)
{
	if (Copy_u8PinNum >=PIN0 && Copy_u8PinNum <=PIN7)
	{
		switch (Copy_u8PortName)
     {
	   case PORTA:
		 
		 switch (Copy_u8PinValue)
		 {
			 case HIGH :
		     SET_BIT (DIO_PORTA ,Copy_u8PinNum);
		     break;
		     case LOW :
		     CLR_BIT (DIO_PORTA ,Copy_u8PinNum);
		     break;
		 }
	   break;
	   case PORTB:
		 
		 switch (Copy_u8PinValue)
		 {
			 case HIGH :
		     SET_BIT (DIO_PORTB ,Copy_u8PinNum);
		     break;
		     case LOW :
		     CLR_BIT (DIO_PORTB ,Copy_u8PinNum);
		     break;
		 }
	   break;
	   case PORTC:
		 
		 switch (Copy_u8PinValue)
		 {
			 case HIGH :
		     SET_BIT (DIO_PORTC ,Copy_u8PinNum);
		     break;
		     case LOW :
		     CLR_BIT (DIO_PORTC ,Copy_u8PinNum);
		     break;
		 }
	   break;
	   case PORTD:
		 
		 switch (Copy_u8PinValue)
		 {
			 case HIGH :
		     SET_BIT (DIO_PORTD ,Copy_u8PinNum);
		     break;
		     case LOW :
		     CLR_BIT (DIO_PORTD ,Copy_u8PinNum);
		     break;
		 }
	   break;
		
		
	 }
	}
	else 
	{
		/*do norhing*/
	}	
}



u8 DIO_u8GetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNum)
{
	if (Copy_u8PinNum >=PIN0 && Copy_u8PinNum <=PIN7)
	{
		u8 Local_u8PinValue ;
		switch (Copy_u8PortName)
     {
	   case PORTA:
	   Local_u8PinValue= GET_BIT (DIO_PINA ,Copy_u8PinNum);
	   break;
	   case PORTB:
	  Local_u8PinValue= GET_BIT (DIO_PINB ,Copy_u8PinNum);
	   break;
	   case PORTC:
	  Local_u8PinValue= GET_BIT (DIO_PINC ,Copy_u8PinNum);
	   break;
	   case PORTD:
	  Local_u8PinValue= GET_BIT (DIO_PIND ,Copy_u8PinNum);
	   break;
	   
		
		
	 }
	 return Local_u8PinValue ;
	}
	else 
	{
		/*do norhing*/
	}	
}


void DIO_voidSetPortDirection (u8 Copy_u8PortName,u8 Copy_u8PortState )
{
	switch (Copy_u8PortName)
	{
		case PORTA:
		 
		 switch (Copy_u8PortState)
		 {
			case OUTPUT :
            DIO_DDRA= ALL_OUTPUT ;
			break;
            case INPUT :
            DIO_DDRA= ALL_INPUT ; 
            break;			
		 }
		break;
		case PORTB:
		 
		 switch (Copy_u8PortState)
		 {
			case OUTPUT :
            DIO_DDRB= ALL_OUTPUT ;
			break;
            case INPUT :
           DIO_DDRB= ALL_INPUT ; 
            break;			
		 }
		break;
		case PORTC:
		 
		 switch (Copy_u8PortState)
		 {
			case OUTPUT :
            DIO_DDRC= ALL_OUTPUT ;
			break;
            case INPUT :
            DIO_DDRC= ALL_INPUT ; 
            break;			
		 }
		break;
		case PORTD:
		 
		 switch (Copy_u8PortState)
		 {
			case OUTPUT :
            DIO_DDRD= ALL_OUTPUT ;
			break;
            case INPUT :
            DIO_DDRD= ALL_INPUT ; 
            break;			
		 }
		break;
		
	}
}


void DIO_voidSetPortValue (u8 Copy_u8PortName,u8 Copy_u8PortValue )
{
	switch (Copy_u8PortName)
	{
		case PORTA:
		 
		 switch (Copy_u8PortValue)
		 {
			case HIGH:
            DIO_PORTA= ALL_HIGH ;
			break;
            case LOW :
            DIO_PORTA= ALL_LOW ; 
            break;			
		 }
		break;
		case PORTB:
		 
		 switch (Copy_u8PortValue)
		 {
			case HIGH :
            DIO_PORTB= ALL_HIGH ;
			break;
            case LOW :
            DIO_PORTB= ALL_LOW ; 
            break;			
		 }
		break;
		case PORTC:
		 
		 switch (Copy_u8PortValue)
		 {
			case HIGH :
            DIO_PORTC= ALL_HIGH ;
			break;
            case LOW :
           DIO_PORTC= ALL_LOW ; 
            break;			
		 }
		break;
		case PORTD:
		 
		 switch (Copy_u8PortValue)
		 {
			case HIGH :
            DIO_PORTD= ALL_HIGH ;
			break;
            case LOW :
            DIO_PORTD= ALL_LOW ; 
            break;			
		 }
		break;
		
	}
}






void DIO_voiSetPortSpecificDirection (u8 Copy_u8PortName ,u8 Copy_u8PortDirection)
{
	if (Copy_u8PortDirection >= MIN && Copy_u8PortDirection <= MAX)
	{
		switch (Copy_u8PortName)
		{
			case PORTA:
			DIO_DDRA =Copy_u8PortDirection ;
			break;
			case PORTB:
			DIO_DDRB =Copy_u8PortDirection ;
			break;
			case PORTC:
			DIO_DDRC =Copy_u8PortDirection ;
			break;
			case PORTD:
			DIO_DDRD =Copy_u8PortDirection ;
			break;
		}
	}
	else 
	{
		/*Do Nothing*/
	}
}


void DIO_voiSetPortSpecificValue (u8 Copy_u8PortName ,u8 Copy_u8PortValue)
{
	if (Copy_u8PortValue >= MIN && Copy_u8PortValue <= MAX)
	{
		switch (Copy_u8PortName)
		{
			case PORTA:
			DIO_PORTA =Copy_u8PortValue ;
			break;
			case PORTB:
			DIO_PORTB =Copy_u8PortValue ;
			break;
			case PORTC:
			DIO_PORTC =Copy_u8PortValue ;
			break;
			case PORTD:
			DIO_PORTD =Copy_u8PortValue ;
			break;
		}
	}
	else 
	{
		/*Do Nothing*/
	}
}



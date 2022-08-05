#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"


#include "TIMER_interface.h"
#include "TIMER_private.h"
#include "TIMER_config.h"

void (*Global_pvCTCFunction)(void) = NULL;
void (*Global_pvOVFFunction)(void) = NULL;


void TIMER_voidTimer0Init(void)
{
	//WAVE GENERATION
	TCCR0 &= TIMER_WAVE_GEN_MASK ;
    TCCR0 |= TIMER_WAVE_GEN ;
	//EnABLE INTERRUPT
	SET_BIT(TIMSK  ,TIMSK_TOIE0 ) ;
	//Fast PWM
	TCCR0 &= TIMER_COMPARE_MASK ;
    TCCR0 |= TIMER_COMPARE_PEM ;
	// prescaler
	TCCR0 &= TIMER_PRESCALER_MASK ;
    TCCR0 |= TIMER_PRESCALER ;
}




void TIMER_voidTimer1Init(void)
{
	//WAVE GENERATION
	TCCR1A &= TIMER1_GEN_MODE_MASK ;
    TCCR1A |= TIMER1_GEN_MODE ;
	
	TCCR1B &= TIMER1_GENB_MODE_MASK ;
    TCCR1B |= TIMER1_GENB_MODE ;
	//Fast PWM
	TCCR1A &= TIMER1_Fast_PWM_MASK ;
	TCCR1A |= TIMER1_Fast_PWM  ;
	
	// prescaler
	TCCR1B &= TIMER1_PRESCALER_MASK ;
    TCCR1B |= TIMER1_PRESCALER ;
	
}
/*
void TIMER_voidSetBusyWare (u8 Copy_u8Timer_ms)
{
	u8 CLOCK;
	u8 COMPARE_MATCH;
	u8 COMPARE_VALUE;
	u8 CTC ;
	u8 Counter;
	COMPARE_VALUE =(COMPARE_MATCH /CLOCK)
	CTC = Copy_u8Timer_ms /COMPARE_VALUE ;
	
	for (Counter =0 ;Counter == CTC ;Counter++);
	SET_BIT(TIFR ,TIFR_OCF0);
	
	
}
*/


void Timer_voidTimer1SetOverflowValue (u16 Copy_u16OverflowValue)
{
	 ICR1 = Copy_u16OverflowValue;
}
void TIMER_voidTimer1ASetCompareMatchValue (u16 Copy_u8CompareMatchValue)
{
	OCR1A = Copy_u8CompareMatchValue ;//499 ,1549 ,2599
}
void TIMER_voidTimer1BSetCompareMatchValue (u16 Copy_u8CompareMatchValue)
{
	OCR1B = Copy_u8CompareMatchValue ;
}

void TIMER_voidTimer0SetCompareMatchValue (u8 Copy_u8CompareMatchValue)
{
	OCR0 = Copy_u8CompareMatchValue ;
}

void TIMER_voidTimer0SetPreloadValue (u8 Copy_u8PreloadValue)
{
	TCNT0 =Copy_u8PreloadValue ;
}


void TIMER_voidCTCTimer0SetCallBack(void (*Copy_pvCTCFunction)(void))
{
    Global_pvCTCFunction = Copy_pvCTCFunction;
}

void TIMER_voidOVFTimer0SetCallBack(void (*Copy_pvOVFFunction)(void))
{
    Global_pvOVFFunction = Copy_pvOVFFunction;
}



void __vector_10 (void) __attribute__((signal));
void __vector_10 (void)
{
	
	if(Global_pvCTCFunction != NULL)
	{
		Global_pvCTCFunction();
		
	}
	else 
	{
		/*do nothing*/
	}
}

void __vector_11 (void) __attribute__((signal));
void __vector_11 (void)
{
	
	if(Global_pvOVFFunction != NULL)
	{
		Global_pvOVFFunction();
		
	}
	else 
	{
		/*do nothing*/
	}
}
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"


void (*Global_pvIntNotificationFunction)(void) =NULL ;
u8 ADC_u8Result ; 
u8 ADC_u8BusyState =NOT_Busy ;

void ADC_voidInit(void)
{
	
	ADMUX &= ADC_REF_VOLT_MASK ;
    ADMUX |= ADC_REF_SELECTION ;
	
	SET_BIT(ADMUX ,ADMUX_ADLAR);
	
	ADCSRA &= ADC_PRESCALER_MASK ;
    ADCSRA |= ADC_PRESCALER ;
	
	#if ADC_ENABLE == ENABLE
	   SET_BIT(ADCSRA ,ADCSRA_ADEN);
	#elif ADC_ENABLE == DISABLE
	   CLR_BIT(ADCSRA ,ADCSRA_ADEN);
	#else 
		#error "ADC_ENABLE ERROR"
	#endif
}


u8 ADC_u8StartConversionSynchronous (u8 Copy_u8ChannelNumber)
{
	if (ADC_u8BusyState ==Busy )
	{
		return 0 ;
	}
	else 
	{
		ADC_u8BusyState = Busy ;
	ADMUX &= ADC_INPUT_MASK ;
    ADMUX |= Copy_u8ChannelNumber ;
	
	SET_BIT(ADCSRA ,ADCSRA_ADSC);
	
	while (GET_BIT(ADCSRA ,ADCSRA_ADIF)==0);
	
	SET_BIT(ADCSRA ,ADCSRA_ADIF);
	ADC_u8BusyState = NOT_Busy ;
	return ADCH  ;
	}
	
	
	
}

u8 ADC_u8StartConversionAsynchronous (u8 Copy_u8ChannelNumber , void (*Copy_pvCallBackFunction)(void))
{
	if (ADC_u8BusyState ==Busy )
	{
		return 0 ;
	}
	else 
	{
		ADC_u8BusyState = Busy ;
	ADMUX &= ADC_INPUT_MASK ;
    ADMUX |= Copy_u8ChannelNumber ;
	
	Global_pvIntNotificationFunction = Copy_pvCallBackFunction ;
	SET_BIT(ADCSRA ,ADCSRA_ADSC);
	SET_BIT(ADCSRA ,ADCSRA_ADIE);
	
	return ADC_u8Result   ;
	}
}

void __vector_16 (void) __attribute__((signal));
void __vector_16 (void)
{
	ADC_u8Result = ADCH  ;
	if(Global_pvIntNotificationFunction != NULL)
	{
		Global_pvIntNotificationFunction();
		ADC_u8BusyState =NOT_Busy ;
		CLR_BIT(ADCSRA ,ADCSRA_ADIE);
	}
	else 
	{
		/*do nothing*/
	}
}
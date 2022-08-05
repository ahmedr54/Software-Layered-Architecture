#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H


#define  ADMUX                *((volatile u8 *)0x27)
#define  ADMUX_MUX0              0
#define  ADMUX_MUX1              1
#define  ADMUX_MUX2              2
#define  ADMUX_MUX3              3
#define  ADMUX_ADLAR             5
#define  ADMUX_REFS0             6
#define  ADMUX_REFS1             7


#define  ADCSRA                *((volatile u8 *)0x26)
#define  ADCSRA_ADPS0            0
#define  ADCSRA_ADPS1            1
#define  ADCSRA_ADPS2            2
#define  ADCSRA_ADIE             3
#define  ADCSRA_ADIF             4
#define  ADCSRA_ADATE            5
#define  ADCSRA_ADSC             6
#define  ADCSRA_ADEN             7



#define  ADCH                *((volatile u8 *)0x25)
#define  ADCL                *((volatile u8 *)0x24)
#define  ADC                *((volatile u16 *)0x24)


#define AVCC            0b01000000
#define EXTERNAL_VOLT   0b00000000
#define INTERNAL_VOLT   0b11000000


#define  PRESCALER_DIV_BY_2       1
#define  PRESCALER_DIV_BY_4       2
#define  PRESCALER_DIV_BY_8       3
#define  PRESCALER_DIV_BY_16      4
#define  PRESCALER_DIV_BY_32      5
#define  PRESCALER_DIV_BY_64      6
#define  PRESCALER_DIV_BY_128     7


#define ADC_INPUT_MASK          0b1110000
#define ADC_REF_VOLT_MASK       0b0011111
#define ADC_PRESCALER_MASK      0b1111000


#define NOT_Busy    0
#define Busy        1

#define  NULL                (void *)0




 

#endif
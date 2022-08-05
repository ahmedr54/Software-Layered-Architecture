#ifndef ADC_INTERFACE_H
#define ADC_INTERFACE_H


#define CHANNEL0       0
#define CHANNEL1       1
#define CHANNEL2       2
#define CHANNEL3       3
#define CHANNEL4       4
#define CHANNEL5       5
#define CHANNEL6       6
#define CHANNEL7       7


#define   ENABLE       1
#define   DISABLE      0

void ADC_voidInit(void);
u8 ADC_u8StartConversionSynchronous (u8 Copy_u8ChannelNumber);
u8 ADC_u8StartConversionAsynchronous (u8 Copy_u8ChannelNumber , void (*Copy_pvCallBackFunction)(void));


#endif
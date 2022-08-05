#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H


void DIO_voidSetPinDirection (u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinState)   ;
void DIO_voidSetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNum,u8 Copy_u8PinValue)       ;
u8 DIO_u8GetPinValue (u8 Copy_u8PortName,u8 Copy_u8PinNum)                              ;
void DIO_voidSetPortDirection (u8 Copy_u8PortName,u8 Copy_u8PortState);
void DIO_voidSetPortValue (u8 Copy_u8PortName,u8 Copy_u8PortValue );
void DIO_voiSetPortSpecificDirection (u8 Copy_u8PortName ,u8 Copy_u8PortDirection)      ;
void DIO_voiSetPortSpecificValue (u8 Copy_u8PortName ,u8 Copy_u8PortValue)              ;


#define PORTA    0
#define PORTB    1
#define PORTC    2
#define PORTD    3

#define PIN0     0 
#define PIN1     1
#define PIN2     2
#define PIN3     3
#define PIN4     4
#define PIN5     5
#define PIN6     6
#define PIN7     7

#define OUTPUT   1
#define INPUT    0

#define HIGH     1
#define LOW      0

#define PULLUP   1
#define NO_PULLUP0

#define ALL_HIGH    0xff
#define ALL_LOW     0x00
#define ALL_OUTPUT  0xff
#define ALL_INPUT   0x00

#define MAX         255
#define MIN         0


#endif
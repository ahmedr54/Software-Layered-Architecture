#ifndef TIMER_INTERFACE_H
#define TIMER_INTERFACE_H

void TIMER_voidTimer0Init(void);
void TIMER_voidSetBusyWare (u8 Copy_u8Timer_ms);
void TIMER_voidTimer0SetCompareMatchValue (u8 Copy_u8CompareMatchValue);
void TIMER_voidTimer0SetPreloadValue (u8 Copy_u8PreloadValue);
void TIMER_voidCTCTimer0SetCallBack(void (*Copy_pvCTCFunction)(void));
void TIMER_voidOVFTimer0SetCallBack(void (*Copy_pvOVFFunction)(void));
void Timer_voidTimer1SetOverflowValue (u16 Copy_u16OverflowValue) ;
void TIMER_voidTimer1ASetCompareMatchValue (u16 Copy_u8CompareMatchValue);
void TIMER_voidTimer1Init(void);
void TIMER_voidTimer1BSetCompareMatchValue (u16 Copy_u8CompareMatchValue);


#endif
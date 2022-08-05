#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H


/*Timer0 */
#define 		TCCR0			*((volatile u8 *)0x53)
#define 		TCCR0_CS00      0
#define 		TCCR0_CS01      1
#define 		TCCR0_CS02      2
#define 		TCCR0_WGM01      3
#define 		TCCR0_COM00      4
#define 		TCCR0_COM01      5
#define 		TCCR0_WGM00      6
#define 		TCCR0_FOC0       7



#define 		TCNT0			*((volatile u8 *)0x52)

#define 		OCR0			*((volatile u8 *)0x5C)

#define 		TIMSK           *((volatile u8 *)0x59)
#define 		TIMSK_TOIE0      0
#define 		TIMSK_OCIE0      1

#define 		TIFR           *((volatile u8 *)0x58)
#define 		TIFR_TOV0        0
#define 		TIFR_OCF0        1



#define        TIMER_DIV_BY_NONE    0   
#define        TIMER_DIV_BY_1       1
#define        TIMER_DIV_BY_8       2
#define        TIMER_DIV_BY_64      3
#define        TIMER_DIV_BY_256     4
#define        TIMER_DIV_BY_1024    5 


#define       MODE_NORMAL          0
#define       MODE_PWM             64
#define       MODE_CTC             8 
#define       MODE_FAST_PWM        72


#define       MODE_DISCONNECT           0
#define       MODE_SETTOP_CLEARCOM      32
#define       MODE_SETCOM_CLEARTOP      48



#define       TIMER_PRESCALER_MASK     0b11111000
#define       TIMER_WAVE_GEN_MASK      0b10110111
#define       TIMER_COMPARE_MASK       0b11001111




/*Timer1 */
#define 		TCCR1A			*((volatile u8 *)0x4F)
#define 		TCCR1A_WGM10      0
#define 		TCCR1A_WGM11      1
#define 		TCCR1A_FOC1B      2
#define 		TCCR1A_FOC1A      3
#define 		TCCR1A_COM1B0     4
#define 		TCCR1A_COM1B1     5
#define 		TCCR1A_COM1A0     6
#define 		TCCR1A_COM1A1     7






#define 		TCCR1B			*((volatile u8 *)0x4E)
#define 		TCCR1B_CS10      0
#define 		TCCR1B_CS11      1
#define 		TCCR1B_CS12      2
#define 		TCCR1B_WGM12      3
#define 		TCCR1B_WGM13      4
#define 		TCCR1B_ICES1      6
#define 		TCCR1B_ICNC1      7


#define 		 TCNT1L			*((volatile u8 *)0x4C)
#define 		 TCNT1H			*((volatile u8 *)0x4D)
#define 		 TCNT1			*((volatile u16 *)0x4C)

#define 		 OCR1AH			*((volatile u8 *)0x4B)
#define 		 OCR1AL			*((volatile u8 *)0x4A)
#define 		 OCR1A			*((volatile u16 *)0x4A)

#define 		 OCR1BH			*((volatile u8 *)0x49)
#define 		 OCR1BL			*((volatile u8 *)0x48)
#define 		 OCR1B			*((volatile u16 *)0x48)

#define 		 ICR1H			*((volatile u8 *)0x47)
#define 		 ICR1L			*((volatile u8 *)0x46)
#define 		 ICR1			*((volatile u16 *)0x46)

#define 		TIFR_TOV1        2
#define 		TIFR_OCF1B       3
#define 		TIFR_OCF1A       4
#define 		TIFR_ICF1        5


#define 		TIMSK_TOIE1      2
#define 		TIMSK_OCIE1B     3
#define 		TIMSK_OCIE1A     4
#define 		TIMSK_TICIE1     5




#define      TIMER1_GEN_MODE_MASK      0b11111100
#define      TIMER1_GENB_MODE_MASK     0b10100111
#define      TIMER1_Fast_PWM_MASK      0b00111111
#define      TIMER1_PRESCALER_MASK     0b11111000




#define       MODE_NORMAL                            0
#define       MODE_PWM_Phase_Correct_8-bit           1
#define       MODE_PWM_Phase_Correct_9-bit           2
#define       MODE_PWM_Phase_Correct_10-bit          3
#define       MODE_CTC1                              0
#define       MODE_Fast_PWM_8-bit                    1
#define       MODE_Fast_PWM_9-bit                    2
#define       MODE_Fast_PWM_10-bit                   3
#define       MODE_PWM_Phase_and_Frequency_Correct1  0
#define       MODE_PWM_Phase_and_Frequency_Correct2  1
#define       MODE_PWM_Phase_Correct1                2
#define       MODE_PWM_Phase_Correct2                3
#define       MODE_CTC2                              0
#define       MODE_Fast_PWM1                         2
#define       MODE_Fast_PWM2                         3


#define       MODEB_NORMAL                            0
#define       MODEB_PWM_Phase_Correct_8-bit           0
#define       MODEB_PWM_Phase_Correct_9-bit           0
#define       MODEB_PWM_Phase_Correct_10-bit          0
#define       MODEB_CTC1                              8
#define       MODEB_Fast_PWM_8-bit                    8
#define       MODEB_Fast_PWM_9-bit                    8
#define       MODEB_Fast_PWM_10-bit                   8
#define       MODEB_PWM_Phase_and_Frequency_Correct1  16
#define       MODEB_PWM_Phase_and_Frequency_Correct2  16
#define       MODEB_PWM_Phase_Correct1                16
#define       MODEB_PWM_Phase_Correct2                16
#define       MODEB_CTC2                              24
#define       MODEB_Fast_PWM1                         24
#define       MODEB_Fast_PWM2                         24



#define     MODE_Normal                   0
#define     MODE_TOGGLE                   64
#define     MODE_SETTOP_CLRCOM            128
#define     MODE_CLRTOP_SETCOM            192

#define        TIMER1_DIV_BY_NONE    0   
#define        TIMER1_DIV_BY_1       1
#define        TIMER1_DIV_BY_8       2
#define        TIMER1_DIV_BY_64      3
#define        TIMER1_DIV_BY_256     4
#define        TIMER1_DIV_BY_1024    5 




#define  NULL                (void *)0



#endif
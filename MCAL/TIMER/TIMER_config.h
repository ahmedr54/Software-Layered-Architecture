#ifndef TIMER_CONFIG_H
#define TIMER_CONFIG_H

/*Timer0*/
#define  TIMER_PRESCALER   TIMER_DIV_BY_8//NONE ,1,8,64,256,1024

#define  TIMER_WAVE_GEN   MODE_FAST_PWM //NORMAL ,PWM ,CTC, FAST_PWM

#define  TIMER_COMPARE_PEM  MODE_SETTOP_CLEARCOM //MODE_DISCONNECT ,MODE_SETTOP_CLEARCOM ,MODE_SETCOM_CLEARTOP

#define CLOCK                 1 //.125 ,1,8,32 ,128 (but should change first TIMER_DIV_BY in the same order) 
#define COMPARE_MATCH         250



/*Timer0*/
#define  TIMER1_GEN_MODE   MODE_Fast_PWM1 
// Normal ,(PWM_Phase_Correct_8-bit) ,(PWM_Phase_Correct_9-bit),(PWM_Phase_Correct_10-bit) ,CTC1 ,(Fast_PWM_8-bit),(Fast_PWM_9-bit),(Fast_PWM_10-bit),(PWM_Phase_and_Frequency_Correct1),(PWM_Phase_and_Frequency_Correct2),(PWM_Phase_Correct1),(PWM_Phase_Correct2),CTC2 ,Fast_PWM1 ,Fast_PWM2


#define  TIMER1_GENB_MODE   MODEB_Fast_PWM1 
// Normal ,(PWM_Phase_Correct_8-bit) ,(PWM_Phase_Correct_9-bit),(PWM_Phase_Correct_10-bit) ,CTC1 ,(Fast_PWM_8-bit),(Fast_PWM_9-bit),(Fast_PWM_10-bit),(PWM_Phase_and_Frequency_Correct1),(PWM_Phase_and_Frequency_Correct2),(PWM_Phase_Correct1),(PWM_Phase_Correct2),CTC2 ,Fast_PWM1 ,Fast_PWM2
#define  TIMER1_Fast_PWM   MODE_SETTOP_CLRCOM //Normal ,TOGGLE ,SETTOP_CLRCOM ,CLRTOP_SETCOM

#define  TIMER1_PRESCALER   TIMER1_DIV_BY_8//NONE ,1,8,64,256,1024


#endif
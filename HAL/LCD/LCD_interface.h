#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H



void LCD_voidSendCommand (u8 Copy_u8Command);
void LCD_voidSendData (u8 Copy_u8Data);
void LCD_voidInit(void);
void LCD_voidInitIn4Bit(void);
void LCD_voidGoToXY(u8 Copy_u8XPosition ,u8  Copy_u8YPosition);
void LCD_voidSendCustomCharacter (u8 *Copy_pu8CharacterArray , u8 Copy_u8PatternNum ,u8 Copy_u8XPosition ,u8  Copy_u8YPosition);

#define  LCD_ROW0     0
#define  LCD_ROW1     1

#define LCD_colunm0   0
#define LCD_colunm1   1
#define LCD_colunm2   2
#define LCD_colunm3   3
#define LCD_colunm4   4
#define LCD_colunm5   5
#define LCD_colunm6   6
#define LCD_colunm7   7
#define LCD_colunm8   8
#define LCD_colunm9   9
#define LCD_colunm10  10
#define LCD_colunm11  11
#define LCD_colunm12  12
#define LCD_colunm13  13
#define LCD_colunm14  14
#define LCD_colunm15  15s
		



#endif
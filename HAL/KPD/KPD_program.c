#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "../../MCAL/DIO/DIO_interface.h"

#include "KPD_interface.h"
#include "KPD_private.h"
#include "KPD_config.h" 

void KPD_voidInit (void)
{
	DIO_voidSetPinDirection (KPD_COLUMNS_PORT,KPD_COLUMN0_PIN ,OUTPUT)   ;
	DIO_voidSetPinDirection (KPD_COLUMNS_PORT,KPD_COLUMN1_PIN ,OUTPUT)   ;
	DIO_voidSetPinDirection (KPD_COLUMNS_PORT,KPD_COLUMN2_PIN ,OUTPUT)   ;
	DIO_voidSetPinDirection (KPD_COLUMNS_PORT,KPD_COLUMN3_PIN ,OUTPUT)   ;
	
	DIO_voidSetPinValue (KPD_COLUMNS_PORT,KPD_COLUMN0_PIN ,HIGH)       ;
	DIO_voidSetPinValue (KPD_COLUMNS_PORT,KPD_COLUMN1_PIN ,HIGH)       ;
	DIO_voidSetPinValue (KPD_COLUMNS_PORT,KPD_COLUMN2_PIN ,HIGH)       ;
	DIO_voidSetPinValue (KPD_COLUMNS_PORT,KPD_COLUMN3_PIN ,HIGH)       ;
	
	DIO_voidSetPinDirection (KPD_ROWS_PORT,KPD_ROW0_PIN ,INPUT)   ;
	DIO_voidSetPinDirection (KPD_ROWS_PORT,KPD_ROW1_PIN ,INPUT)   ;
	DIO_voidSetPinDirection (KPD_ROWS_PORT,KPD_ROW2_PIN ,INPUT)   ;
	DIO_voidSetPinDirection (KPD_ROWS_PORT,KPD_ROW3_PIN ,INPUT)   ;
							
	DIO_voidSetPinValue     (KPD_ROWS_PORT,KPD_ROW0_PIN ,PULLUP)       ;
	DIO_voidSetPinValue     (KPD_ROWS_PORT,KPD_ROW1_PIN ,PULLUP)       ;
	DIO_voidSetPinValue     (KPD_ROWS_PORT,KPD_ROW2_PIN ,PULLUP)       ;
	DIO_voidSetPinValue     (KPD_ROWS_PORT,KPD_ROW3_PIN ,PULLUP)       ;
	
}

u8 KPD_u8PressedKey (void)
{
	u8 Local_u8ColumnsCounter ;
	u8 Local_u8RowsCounter ;
	u8 Local_u8PinState ;
	u8 Local_u8Pressedkey =KPD_NOPRESSEDKEY;
	u8 Local_u8RowsArray [4]={KPD_ROW0_PIN ,KPD_ROW1_PIN ,KPD_ROW2_PIN,KPD_ROW3_PIN} ;
	u8 Local_u8ColumnsArray [4]={KPD_COLUMN0_PIN ,KPD_COLUMN1_PIN ,KPD_COLUMN2_PIN,KPD_COLUMN3_PIN} ;
	u8 Local_u8KeysArray[4][4]= KPD_KEYSARRAY_VALUES;
	for ( Local_u8ColumnsCounter =0 ; Local_u8ColumnsCounter <4; Local_u8ColumnsCounter ++)
	{
		
		DIO_voidSetPinValue (KPD_COLUMNS_PORT,Local_u8ColumnsArray [Local_u8ColumnsCounter] ,LOW);
		for ( Local_u8RowsCounter =0 ; Local_u8RowsCounter <4; Local_u8RowsCounter ++)
		{
			Local_u8PinState = DIO_u8GetPinValue (KPD_ROWS_PORT,Local_u8RowsArray [Local_u8RowsCounter] ); 
			if (Local_u8PinState == 0)
			{
				Local_u8Pressedkey = Local_u8KeysArray[Local_u8RowsCounter][Local_u8ColumnsCounter] ;
				/*Busy Waiting*/
				while (Local_u8PinState == 0)
				{
				Local_u8Pressedkey = Local_u8KeysArray[Local_u8RowsCounter][Local_u8ColumnsCounter] ;
				}
				
				return Local_u8Pressedkey ;
			}
		}
		DIO_voidSetPinValue (KPD_COLUMNS_PORT,Local_u8ColumnsArray [Local_u8ColumnsCounter] ,HIGH);
		
	}
	
	return Local_u8Pressedkey ;
}

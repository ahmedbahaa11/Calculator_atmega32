
#include <util/delay.h>
/* Include Header Files From LIB */
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"

/* Include Header Files From MCAL Layer */
#include "../MCAL/DIO/DIO_Interface.h"

/* Include Header Files From HAL Layer */
#include "../HAL/LCD/LCD_Interface.h"
#include "../HAL/KPAD/KPAD_Interface.h"
/*
 Local_u8PressedKey = KPAD_u8GetPressedKey ();
	if ( Local_u8PressedKey != 0xff )
	{
		LCD_voidWriteChar(Local_u8PressedKey);
	}
*/

int main()
{
	LCD_voidInit();
	KPAD_voidInit();

	u32 operand_1 = 0 ;
	u32 operand_2 = 0 ;
	u8 operator ;
	u8 operator_flag = 0 ;
	u32 Copy_u8Temp = 0 ;
	u32 Result = 0 ;
	u8 Local_u8PressedKey ;

	LCD_voidGoTo_XY ( LINE_1 ,0);
	LCD_voidWriteString ("Ahmed Bahaa Nasr");
	_delay_ms(100);
	LCD_voidGoTo_XY ( LINE_2 ,3);
	LCD_voidWriteString ("ES Engineer");
	_delay_ms(1200);
	LCD_voidClearDisplay();

	LCD_voidGoTo_XY ( LINE_1 ,3);
	LCD_voidWriteString ("   Welcome To");
	_delay_ms(100);
	LCD_voidGoTo_XY ( LINE_2 ,2);
	LCD_voidWriteString ("MY Calculator");
	_delay_ms(1200);

	LCD_voidClearDisplay();

	while (1)
	{

			Local_u8PressedKey = KPAD_u8GetPressedKey ();
			if ( Local_u8PressedKey != 0xff )
			{

				if( Local_u8PressedKey >= '0' && Local_u8PressedKey <= '9' )
				{
					if ( operator_flag == 0 )
					{
						LCD_voidWriteChar(Local_u8PressedKey);
						Copy_u8Temp = Copy_u8Temp*10 + (Local_u8PressedKey - '0') ;
						operand_1 = Copy_u8Temp ;
					}
					else
					{
						LCD_voidWriteChar(Local_u8PressedKey);
						Copy_u8Temp = Copy_u8Temp*10 + (Local_u8PressedKey - '0') ;
						operand_2 = Copy_u8Temp ;
					}
				}
				else if ( Local_u8PressedKey == '=' )
				{
					LCD_voidWriteChar(Local_u8PressedKey);
					// Operation
					switch(operator)
					{
						case '+' : Result = operand_1 + operand_2 ;    break;
						case '-' : Result = operand_1 - operand_2 ;    break;
						case '*' : Result = operand_1 * operand_2 ;    break;
						case '/' : Result = operand_1 / operand_2 ;    break;
					}
					LCD_voidGoTo_XY ( LINE_2 ,0);
					LCD_voidWriteString ("Res =  ");
					LCD_voidWrite_u32Number (Result);
				}
				else if ( Local_u8PressedKey == '#' )
				{
					operand_1     = 0 ;
					operand_2     = 0 ;
					operator      = 0 ;
					Result        = 0 ;
					Copy_u8Temp   = 0 ;
					operator_flag = 0 ;
					// Clear Display
					LCD_voidClearDisplay();
				}
				else
				{
					operator = Local_u8PressedKey ;
					LCD_voidWriteChar(operator);
					operator_flag = 1 ;
					Copy_u8Temp = 0 ;
				}

			}

	}
}

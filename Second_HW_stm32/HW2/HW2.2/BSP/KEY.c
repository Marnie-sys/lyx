#include "main.h"
uint8_t Key_GetNum(void)
{
	uint8_t KeyNum = 0;
	if (HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin) == 0)
	{
		HAL_Delay(20);
		while (HAL_GPIO_ReadPin(KEY1_GPIO_Port,KEY1_Pin) == 0);
		HAL_Delay(20);
		KeyNum = 1;
	}else if (HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin) == 0)
	{
		HAL_Delay(20);
		while (HAL_GPIO_ReadPin(KEY2_GPIO_Port,KEY2_Pin) == 0);
		HAL_Delay(20);
		KeyNum = 2;
	}

	return KeyNum;
}

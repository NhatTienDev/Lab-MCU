/*
 * led.c
 *
 *  Created on: Nov 25, 2024
 *      Author: Administrator
 */

#include "led.h"

void toggleLedRed()
{
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void toggleLedYellow()
{
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void toggleLedGreen()
{
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}

void toggleLedOrange()
{
	HAL_GPIO_TogglePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin);
}

void toggleLedBlue()
{
	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
}

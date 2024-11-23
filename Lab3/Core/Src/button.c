/*
 * button.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#include "button.h"

int buttonsArr[BUTTONS_NUMBER] = {BUTTON_1_Pin, BUTTON_2_Pin, BUTTON_3_Pin};
int KeyReg0[BUTTONS_NUMBER] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[BUTTONS_NUMBER] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[BUTTONS_NUMBER] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[BUTTONS_NUMBER] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimeOutForKeyPress = 500;
int button_flag[BUTTONS_NUMBER] = {0,0,0};

int isButtonPressed(int i)
{
	if(button_flag[i] == 1)
	{
		button_flag[i] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int i)
{
	button_flag[i] = 1;
}

void getKeyInput()
{
	for(int i=0; i<BUTTONS_NUMBER; i++)
	{
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOA, buttonsArr[i]);

		if((KeyReg1[i] == KeyReg0[i]) && (KeyReg1[i] == KeyReg2[i]))
		{
			if(KeyReg2[i] != KeyReg3[i])
			{
				KeyReg3[i] = KeyReg2[i];
				if(KeyReg3[i] == PRESSED_STATE)
				{
					TimeOutForKeyPress = 500;
					subKeyProcess(i);
				}
			}
			else
			{
				TimeOutForKeyPress --;
				if(TimeOutForKeyPress == 0)
				{
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}
}

/*
 * auto.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#include "auto.h"

void autoRun()
{
	if(MODE == MODE1)
	{
		switch(firstCoupleLedAutoState)
		{
			case LED_INIT:
				firstCoupleLedAutoState = RED;
				setTimer0(100);
				break;
			case RED:
				displayFirstLedCouple(RED);
				if(timer0_flag == 1)
				{
					countdownFirstCoupleLed--;
					if(countdownFirstCoupleLed == 0)
					{
						countdownFirstCoupleLed = greenDelay;
						firstCoupleLedAutoState = GREEN;
					}
					setTimer0(100);
				}
				break;
			case GREEN:
				displayFirstLedCouple(GREEN);
				if(timer0_flag == 1)
				{
					countdownFirstCoupleLed--;
					if(countdownFirstCoupleLed == 0)
					{
						countdownFirstCoupleLed = yellowDelay;
						firstCoupleLedAutoState = YELLOW;
					}
					setTimer0(100);
				}
				break;
			case YELLOW:
				displayFirstLedCouple(YELLOW);
				if(timer0_flag == 1){
					countdownFirstCoupleLed--;
					if(countdownFirstCoupleLed == 0)
					{
						countdownFirstCoupleLed = redDelay;
						firstCoupleLedAutoState = RED;
					}
					setTimer0(100);
				}
				break;
			default:
				break;
		}
		switch(secondCoupleLedAutoState)
		{
			case LED_INIT:
				secondCoupleLedAutoState = GREEN;
				setTimer1(100);
				break;
			case RED:
				displaySecondLedCouple(RED);
				if(timer1_flag == 1)
				{
					countdownSecondCoupleLed--;
					if(countdownSecondCoupleLed == 0)
					{
						countdownSecondCoupleLed = greenDelay;
						secondCoupleLedAutoState = GREEN;
					}
					setTimer1(100);
				}
				break;
			case GREEN:
				displaySecondLedCouple(GREEN);
				if(timer1_flag == 1)
				{
					countdownSecondCoupleLed--;
					if(countdownSecondCoupleLed == 0)
					{
						countdownSecondCoupleLed = yellowDelay;
						secondCoupleLedAutoState = YELLOW;
					}
					setTimer1(100);
				}
				break;
			case YELLOW:
				displaySecondLedCouple(YELLOW);
				if(timer1_flag == 1)
				{
					countdownSecondCoupleLed--;
					if(countdownSecondCoupleLed == 0)
					{
						countdownSecondCoupleLed = redDelay;
						secondCoupleLedAutoState = RED;
					}
					setTimer1(100);
				}
				break;
			default:
				break;
		}
		switch(seg7AutoState)
		{
			case SEG_INIT:
				seg7AutoState = FIRST;
				setTimer2(1);
				break;
			case FIRST:
				if(timer2_flag == 1)
				{
					showTimeDelay_First(countdownFirstCoupleLed, countdownSecondCoupleLed);
					seg7AutoState = SECOND;
					setTimer2(50);
				}
				break;
			case SECOND:
				if(timer2_flag == 1)
				{
					showTimeDelay_Second(countdownFirstCoupleLed, countdownSecondCoupleLed);
					seg7AutoState = FIRST;
					setTimer2(50);
				}
				break;
			default:
				break;
		}

		if(isButtonPressed(0) == 1 )
		{
			MODE = MODE2;
		}
	}
}

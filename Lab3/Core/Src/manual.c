/*
 * manual.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#include "manual.h"

void mode2_run()
{
	switch(mode2Toggle)
	{
		case TOGGLE_INIT:
			mode2Toggle = TOGGLE;
			setTimer3(25);
			break;
		case TOGGLE:
			if(timer3_flag == 1)
			{
				toggleLeds(RED);
				setTimer3(25);
			}
			break;
		default:
			break;
	}
	switch(mode2Increase)
	{
		case INCREASE_INIT:
			if(isButtonPressed(1) == 1)
			{
				mode2Increase = INCREASE;
				redDelay +=1;
			}
			break;
		case INCREASE:
			if(isButtonPressed(1) == 1)
			{
				redDelay +=1;
				if(redDelay >= 99) redDelay = 1;
			}
			if(isButtonPressed(2) == 1)
			{
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
	switch(mode2Seg)
	{
		case SEG_INIT:
			mode2Seg = FIRST;
			setTimer4(25);
			break;
		case FIRST:
			if(timer4_flag == 1)
			{
				showTimeDelay_First(1,redDelay);
				mode2Seg = SECOND;
				setTimer4(25);
			}
			break;
		case SECOND:
			if(timer4_flag == 1)
			{
				showTimeDelay_Second(1,redDelay);
				setTimer4(25);
				mode2Seg = FIRST;
			}
			break;
		default:
			break;
	}
}

void mode3_run()
{
	switch(mode3Toggle)
	{
		case TOGGLE_INIT:
			mode3Toggle = TOGGLE;
			setTimer5(25);
			break;
		case TOGGLE:
			if(timer5_flag == 1)
			{
				toggleLeds(YELLOW);
				setTimer5(25);
			}
			break;
		default:
			break;
	}
	switch(mode3Increase)
	{
		case INCREASE_INIT:
			if(isButtonPressed(1) == 1)
			{
				mode3Increase = INCREASE;
				yellowDelay +=1;
			}
			break;
		case INCREASE:
			if(isButtonPressed(1) == 1)
			{
				yellowDelay +=1;
				if(yellowDelay >= 99) yellowDelay = 1;
			}
			if(isButtonPressed(2) == 1)
			{
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
	switch(mode3Seg)
	{
		case SEG_INIT:
			mode3Seg = FIRST;
			setTimer6(25);
			break;
		case FIRST:
			if(timer6_flag == 1)
			{
				showTimeDelay_First(1,yellowDelay);
				mode3Seg = SECOND;
				setTimer6(25);
			}
			break;
		case SECOND:
			if(timer6_flag == 1)
			{
				showTimeDelay_Second(1,yellowDelay);
				setTimer6(25);
				mode3Seg = FIRST;
			}
			break;
		default:
			break;
	}
}

void mode4_run()
{
	switch(mode4Toggle)
	{
		case TOGGLE_INIT:
			mode4Toggle = TOGGLE;
			setTimer7(25);
			break;
		case TOGGLE:
			if(timer7_flag == 1)
			{
				toggleLeds(GREEN);
				setTimer7(25);
			}
			break;
		default:
			break;
	}
	switch(mode4Increase)
	{
		case INCREASE_INIT:
			if(isButtonPressed(1) == 1)
			{
				mode4Increase = INCREASE;
				greenDelay +=1;
			}
			break;
		case INCREASE:
			if(isButtonPressed(1) == 1)
			{
				greenDelay +=1;
				if(greenDelay >= 99) greenDelay = 1;
			}
			if(isButtonPressed(2) == 1)
			{
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
	switch(mode4Seg)
	{
		case SEG_INIT:
			mode4Seg = FIRST;
			setTimer8(25);
			break;
		case FIRST:
			if(timer8_flag == 1)
			{
				showTimeDelay_First(1,greenDelay);
				mode4Seg = SECOND;
				setTimer8(25);
			}
			break;
		case SECOND:
			if(timer8_flag == 1)
			{
				showTimeDelay_Second(1,greenDelay);
				setTimer8(25);
				mode4Seg = FIRST;
			}
			break;
		default:
			break;
	}
}

void manualRun()
{
	switch(MODE)
	{
		case MODE2:
			mode2_run();
			if(isButtonPressed(0) == 1)
			{
				MODE = MODE3;
			}
			break;
		case MODE3:
			mode3_run();
			if(isButtonPressed(0) == 1)
			{
				MODE = MODE4;
			}
			break;
		case MODE4:
			mode4_run();
			if(isButtonPressed(0) == 1)
			{
				MODE = MODE1;
				setValues();
			}
			break;
		default:
			break;
	}
}

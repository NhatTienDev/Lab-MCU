/*
 * display_led.c
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#include "display_led.h"

void displayFirstLedCouple(enum LedState state_1)
{
	switch(state_1)
	{
		case LED_INIT:
			HAL_GPIO_WritePin(FIRST_COUPLE_GREEN_GPIO_Port, FIRST_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_YELLOW_GPIO_Port, FIRST_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_RED_GPIO_Port, FIRST_COUPLE_RED_Pin, 1);
			break;
		case RED:
			HAL_GPIO_WritePin(FIRST_COUPLE_GREEN_GPIO_Port, FIRST_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_YELLOW_GPIO_Port, FIRST_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_RED_GPIO_Port, FIRST_COUPLE_RED_Pin, 0);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(FIRST_COUPLE_GREEN_GPIO_Port, FIRST_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_YELLOW_GPIO_Port, FIRST_COUPLE_YELLOW_Pin, 0);
			HAL_GPIO_WritePin(FIRST_COUPLE_RED_GPIO_Port, FIRST_COUPLE_RED_Pin, 1);
			break;
		case GREEN:
			HAL_GPIO_WritePin(FIRST_COUPLE_GREEN_GPIO_Port, FIRST_COUPLE_GREEN_Pin, 0);
			HAL_GPIO_WritePin(FIRST_COUPLE_YELLOW_GPIO_Port, FIRST_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(FIRST_COUPLE_RED_GPIO_Port, FIRST_COUPLE_RED_Pin, 1);
			break;
		default:
			break;
	}
}

void displaySecondLedCouple(enum LedState state_2)
{
	switch(state_2)
	{
		case LED_INIT:
			HAL_GPIO_WritePin(SECOND_COUPLE_GREEN_GPIO_Port, SECOND_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_YELLOW_GPIO_Port, SECOND_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_RED_GPIO_Port, SECOND_COUPLE_RED_Pin, 1);
			break;
		case RED:
			HAL_GPIO_WritePin(SECOND_COUPLE_GREEN_GPIO_Port, SECOND_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_YELLOW_GPIO_Port, SECOND_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_RED_GPIO_Port, SECOND_COUPLE_RED_Pin, 0);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(SECOND_COUPLE_GREEN_GPIO_Port, SECOND_COUPLE_GREEN_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_YELLOW_GPIO_Port, SECOND_COUPLE_YELLOW_Pin, 0);
			HAL_GPIO_WritePin(SECOND_COUPLE_RED_GPIO_Port, SECOND_COUPLE_RED_Pin, 1);
			break;
		case GREEN:
			HAL_GPIO_WritePin(SECOND_COUPLE_GREEN_GPIO_Port, SECOND_COUPLE_GREEN_Pin, 0);
			HAL_GPIO_WritePin(SECOND_COUPLE_YELLOW_GPIO_Port, SECOND_COUPLE_YELLOW_Pin, 1);
			HAL_GPIO_WritePin(SECOND_COUPLE_RED_GPIO_Port, SECOND_COUPLE_RED_Pin, 1);
			break;
		default:
			break;
   }
}

void toggleLeds(enum LedState state)
{
	switch(state)
	{
		case GREEN:
			HAL_GPIO_TogglePin(FIRST_COUPLE_GREEN_GPIO_Port, FIRST_COUPLE_GREEN_Pin);
			HAL_GPIO_TogglePin(SECOND_COUPLE_GREEN_GPIO_Port, SECOND_COUPLE_GREEN_Pin);
			break;
		case YELLOW:
			HAL_GPIO_TogglePin(FIRST_COUPLE_YELLOW_GPIO_Port, FIRST_COUPLE_YELLOW_Pin);
			HAL_GPIO_TogglePin(SECOND_COUPLE_YELLOW_GPIO_Port, SECOND_COUPLE_YELLOW_Pin);
			break;
		case RED:
			HAL_GPIO_TogglePin(FIRST_COUPLE_RED_GPIO_Port, FIRST_COUPLE_RED_Pin);
			HAL_GPIO_TogglePin(SECOND_COUPLE_RED_GPIO_Port, SECOND_COUPLE_RED_Pin);
			break;
		default:
			break;
	}
}

void displaySEG7_1(int num)
{
	switch(num)
	{
		case 0:
			HAL_GPIO_WritePin( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin( E1_GPIO_Port , E1_Pin , 0 );
			HAL_GPIO_WritePin( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin( G1_GPIO_Port , G1_Pin , 1 );
			break;

		case 1:
			HAL_GPIO_WritePin( A1_GPIO_Port , A1_Pin , 1 );
			HAL_GPIO_WritePin( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin( D1_GPIO_Port , D1_Pin , 1 );
			HAL_GPIO_WritePin( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin( F1_GPIO_Port , F1_Pin , 1 );
			HAL_GPIO_WritePin( G1_GPIO_Port , G1_Pin , 1 );
			break;

		case 2:
			HAL_GPIO_WritePin( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin( C1_GPIO_Port , C1_Pin , 1 );
			HAL_GPIO_WritePin( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin( E1_GPIO_Port , E1_Pin , 0 );
			HAL_GPIO_WritePin( F1_GPIO_Port , F1_Pin , 1 );
			HAL_GPIO_WritePin( G1_GPIO_Port , G1_Pin , 0 );
			break;

		case 3:
			HAL_GPIO_WritePin( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin( F1_GPIO_Port , F1_Pin , 1 );
			HAL_GPIO_WritePin( G1_GPIO_Port , G1_Pin , 0 );
			break;

		case 4:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 1 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 );
			break;
		case 5:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 1 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 );
			break;
		case 6:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 1 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 );
			break;
		case 7:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 1 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 1 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 1 );
			break;
		case 8:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 0 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 );
			break;
		case 9:
			HAL_GPIO_WritePin ( A1_GPIO_Port , A1_Pin , 0 );
			HAL_GPIO_WritePin ( B1_GPIO_Port , B1_Pin , 0 );
			HAL_GPIO_WritePin ( C1_GPIO_Port , C1_Pin , 0 );
			HAL_GPIO_WritePin ( D1_GPIO_Port , D1_Pin , 0 );
			HAL_GPIO_WritePin ( E1_GPIO_Port , E1_Pin , 1 );
			HAL_GPIO_WritePin ( F1_GPIO_Port , F1_Pin , 0 );
			HAL_GPIO_WritePin ( G1_GPIO_Port , G1_Pin , 0 );
			break;

		default:
			break;
	}
}

void displaySEG7_2(int num)
{
	switch(num)
	{
		case 0:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 0 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 1 );
			break;

		case 1:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 1 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 1 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 1 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 1 );
			break;

		case 2:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 1 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 0 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 1 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;

		case 3:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 1 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;

		case 4:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 1 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 1 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;
		case 5:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 1 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;
		case 6:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 1 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 0 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;
		case 7:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 1 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 1 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 1 );
			break;
		case 8:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 0 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;
		case 9:
			HAL_GPIO_WritePin ( A2_GPIO_Port , A2_Pin , 0 );
			HAL_GPIO_WritePin ( B2_GPIO_Port , B2_Pin , 0 );
			HAL_GPIO_WritePin ( C2_GPIO_Port , C2_Pin , 0 );
			HAL_GPIO_WritePin ( D2_GPIO_Port , D2_Pin , 0 );
			HAL_GPIO_WritePin ( E2_GPIO_Port , E2_Pin , 1 );
			HAL_GPIO_WritePin ( F2_GPIO_Port , F2_Pin , 0 );
			HAL_GPIO_WritePin ( G2_GPIO_Port , G2_Pin , 0 );
			break;

		default:
			break;
	}
}

void enable0()
{
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
}

void enable1()
{
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
}

void enable2()
{
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}

void enable3()
{
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
}

void showTimeDelay_First(int first, int second)
{
	enable0();
	displaySEG7_1(first/10);
	enable2();
	displaySEG7_2(second/10);
}

void showTimeDelay_Second(int first, int second)
{
	enable1();
	displaySEG7_1(first%10);
	enable3();
	displaySEG7_2(second%10);
}

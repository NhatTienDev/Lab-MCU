/*
 * display_led.h
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#ifndef INC_DISPLAY_LED_H_
#define INC_DISPLAY_LED_H_

#include "main.h"
#include "global.h"

void displayFirstLedCouple(enum LedState state_1);
void displaySecondLedCouple(enum LedState state_2);

void toggleLeds(enum LedState state);

void displaySEG7_1(int num);
void displaySEG7_2(int num);

void enable0();
void enable1();
void enable2();
void enable3();

void showTimeDelay_First(int first, int second);
void showTimeDelay_Second(int first, int second);

#endif /* INC_DISPLAY_LED_H_ */

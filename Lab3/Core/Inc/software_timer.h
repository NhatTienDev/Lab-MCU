/*
 * software_timer.h
 *
 *  Created on: Nov 12, 2024
 *      Author: Administrator
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

int timer0_flag;
int timer1_flag;
int timer2_flag;
int timer3_flag;
int timer4_flag;
int timer5_flag;
int timer6_flag;
int timer7_flag;
int timer8_flag;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void setTimer6(int duration);
void setTimer7(int duration);
void setTimer8(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */

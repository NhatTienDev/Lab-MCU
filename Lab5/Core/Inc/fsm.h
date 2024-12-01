/*
 * fsm.h
 *
 *  Created on: Nov 30, 2024
 *      Author: Administrator
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "main.h"
#include "software_timer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define INIT                 0
#define READING              1
#define PARSING              2

#define RST                  10
#define OK                   11

#define MAX_BUFFER_SIZE      30
#define MAX_COMMAND_SIZE     3

extern uint8_t buffer_character;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t buffer_index;
extern uint8_t buffer_flag;

void command_parser();
void uart_communication();

#endif /* INC_FSM_H_ */

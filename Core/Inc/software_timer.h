/*
 * software_timer.h
 *
 *  Created on: Oct 7, 2022
 *      Author: MyPC
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_


#include "main.h"

#define DIV 10;
extern int timer_flag;
extern int counter;
void timerRun();
void setTimer(int duration);


#endif /* INC_SOFTWARE_TIMER_H_ */

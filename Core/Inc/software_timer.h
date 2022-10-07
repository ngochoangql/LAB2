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
extern int timer_flag1;
extern int counter1;
extern int timer_flag2;
extern int counter2;
void timerRun();
void setTimer1(int duration);
void setTimer2(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */

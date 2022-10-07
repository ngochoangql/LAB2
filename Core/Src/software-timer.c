/*
 * software-timer.c
 *
 *  Created on: Oct 7, 2022
 *      Author: MyPC
 */

#include "software_timer.h"

int timer_flag1 = 0;
int counter1 = 0;

int timer_flag2 = 0;
int counter2 = 0;

void setTimer1(int duration){
	counter1 = duration/DIV;
	timer_flag1 = 0;
}
void setTimer2(int duration){
	counter2 = duration/DIV;
	timer_flag2 = 0;
}

void timerRun(){
	if (counter1>0){
		counter1--;
		if (counter1<=0){
			timer_flag1=1;
			counter1=0;
		}
	}
	if (counter2>0){
		counter2--;
		if (counter2<=0){
			timer_flag2=1;
			counter2=0;
		}
	}
}

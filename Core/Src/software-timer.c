/*
 * software-timer.c
 *
 *  Created on: Oct 7, 2022
 *      Author: MyPC
 */

#include "software_timer.h"

int timer_flag = 0;
int counter = 0;

void setTimer(int duration){
	counter = duration/DIV;
	timer_flag = 0;
}

void timerRun(){
	if (counter>0){
		counter--;
		if (counter<=0){
			timer_flag=1;
			counter=0;
		}
	}
}

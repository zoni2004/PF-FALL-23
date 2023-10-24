/*
* Programmer: Zunaira Amjad
* Desc: checking if car number and week day are even then return 1 else return 0
* Date: 10-10-23
*
*/

#include <stdio.h>

int decide_car_usage (int car_no, int week_day){
	int result = 0;
	if (car_no > 0){
		if (car_no % 2 == 0){
			if (week_day % 2 == 0){
			     return 1;
			}
			else {
			    return 0;		
			}
		}
		if (car_no % 2 != 0){
			if (week_day % 2 == 0){
				return 0;
			}
			else {
				return 1;
			}
		}
	}
	else {
		printf ("Invalid Input");
	}
	
}

int main (){
	int car_no, week_day;
	printf ("Enter the number of car");
	scanf ("%d",&car_no);
	printf ("Enter the number of day it is in the week");
	scanf ("%d",&week_day);
	
	decide_car_usage (car_no, week_day);
	if (decide_car_usage (car_no, week_day) == 1 ){
		printf ("Can take this car today");
	}
	else {
		printf ("Can not take this car today");
	}
return 0;	
}

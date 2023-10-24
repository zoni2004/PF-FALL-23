#include <stdio.h>

int decide_car_usage (int car_no, int week_day){
	int result = 0;
	if (car_no > 0){
		if (car_no % 2 == 0){
			if (week_day % 2 == 0){
			     result = 1;
			}
			else {
				printf ("Can not take this car");		
			}
		}
		if (car_no % 2 != 0){
			if (week_day % 2 == 0){
				printf ("Can not take this car");
			}
			else {
				printf ("Can take this car");
				 result=1;
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
	if (decide_car_usage (car_no, week_day) == 0 ){
		printf ("Can take this car today");
	}
	else {
		printf ("Can not take this car today");
	}
	
}

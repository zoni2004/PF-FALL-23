/*
* Programmer: Zunaira Amjad
* Desc:using structures to store, find , compare, and print data 
* Date: 21-11-23
*
*/


#include <stdio.h>

struct date{
	int day;
	char month[10];
	int year;
};

int main (){
	struct date d[2];
	int i;
	for (i=0; i<2; i++){
		printf ("Enter the %d date \n",i+1);
		printf ("Enter day \n");
		scanf ("%d" ,&d[i].day);
		printf ("Enter month \n");
		scanf ("%s" ,d[i].month);
		printf ("Enter year \n");
		scanf ("%d" ,&d[i].year);
	}
	for (i=0; i<2; i++){
			if (d[i].day == d[i+1].day){
			if ((strcmp (d[i].month, d[i+1].month) == 0)){
				if (d[i].year == d[i+1].year){
					printf ("Dates are equal");
				}
				else {
					printf ("Dates are not equal");
				}
			}
		}

	}
	
	return 0;
}

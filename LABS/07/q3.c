/*
* Programmer: Zunaira Amjad
* Desc: finding the digit sum of a given number
* Date: 10-10-23
*
*/
#include <stdio.h>

int main (){
	int num, rem, quotient, sum;
	printf ("Enter a number");
	scanf ("%d" ,&num);
	while (num > 10) {
		rem = num % 10;
		quotient = num / 10;
		num = quotient;
		sum = sum + rem;
	}
	sum = sum + num;
	printf ("The sum of the number is %d" ,sum);
	
return 0;
}

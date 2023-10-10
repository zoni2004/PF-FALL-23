/*
* Programmer: Zunaira Amjad
* Desc: dividing a number w/o using the divison operator
* Date: 10-10-23
*
*/
#include <stdio.h>

int main (){
	int num1, num2, rem, sub;
	int q = 0;
	printf ("Enter a number");
	scanf ("%d" ,&num1);
	printf ("Enter another number");
	scanf ("%d" ,&num2);
    if (num1 > num2) {
    	do {
    			sub = num1 - num2;
    			num1 = sub;
    			q = q + 1;
		} while (sub > num2);//end do-while
     rem = num1;
     printf ("The quotient %d" ,q);
     printf ("The remainder %d" ,rem);
	}
	
return 0;
}

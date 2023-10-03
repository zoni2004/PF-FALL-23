/*
* Programmer: Zunaira Amjad
* Desc: Generatib fibonnaci sequence and sum of numbers in sequence divisble by 3,5,7
* Date: 03-10-23
*
*/

#include<stdio.h>

int main (){
	int i;
	int n1 = 0;
	int n2 = 1;
	int total; //sum if divisible by 3 or 5 or 7
	printf ("%d \t", n2);
	int sum = n1 + n2;
	printf ("%d \t", sum);
	for (i=1; n2<=10000; i++){
		n1 = n2;
		n2 = sum;
		sum = n1 + n2;
		printf ("%d \t", sum);
		
	if (sum % 3 == 0){
		total = sum + sum;
	} //end if
	else if (sum % 5 == 0){
		total = sum + sum;
	} //end else if
	else if (sum % 7 == 0){
		total = sum + sum;
	} //end else if
	else {
		total = total + 0;
	} //end else
    
	} //end for 
	printf ("\n Your total is :%d", total);
	return 0;
} //end main

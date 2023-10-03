/*
* Programmer: Zunaira Amjad
* Desc: Finding LCM AND GCD
* Date: 03-10-23
*
*/

#include<stdio.h>

int main (){
	int n1, n2;
	printf ("Enter a number \n");
	scanf ("%d" ,&n1);
	printf ("Enter another number \n");
	scanf ("%d" ,&n2); //taking number inputs
	int i;
	int LCM,GCD ;
	for (i=1; i<=n1; ++i){
    	if (n1%i==0 && n2%i==0){
	         GCD = i; //finding GCD
			 LCM = (n1*n2)/GCD;	//finding LCM
        }//end if 
	}//end for
	printf ("Your GCD is: %d\n", GCD); 
  printf ("Your LCM is: %d\n", LCM); 
	return 0;
} //end main

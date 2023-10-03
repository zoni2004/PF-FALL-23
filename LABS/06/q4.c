/*
* Programmer: Zunaira Amjad
* Desc: printing values from a to b with specifications
* Date: 03-10-23
*
*/

#include<stdio.h>

int main (){
	int a , b;
	printf ("Enter a number \n");
	scanf ("%d" ,&a);
	printf ("Enter another number \n");
	scanf ("%d" ,&b);
	int i;
	do {
	while (a<=b){
	if (a<=9){
			 switch (a){
			 	case 1:
			 		printf ("ONE \n");
			 		break;
			 	case 2:
			 	     printf ("TWO \n");
			 	     break;
			     case 3:
			 		printf ("THREE \n");
			 		break;
			 	case 4:
			 		printf ("FOUR \n");
			 		break;
			 	case 5:
			 		printf ("FIVE \n");
			 		break;
			 	case 6:
			 		printf ("SIX \n");
			 		break;
			 	case 7:
			 		printf ("SEVEN \n");
			 		break;
			 	case 8:
			 		printf ("EIGHT \n");
			 		break;
			 	case 9:
			 		printf ("NINE \n");
			 		break;
			 }//end switch
	     }//end if
	    else if (a>9){	
			 if (a%2==0){
			 	 printf ("The number is even \n");	
			 }
			 else {
			  printf ("The number is odd \n");		
			 }
	     }//end else if
		a++;
	}//end while
	
    } while (a < b); //end while
 
	return 0;
} //end main

/*
* Programmer: Zunaira Amjad
* Desc: Finding out if an entered number is a perfect number or not
* Date: 03-10-23
*
*/

#include<stdio.h>

int main (){
    int n, rem, i; //declaring variables
    int sum = 0;   //initializing variables
    printf ("Enter a number: \n");
    scanf ("%d" ,&n); //taking number inputs
    for (i=1 ; i<n ; i++){
    	  rem = n % i; //finding factors of the number 
        if (rem == 0) {
            sum = sum + i; //adding the factors except for the number itself
        } //end if
    } //end for
    if (sum == n) {
        printf ("The number you entered is a perfect number",sum);
    }
    else {
        printf ("The number you entered is not a perfect number",sum);
    } //end if


    return 0;

} //end main

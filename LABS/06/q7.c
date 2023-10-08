/*
* Programmer: Zunaira Amjad
* Desc: array summation
* Date: 03-10-23
*
*/
#include <stdio.h>

int main (){
    int n, i;
    int sum = 0;
    int arr [9] = {1,2,3,4,5,6,7,8,9};

    for (i=0; i<=8 ; i++){
        sum = sum + arr[i];
    } //end for
    printf ("The sum is of the array arr [8] = {1,2,3,4,5,6,7,8,9} is %d ", sum);

 return 0;
} //end main

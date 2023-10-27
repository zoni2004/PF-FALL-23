/*
* Programmer: Zunaira Amjad
* Desc: finding a user input sum from the array
* Date: 27-10-23
*
*/

#include <stdio.h>

int main() {
  //declaring a 1D array
   int n,i;
   printf ("Enter the number of elements of the array");
   scanf ("%d", &n);
   int a[n];
   for (i=0; i<n; i++){
       printf ("Enter %d element of the array",i);
       scanf ("%d", &a[i]);
   }
   //taking user input for the sum they want
   int t;
   printf ("Enter the sum you want");
   scanf ("%d",&t);
   //finding the sum in the array
   int sum,j;
  //using nested loops to sum one number by the whole array ahead of it
   for (i=0; i<n; i++){
       for (j=i+1; j<n; j++){ //using j=i+1 to only add number after the number we are finding pairs for at the moment
           sum = a[i] + a[j]; 
      if (sum == t){
        printf ("The sum is given by (%d, %d) \n", a[i], a[j]);
       }
     }
   }

    return 0;
}//end main

/*
* Programmer: Zunaira Amjad
* Desc: array arrangment in descending order
* Date: 08-10-23
*
*/
#include <stdio.h>

int main () {
    int arr [9] = {1,2,3,4,5,6,7,8,9};
    int temp, i, j;
     for (i=0; i<=8; i++){
         for (j=i+1; j<=8; j++) {
              if (arr [i] < arr [j]) {
                  temp = arr[i];
                  arr [i] = arr [j];
                  arr [j] = temp;
              } //end if
         } //end for 
     } // end for (swapping)
     for (i=0; i<=8; i++){
        printf ("%d \t" , arr[i]);
     }//end for (descending output)
 return 0;
}

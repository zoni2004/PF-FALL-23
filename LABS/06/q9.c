/*
* Programmer: Zunaira Amjad
* Desc: finding max and min in an array
* Date: 08-10-23
*
*/
#include <stdio.h>

int main (){
    int i, temp;
    int arr [10] = {4,1,6,8,10,21,8,9,2,6};
    int max, min;
    
    max = arr [0];
    min = arr [0];
     for (i=0; i<10; i++){
            if (arr[i] > max){
                 max = arr [i];
             } //end if
             else if (arr[i] < min) {
                 min = arr [i];
             } //end else if      
          }//end for
     printf ("The maxium value is %d \n", max);
     printf ("The maxium value is %d", min);
     
return 0;
} //end main

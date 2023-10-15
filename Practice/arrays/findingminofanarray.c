#include <stdio.h>

int main (){
    int n,i;
    printf ("Enter the number of elements of the array");
    scanf ("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }//end for loop for input of array elements
    int min = a[0];
    for (i=0; i<n; i++){
        if (a[i] < min){
            min = a[i];
        }//end if to check for finding min value
    }// end for loop for looping through the array elements
    printf ("The minimum value is %d",min);

    return 0;
}//end main
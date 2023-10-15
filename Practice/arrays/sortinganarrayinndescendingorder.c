#include <stdio.h>

int main (){
    int i,n,j,temp;
    printf ("Enter the number of elements in the array");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }//end for input

    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }//end innerloop for swapping of smaller number
        }//end outerloop for swapping of smaller number
    }
    printf ("{");
    for (i=0; i<n; i++){
        printf ("%d, ",a[i]);
    }//end for output
    printf ("}");
    return 0;
}//end main

    

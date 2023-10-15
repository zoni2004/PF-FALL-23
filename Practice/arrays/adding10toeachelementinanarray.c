#include <stdio.h>

int main (){
    int i,n;
    printf ("Enter the number of elements in the array");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("enter %d element",i);
        scanf ("%d", &a[i]);
    }//end for
    for (i=0; i<n; i++){
        a[i] += 10;
        printf ("%d, ", a[i]);
    }
return 0;    
} //end main
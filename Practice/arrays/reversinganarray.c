#include <stdio.h>

int main (){
    int i,n,j,temp;
    printf ("Enter the number of elements of an array");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }//end input for
    for (i=0; i<n; i++){
        for (j=i+1 ; j<n ; j++){
           temp = a[i];
           a[i] = a[j];
           a[j] = temp;
        }//end inner loop for swapping
    }//end outer loop for swapping
    printf ("{");
    for (i=0; i<n; i++){
        printf ("%d, ", a[i]);
     }
     printf ("}");
    return 0;
}//end main
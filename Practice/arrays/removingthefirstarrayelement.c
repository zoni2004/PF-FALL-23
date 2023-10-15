#include <stdio.h>

int main (){
    int i,n,d;
    printf ("Enter the number of elements in the array\n");
    scanf ("%d",&n);
    int a[n];
     for (i=0; i<n; i++){
         printf ("Enter %d element",i);
         scanf ("%d", &a[i]);
     } //end for
     printf ("{");
     for (i=1; i<n; i++){
         printf ("%d,",a[i]);
     } //end for
    printf ("}");

    return 0;
}//end main


    

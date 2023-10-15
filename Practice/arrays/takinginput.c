#include <stdio.h>

int main(){
    int i,n;
    printf ("Enter the number of elements of the array");
    scanf ("%d",&n);
    int a[n];
     for (i=0; i<n; i++){
         printf ("enter the %d element",i);
         scanf ("%d", &a[i]);
     }//end for

return 0;
}//end main
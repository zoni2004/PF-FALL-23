#include <stdio.h>

int main (){
    int i,n,j;
    printf ("Enter the number of elements of the array\n");
    scanf ("%d",&n);
    int a[n];
     for (i=0; i<n; i++){
         printf ("Enter %d element",i);
         scanf ("%d", &a[i]);
     }//end for input
     printf ("Enter the index you want to remove the element from \n");
     scanf ("%d", &j);
         if (j >= n){
            printf ("Invalid Input");
         }//end if for check that j is not greater than n
         else {
            printf ("{");
            for (i=0; i<j; i++){
            printf ("%d, ",a[i]);
            }//end for output upto where we need to remove our element
            for (i=j+1; i<n; i++){
              printf ("%d, ",a[i]); 
            }
            printf ("}");
         }//end else for check that j is not greater than n

    return 0;
}//end main
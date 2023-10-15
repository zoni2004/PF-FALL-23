#include <stdio.h>

int main (){
    int i,n,j;
    printf ("Enter the number of elements of the array \n");
    scanf ("%d", &n);
    int a[n];
         for (i=0; i<n; i++){
             printf ("Enter %d element of the array", i);
             scanf ("%d", &a[i]);
          }//end input for
              printf ("Enter the index you want to add the element to");
              scanf ("%d",&j);
             if (j > n) {
                     printf ("Invalid input");
                 }//end else if
             else {
             for (i=0; i<n; i++){
                 if (i != j){
                    continue;
                 }
                 else if(i == j){
                     printf ("Enter the element you want to add at %d index", i);
                     scanf ("%d", &a[i]);
                     printf ("{");
                         for (i=0; i<n; i++){
                              printf ("%d, ", a[i]);
                         }//end input for
                     printf ("}");
                 }//end else if
             }//end for input of element at specific index
             }//end else for check of j less than n
            


    return 0;
}//end main
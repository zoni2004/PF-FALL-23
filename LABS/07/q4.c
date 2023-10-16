/*
* Programmer: Zunaira Amjad
* Desc: identifying singular matrix
* Date: 10-10-23
*
*/

#include <stdio.h>

int main (){
    //taking input of number of rows and columns of array 
    int r,c;
    printf ("Enter the number of rows of array");
    scanf ("%d", &r);
    printf ("Enter the number of columns of array");
    scanf ("%d", &c);
    //taking input of elements of array 
    int i,j;
    int isArraySymmetric = 0;
    int a[r][c];
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            printf ("Enter the element of array 1 at %d row and %d coulmn",i,j);
            scanf ("%d", &a[i][j]);
        }//end inner loop for input of array 
    }//end outer loop for input of array 
    //checking if when rows and columns are reversed matrix does not change (taking transpose)
    int b[c][r];
     for (i=0; i<r; i++){
         for (j=0; j<c; j++){
         //checking elements of input array wwith transpose
              if (a[i][j] != b[j][i]){
                 printf ("Array is not Symmetric");   
                 printf ("{");
                 for (i=0; i<r; i++){
                     for (j=0; j<c; j++){
                         printf ("%d, ", a[i][j]);
                     }//end inner loop for output of array 
                 }//end outer loop for output of array 
                 printf ("}"); 
                break;
              }
              else {
                isArraySymmetric = isArraySymmetric + 1;
                 printf ("Array is Symmetric");   
                 printf ("{");
                 for (i=0; i<r; i++){
                     for (j=0; j<c; j++){
                         printf ("%d, ", a[i][j]);
                     }//end inner loop for output of array 
                 }//end outer loop for output of array 
                 printf ("}"); 
              }
         }//end inner loop for check of elements 
     }//end outer loop for check of elements

   return 0;
}//end main

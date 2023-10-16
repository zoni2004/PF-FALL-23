/*
* Programmer: Zunaira Amjad
* Desc: 2x2 matrix multiplication
* Date: 10-10-23
*
*/
#include <stdio.h>

int  main (){
    int r1,c1,i,j;
    printf ("Enter the number of rows of the 1st array");
    scanf ("%d",&r1);
    printf ("Enter the number of columns of the 1st array");
    scanf ("%d",&c1);
    int a[r1][c1];
      for (i=0; i<r1; i++){
        for (j=0; j<c1; j++){
            printf ("Enter element of %d row and %d column",i,j);
            scanf ("%d",&a[i][j]);
        }
    }
    int r2,c2,k,l;
    printf ("Enter the number of rows of the 2nd array");
    scanf ("%d",&r2);
    printf ("Enter the number of columns of the 2nd array");
    scanf ("%d",&c2);
    int b[r2][c2];
     for (k=0; k<r2; k++){
        for (l=0; l<c2; l++){
            printf ("Enter element of %d row and %d column",k,l);
            scanf ("%d",&b[k][l]);
        }
    }
    int c[r1][c2];
    if (c1 == r2){
        for (i=0; i<r1; i++){
             for (l=0; l<c2; l++){
                   c[i][l] = 0;
                   for (j=0; j<r2; j++){
                    c[i][l] += a[i][j]*b[j][l];
                 }       
            } 
        }
    printf ("{");
    for (i=0; i<r1; i++){
        for (l=0; l<c2; l++){
            printf ("%d, ",c[i][l]);
        }
        printf ("\n");
    }
    printf ("}");
    }/*end if for check of possibility of multiplication of the two arrays*/
    else {
        printf ("Multiplication of the two arrays is not possible since columns of first array is not equal to rows of second array");
    } /*end else for check of possibility of multiplication of the two arrays*/
return 0;
}//end main

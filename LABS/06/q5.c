/*
* Programmer: Zunaira Amjad
* Desc: printing the pattern:
0 0 0 0
  1 1  
2 2 2 2
  3 3
4 4 4 4
  5 5
6 6 6 6
* Date: 03-10-23
*
*/
#include <stdio.h>

int main () {
    int r=0; //row count and number to be printed
    int n; //number of rows enetered by user
    
    printf ("Enter the number of rows you want");
    scanf ("%d", &n);

    do {
        if (r%2 == 0){
            printf ("%d \t" ,r);
            printf ("%d \t" ,r);
            printf ("%d \t" ,r);
            printf ("%d \n" ,r);
        } //end if
        else {
            printf ("  \t");
            printf ("%d \t", r);
            printf ("%d \t" ,r);
            printf ("  \n");
        } //end else
    r = r + 1;
    } while (r <= n); //end while

return 0; 
} //end main

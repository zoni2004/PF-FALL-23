#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 int count=1;
 
 printf ("Enter the values of n: \n");
 scanf ("%d" ,&n);
 
 while (count <= 2* n - 1) {
     int blanks_first = abs (n-count);
     int blanks_later = 2 * (n- blanks_first) - 1;
     int i =1;
     while (i <= blanks_later) {
         printf (" ");
         i++;
     }
 }
 printf ("*");
 
 return 0;
}

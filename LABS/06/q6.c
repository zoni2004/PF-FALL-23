/*
* Programmer: Zunaira Amjad
* Desc: Matchstick game (comp always wins)
total 21 matchsticks
user can pick up 1,2,3 or 4
comp picks after
person who picks up last matchstick loses
* Date: 08-10-23
*
*/
#include <stdio.h>

int main () {
    int n; //matchsticks picked up by the user
    int total_ms = 21; //total number of matchsticks


     while (total_ms > 1 ) {

         printf ("It is your turn \n\n");
         printf ("Please pick up 1,2,3 or 4 matchsticks \n");
         scanf ("%d", &n);
         printf ("The number of matchsticks now is %d \n\n", total_ms);

         total_ms = total_ms - n;

         printf ("The number of matchsticks now is %d \n\n", total_ms);

             if (n == 1) {
                total_ms = total_ms - 4;
                printf ("The number of matchsticks now is %d \n\n", total_ms);
              } //end if
             else if (n == 2) {
                total_ms = total_ms - 3;
                printf ("The number of matchsticks now is %d \n\n", total_ms);
             } //end 1st else if
             else if (n == 3) {
                total_ms = total_ms - 2;
                printf ("The number of matchsticks now is %d \n\n", total_ms);
             } //end 2nd else if
             else if (n == 4) {
                total_ms = total_ms - 1;
                printf ("The number of matchsticks now is %d \n\n", total_ms);
             } //end 3rd else if
             else {
                printf ("Invalid Input\n\n");
             } //end else
     
     } //end while

 printf ("YOU LOSE!");

 return 0;
 } //end main
    

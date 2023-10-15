#include <stdio.h>

int main () {

    int n, i;
    int a[7] = {2,4,8,3,5,6,7};
    printf ("Enter the index from the array you want to access \n");
    scanf ("%d", &n);
    if (n > 6){
        printf ("Invalid input.\nPlease enter a value between 0 and 6");
        scanf ("%d", &n);
        for (i=0; i<7; i++){
         if (i != n){
             continue;
         }//end if
         else if (n > 7) {
             printf ("Invalid input");
         }// end else if
         else {
             printf ("The index %d gives element %d", i,a[i]);
         } //end else
     }//end for 
    } //end if
    else {
    for (i=0; i<7; i++){
         if (i != n){
             continue;
         }//end if
         else if (n > 7) {
             printf ("Invalid input");
         }// end else if
         else {
             printf ("The index %d gives element %d", i,a[i]);
         } //end else
     }//end for 
}//end else

return 0; 
}//end main
   
       



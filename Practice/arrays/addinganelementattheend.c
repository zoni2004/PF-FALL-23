#include <stdio.h>

int main (){
    //taking input of array elements
    int i,n,press;
    printf ("Enter the number of elements in the array\n");
    scanf ("%d",&n);
    int a[n];
     for (i=0; i<n; i++){
         printf ("Enter %d element",i);
         scanf ("%d", &a[i]);
     } //end for
    printf ("Do you want to add an element at the end of the array?\n");
    printf ("Press 1 if yes and 0 if no\n");
    scanf ("%d", &press);
    if (press == 1) {
         printf ("Enter the %d element \n", n);
         scanf ("%d", &a[n]);
         printf ("{");
             for (i=0; i<=n; i++){
              printf ("%d, ", a[i]);
             }//end for
         printf ("}");
    } //end if
    else {
        printf ("{");
        for (i=0; i<n; i++){
        printf ("%d, ", a[i]);
        }//end for
        printf ("}");
    } //end else
    
    return 0;
}//end main
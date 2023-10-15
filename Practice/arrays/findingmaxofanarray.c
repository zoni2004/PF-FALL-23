#include <stdio.h>

int main (){
    int i,n;
    printf ("Enter the number of elemnts of the array");
    scanf ("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }//end input for
     int max = a[0];
    for (i=0; i<n; i++){
            if (a[i] > max){
                max = a[i];
            }//end if for check element is greater than previous element
        }//end for loop for moving through the array elements
       printf ("The maximum value is %d",max);

return 0;
}//end  main
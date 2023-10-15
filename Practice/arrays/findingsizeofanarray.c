#include <stdio.h>

int main (){
    int a[]= {2,4,3,5,6,2,52,2,424,24,41,42,4,2,42,4,24,2,24};
    int size = sizeof(a)/sizeof(a[1]);
    printf ("The size of the array is %d", size);
 return 0;
 }
#include <stdio.h>

int main (){
    int n,i;
    printf ("Enter the number of elements of the array\n");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element \n",i);
        scanf ("%d", &a[i]);
    }
    for (i=0; i<n; i++){
        a[i] *= 2;
        printf ("%d, ", a[i]);
    }
    
    return 0;
}//end main
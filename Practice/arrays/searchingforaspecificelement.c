#include <stdio.h>

int main (){
    int i,n,j;
    printf ("Enter the number of elements of the array",i);
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }
    printf ("Enter the element you are looking for");
    scanf ("%d",&j);
    for (i=0; i<n; i++){
        if (a[i]!=j){
            continue;
        }
        else {
            printf ("The element %d is in the array at index %d \n", a[i],i);
            break;
        }
    }
    if (a[i]!=j) {
        printf ("The element is not in the array");
    }
     
    return 0;
}//end main
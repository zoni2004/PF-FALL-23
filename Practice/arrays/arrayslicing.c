#include <stdio.h>

int main(){
    int i,n,x,y,j;
    printf ("Enter the number of elements of the array");
    scanf ("%d", &n);
    int a[n];
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }// end for input
    printf ("Enter the start of the range of index you want to extract");
    scanf ("%d", &x);
    printf ("Enter the end of the range of index you want to extract");
    scanf ("%d", &y);
    if (x>-1 && y<n){
         printf ("{");
        for (j=x; j<y; j++){
        printf ("%d," ,a[j]);
    }
    for (j=y; j>y; j++){
        printf ("%d," ,a[j]);
    }
    printf ("}");
    }//end if for check of range b/w 0 and n
    else {
         printf ("Invalid input of range");
    }// end else for check of range b/w o and n

    return 0;
}//end main
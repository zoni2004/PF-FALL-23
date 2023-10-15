#include <stdio.h>

int main(){
    int i,j,m,n;
    int sum=0;
    //taking the number of elements of 1st array as input
    printf ("Enter the number of elements of the first array");
    scanf ("%d",&n);
    int a[n];//1st array
    //taking elements of 1st array as input
    for (i=0; i<n; i++){
        printf ("Enter %d element",i);
        scanf ("%d", &a[i]);
    }//loop for input of 1st array
    //taking the number of elements of 2nd array as input
    printf ("Enter the number of elements of the second array");
    scanf ("%d",&m);
    int b[m];//2nd array
    //taking elements of 2nd array as input
    for (j=0; j<m; j++){
        printf ("Enter %d element",j);
        scanf ("%d", &b[j]);
    }//loop for input of 2nd array
    //finding intersection of 1st and 2nd array
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (a[i]==b[j]){
                sum=sum+1;
                a[i] = b[j];
                continue;
            }//end if for check of similar elements
        }//end inner for loop for check of intersection b/w 2 arrays
    }//end outer for loop for check of intersection b/w 2 arrays
    printf ("{");
for (i=0; i<sum; i++){
    printf ("%d,",a[i]);

}
printf ("}");
    return 0;

}//end main
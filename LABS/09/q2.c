#include <stdio.h>

void reverse (int *arr, int n){
	int i,j,tmp;
	for (i=0; i<n/2; i++){
		tmp = *(arr+i);
		*(arr+i) = *(arr+n-1-i);
		*(arr+n-1-i) = tmp;
	}
}

int main (){
	//taking array input
	int n; 
	printf ("Enter the number of elements of the array");
	scanf ("%d" ,&n);
	int a[n];
	int i;
	for (i=0; i<n; i++){
		printf ("Enter the %d element of the array",i+1);
		scanf ("%d" ,&a[i]);
	}
	//printing original array
	printf ("The original array is given below \n");
	printf ("{");
	for (i=0; i<n; i++){
		printf ("%d, ",a[i]);
	}
	printf ("}");
	reverse (&a[0], n);
	//printing reverse array
	printf ("\n The reversed array is given below \n");
	printf ("{");
	for (i=0; i<n; i++){
		printf ("%d, ",a[i]);
    }
    printf ("}");
	
	return 0;
}

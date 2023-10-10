#include <stdio.h>

int main() {
    int rows , columns;
    int i,j;
    int arr[rows][columns];
    printf ("Enter number of rows of the matrix");
    scanf ("%d" ,&rows);
    printf ("Enter number of columns of the matrix");
    scanf ("%d" ,&columns);
    
    for (i=0; i<= rows; i++){
    	for (j=0; j<= columns; j++){
    		printf ("Enter the element of arr[%d][%d]", rows,columns);
    		scanf ("%d", &arr[rows][columns]);
		}//end inner for
	}//end outer for
	
	for (j=0; j<= rows; j++){
    	for (i=0; i<= columns; i++){
    		printf ("Enter the element of arr[%d][%d]", rows,columns);
    		scanf ("%d", &arr[columns][rows]);
		}//end inner for
	}//end outer for
    return 0;
}

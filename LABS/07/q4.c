/*
* Programmer: Zunaira Amjad
* Desc: identifying singular matrix
* Date: 10-10-23
*
*/
#include <stdio.h>

int main() {
    int rows , columns;
    int i,j;
    int count =0;
    int arr[rows][columns];
    printf ("Enter number of rows of the matrix");
    scanf ("%d" ,&rows);
    printf ("Enter number of columns of the matrix");
    scanf ("%d" ,&columns);
    
    for (i=0; i<= rows; i++){
    	for (j=0; j<= columns; j++){
    		printf ("Enter the element of arr[%d][%d]", rows,columns);
    		scanf ("%d", &arr[i][j]);
		}//end inner for
	}//end outer for
	
	
    for (i=0; i<= rows; i++){
    	for (j=0; j<= columns; j++){
    	if (arr[i][j] == arr[j][i]){
    	count = count + 1;
    }//end if
}//end inner for
	}//end outer for

    if (count = 0){
    	printf ("Array is Singular");
	}
	else {
	 	printf ("Array is not Singular");	
	}
    return 0;
}

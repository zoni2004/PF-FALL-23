/*
* Programmer: Zunaira Amjad
* Desc: 2x2 matrix multiplication
* Date: 10-10-23
*
*/
#include <stdio.h>

int main() {
    int i,j,k,l;
    int arr1[2][2];
    int arr2[2][2];
 
    for (i=0; i <= 2; i++){
    	for (j=0; j<= 2; j++){
    		printf ("Enter the element of arr1[2][2]");
    		scanf ("%d", &arr1[i][j]);
		}//end inner for
	}//end outer for
	
	for (k=0; k <= 2; i++){
    	for (l=0; l<= 2; l++){
    		printf ("Enter the element of arr2[2][2]");
    		scanf ("%d", &arr2[k][l]);
		}//end inner for
	}//end outer for
	 for (i=0; i<3 ; i++){
	 	for (l=0; l<3; l++){
	 		 	for (j=0; j<= 2; j++){
	 		 		   	for(k=0; k <= 2; i++){
	 	          	mul = arr1[i][j]*arr[k][l];
	 	         }
		 }
		 
	 }
   
    return 0;
}

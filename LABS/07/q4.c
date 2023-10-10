/*
* Programmer: Zunaira Amjad
* Desc: identifying singular matrix
* Date: 10-10-23
*
*/
#include <stdio.h>

int main() {
    int i,j;
    int count = 0;
    int arr[2][2];
      
    for (i=0; i<= 2;i++){
    	for (j=0; j<=2; j++){
    		printf ("Enter the element of arr[2][2]");
    		scanf ("%d", &arr[i][j]);
		}//end inner for
	}//end outer for
	
	
    for (i=0; i<= 2;i++){
    	for (j=0; j<= 2;j++){
    	 if (arr[i][j] == arr[j][i]){
    	     count = count + 1;
        }//end if
         else {
    	      count = count;
	    }
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
	


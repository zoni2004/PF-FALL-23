/*
* Programmer: Zunaira Amjad
* Desc:array sum, min, max using functions
* Date: 10-10-23
*
*/


#include <stdio.h>

void process_array () {
	int sum = 0;
	int i;
    int n;
	printf ("Enter the number of elements of the array");
	scanf ("%d", &n);
	int arr[n];
	for (i=0; i<n;i++){
		printf ("Enter the %d element of the array",i);
		scanf ("%d", &arr[i]);
	}
	for (i=0; i< n ; i++){
        sum = sum + arr[i];
    } //end for
    printf ("The sum is of the array is %d\n ", sum);
    int max = arr[0];
    for (i=0; i<n; i++){
            if (arr[i] > max){
                max = arr[i];
            }//end if for check element is greater than previous element
        }//end for loop for moving through the array elements
         printf ("The maximum value is %d \n",max);
    int min = arr[0];
         for (i=0; i<n; i++){
              if (arr[i] < min){
                 min = arr[i];
             }//end if to check for finding min value
         }// end for loop for looping through the array elements
    printf ("The minimum value is %d \n",min);

}
int main (){
	process_array ();
}

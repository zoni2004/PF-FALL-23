#include <stdio.h>

int process_array (int arr[800], int n) {
	int sum =0;
	int i;
	for (i=0; i<=8 ; i++){
        sum = sum + arr[i];
    } //end for
    printf ("The sum is of the array is %d ", sum);
    int max = arr[0];
    for (i=0; i<n; i++){
            if (arr[i] > max){
                max = arr[i];
            }//end if for check element is greater than previous element
        }//end for loop for moving through the array elements
         printf ("The maximum value is %d",max);
    int min = arr[0];
         for (i=0; i<n; i++){
              if (arr[i] < min){
                 min = arr[i];
             }//end if to check for finding min value
         }// end for loop for looping through the array elements
    printf ("The minimum value is %d",min);

}
int main (){
	int n;
	printf ("Enter the number of elements of the array");
	scanf ("%d", &n);
	int arr[n];
	int i;
	for (i=0; i<n;i++){
		printf ("Enter the %d element of the array",i);
		scanf ("%d", arr[i]);
	}
	process_array (arr[800], n);
}

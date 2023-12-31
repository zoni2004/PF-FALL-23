/*
* Programmer: Zunaira Amjad
* Desc: sorting a 2D array in ascending order and descending order wrt rows
* Date: 27-10-23
*
*/
#include <stdio.h>

int main (){
    //intializing a 2D array
   int a[5][2] = {{12,500}, {10, 250}, {14, 600}, {16, 400}, {14,300}};
   //printing the original array
   int i,j;
   printf ("The original array is given below \n");
   printf ("{");
   for (i=0; i<5; i++){
    for (j=0; j<2; j++){
        printf ("%d, ", a[i][j]);
    }
    printf ("\n");
   }
   printf ("}");
   //ascending sorted list wrt to age
   int temp;
   //using outer loop only for changing row and getting main value
     for (i=0; i<5; i++){
         for (j=i+1; j<5; j++){ //using inner loop to get value after the main values for check
             if (a[i][0] > a[j][0]){ //using if to check the main value by the values after it in the loop and swapping
             //swapping the elements of the row if the main value is less than the checking value i.e. the ages of the shirt
                 temp = a[i][0]; 
                 a[i][0] = a[j][0];
                 a[j][0] = temp;
             }
             //if the value is same for size of shirt then sorting in ascending order wrt to price
             else if (a[i][0] == a[j][0]){
                if (a[i][1] > a[j][1]) {
                 //swapping the elements of the column if the main value is less than the checking value i.e. the price of the shirt
                    temp = a[i][1];
                    a[i][1] = a[j][1];
                    a[j][1] = temp;
                }
             }
         }   
     }
   // printing the list of shirts in ascending wrt order of size
   printf ("The list of shirts in ascending order of size is \n");
   printf ("{");
   for (i=0; i<5; i++){
    for (j=0; j<2; j++){
        printf ("%d, " ,a[i][j]);
    }
    printf ("\n");
   }
   printf ("}");

   //descending sorted list wrt to price
   //using outer loop only for changing column and getting main value
     for (i=0; i<5; i++){
         for (j=i+1; j<5; j++){ //using inner loop to get value after the main values for check
             if (a[i][1] < a[j][1]){ //using if to check the main value by the values after it in the loop and swapping
             //swapping the elements of the row if the main value is greater than the checking value i.e. the prices of the shirts
                 temp = a[i][1]; 
                 a[i][1] = a[j][1];
                 a[j][1] = temp;
             }
             //if the value is same for price of shirt then sorting in descending order wrt to ages
             else if (a[i][1] == a[j][1]){
                if (a[i][1] < a[j][0]) {
                 //swapping the elements of the column if the main value is greater than the checking value i.e. the ages of the shirt
                    temp = a[i][0];
                    a[i][0] = a[j][0];
                    a[j][0] = temp;
                }
             }
         }   
     }
   // printing the list of shirts in descending wrt to price
   printf ("The list of shirts in ascending order of size is \n");
   printf ("{");
   for (i=0; i<5; i++){
    for (j=0; j<2; j++){
        printf ("%d, " ,a[i][j]);
    }
    printf ("\n");
   }
   printf ("}");

  return 0;
}//end main

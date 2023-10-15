#include <stdio.h>

int main (){
    int i;
    int arr [5] = {2,4,6,8,10};
  printf ("{");
     for (i=0; i<5; i++){
         printf ("%d," , arr[i]);
     }
 printf ("}");
return 0;
   
}
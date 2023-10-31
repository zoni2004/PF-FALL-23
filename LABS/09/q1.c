#include <stdio.h>

void swap (int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
//did not use the aesterick to swap the Rvalue of Rvalue
}

int main (){
	int j = 2, k = 5;
	printf ("j = %d, k = %d\n",j,k);
	swap(&j, &k);
  //use & to pass by value
	printf("j=%d, k=%d\n",j,k);
return 0;
}

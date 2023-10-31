#include <stdio.h>
int product (int a, int b){
	if (a == 1){
		return a;
	}
	else if (a == 0 || b == 0){
		return 0;
	}
	else {
		return a+product (a, b-1);
	}
}
int main (){
	int a,b;
	printf ("Enter first number");
	scanf ("%d",&a);
	printf ("Enter second number");
	scanf ("%d",&b);
	int mul = product(a,b);
	printf ("The product is %d",mul);
	return 0;	
}

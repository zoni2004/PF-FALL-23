#include <stdio.h>

int factorial (int n){
	if (n==1 || n==0){
		return 1;
	}
	else {
		return n*factorial(n-1);
	}	
}

int main (){
	int n;
	printf ("Enter the number you want factorial for");
	scanf ("%d",&n);
	int fact = factorial (n);
	printf ("The factorial is %d", fact);
	return 0;
}

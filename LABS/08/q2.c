/*
* Programmer: Zunaira Amjad
* Desc: calculator using a user-defined function
* Date: 10-10-23
*
*/

#include <stdio.h>
int sum (int n1, int n2){
    int	result = n1 + n2;
return result;		
}

int sub (int n1, int n2){
	 int result = n1 - n2;
return result;		
}

int mul (int n1, int n2){
	int result = n1 * n2;
return result;		
}

int div (int n1, int n2){
    int result;
	if (n2 < 0){
		printf ("Invalid Input");
	}
	else {
	 result = n1 / n2;		
	}
return result;		
}

int main (){
	int n1,n2,result;
	char operation;
	printf ("Enter first value \n");
	scanf ("%d",&n1);
	printf ("Enter second value \n");
	scanf ("%d",&n2);
	printf ("Enter the basic arithmetic operation you want to perform \n");
	scanf (" %c",&operation);
	switch(operation){
		case '+':
			printf ("The answer is %d", sum (n1,n2));
			break;
		case '-':
			printf ("The answer is %d", sub (n1,n2));
			break;
		case '*':
		    printf ("The answer is %d", mul (n1,n2));
		    break;
		case '/':
			printf ("The answer is %d", div (n1,n2));
			break;	
	}
	
	
	return 0;
}

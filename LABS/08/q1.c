

#include <stdio.h>

void swap_integers() {
	int temp,a,b;
	printf ("Enter a number:  ");
	scanf ("%d", &a);
	printf ("Enter the number you want to swap the previous number with: ");
	scanf ("%d", &b);
	temp = a;
	a = b;
	b = temp;
	printf ("The number %d is now %d ",b,a);
}

int main (){
	
	swap_integers();
	
return 0;		
}

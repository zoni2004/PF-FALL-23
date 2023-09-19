#include <stdio.h>
#include <math.h>

int main() {
float x1;
float x2;
float discriminant;
int a;
int b;
int c;
do{
printf("Please enter the coffecient of x^2: \n");
scanf("%d" ,&a); //Taking input for calculation value
printf("Please enter the coffecient of x: \n");
scanf("%d" ,&b);
printf("Please enter the constant: \n");
scanf("%d" ,&c);
discriminant = 4*a*c;
discriminant = b*b - discriminant;
discriminant = sqrt (discriminant);
x1 = (-b + discriminant)/2*a;
x2 = (-b - discriminant)/2*a;
printf ("First value of x is: %f \n",x1);
printf ("Second value of x is: %f \n",x2);
printf ("The discrimnat is: %f \n" ,discriminant);
}while (a>0);

return 0;
} //end main

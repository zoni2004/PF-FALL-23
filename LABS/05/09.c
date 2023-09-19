#include <stdio.h>
#include <math.h>

int main() {
float x1;
float x2;
float discriminant = 0;
int a;
int b;
int c;
int z;
do{
printf("Please enter the coffecient of x^2: \n");
scanf("%d" ,&a); //Taking input for calculation value
printf("Please enter the coffecient of x: \n");
scanf("%d" ,&b);
printf("Please enter the constant: \n");
scanf("%d" ,&c);
discriminant = b*b;
discriminant = discriminant - 4*a*c;
printf ("The discriminant is: %f \n" ,discriminant);
z = sqrt (discriminant);
x1 = (-b + z)/2*a;
x2 = (-b - z)/2*a;
printf ("First value of x is: %f \n",x1);
printf ("Second value of x is: %f \n",x2);
}while (a>0);

return 0;
} //end main

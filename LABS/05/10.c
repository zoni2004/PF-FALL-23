#include <stdio.h>
#include <math.h>

int main() {
    float x1;
    float x2;
    float discriminant;
    int a;
    int b;
    int c;
    discriminant = 4*a*c;
    discriminant = b*b - discriminant;
    printf("Please enter the coffecient of x^2: \n");
    scanf("%d" ,&a); //Taking input for calculation value
    printf("Please enter the coffecient of x: \n");
    scanf("%d" ,&b);
    printf("Please enter the constant: \n");
    scanf("%d" ,&c);
    if (discriminant > 0) {
        discriminant = sqrt(discriminant);
        printf ("Roots are real and distinct \n");
        x1 = (-b + discriminant)/2*a;
        x2 = (-b - discriminant)/2*a;
        printf ("First value of x is: %f \n",x1);
        printf ("Second value of x is: %f \n",x2);
    }
    else if (discriminant == 0) {
        discriminant = sqrt(discriminant);
        printf ("Roots are real \n");
        x1 = (-b + discriminant)/2*a;
        printf ("Both values of x are: %f \n",x1);
    }
    else if (discriminant < 0) {
        printf ("Roots are imaginary");
    }
    else {
        printf ("Invalid Input");
    }


    return 0;
}

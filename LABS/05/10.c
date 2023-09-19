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
    discriminant = sqrt(discriminant);
    if (discriminant > 0) {
        printf ("Roots are real and distinct");
        x1 = (-b + discriminant)/2*a;
        x2 = (-b - discriminant)/2*a;
        printf ("First value of x is: %f \n",x1);
        printf ("Second value of x is: %f \n",x2);
    }
    else if (discriminant == 0) {
        printf ("Roots are real");
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

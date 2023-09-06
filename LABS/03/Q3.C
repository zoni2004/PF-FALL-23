#include <stdio.h>
#include <math.h>

int main()
{
             float a;
             float b;
             float hyp;
             printf ("Enter a side");
             scanf ("%f" ,&a);
             printf ("Enter the other side \n");
             scanf ("%f" ,&b);
             hyp = sqrt (a*a + b*b);
             printf ("The hypotenuse is: %f", hyp);
    return 0;
}

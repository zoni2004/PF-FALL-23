#include <stdio.h>
#include <math.h>

int main()
{
             float a;
             float b;
             float hyp;
             printf ("Enter a side \n");
             scanf ("%f \n" &a);
             printf ("Enter the other side \n");
             scanf ("%f \n" &b);
             hyp = sqrt (a*a + b*b)
             printf ("The hypotenuse is: %f \n", hyp)
    return 0;
}

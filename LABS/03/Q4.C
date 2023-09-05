#include <stdio.h>
#include <math.h>

int main()
{
             float ogprice; //og means original
             float discount;
             float asprice; //as stands for after sale
             printf ("Enter the original price \n");
             scanf ("%f\n" &ogprice);
             printf ("Enter the discount rate\n");
             scanf ("%f\n" &discount);
             discount = discount/100;
             discount = 1 - discount;
             asprice = ogprice - discount;
             printf ("The after sale price is: %f \n", asprice);
    return 0;
}

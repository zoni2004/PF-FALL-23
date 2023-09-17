#include <stdio.h>

int main() {
    //---printing numbers 1 to n but printing fizz when multiples of 3, buzz when multiples of 5, and fizzbuzz when multiples of both---//
    int n;
    int i;
    float rem1;
    float rem2;
    printf ("Enter the last number you want to print \n");
    scanf ("%d" ,&n);
    for (i=1; i<=n ; i++) {
        rem1 = i % 3;
        rem2 = i % 5;
        if (rem1 == 0 && rem2 == 0) {
            printf ("FizzBuzz \n");
        }
        else if (rem2 == 0) {
            printf ("Buzz \n");
        }
        else if (rem1 == 0) {
            printf ("Fizz \n");
        }
        else {
        printf ("%d" ,i);
        printf ("\n");
        }
    }
    return 0;
}

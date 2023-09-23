#include <stdio.h>

int main() {
    // --- converting a 4-digit number to another number---//
    //eg: 2143 to 60802040//
    int x;
    int rem;
    int sum;
    int quotient;
    int num;
    printf ("Enter a four-digit number \n");
    scanf ("%d \n", &x);
    fflush (0);
        do {
            rem = x % 10;
            quotient = x / 10;
            sum = rem + rem;
            x = quotient;
            printf ("%d",sum);
            sum = 0;
            printf ("%d",sum);
        } while (x > 10);
        sum = x + x;
        printf ("%d",sum);
        sum = 0;
        printf ("%d",sum);
    return 0;
}

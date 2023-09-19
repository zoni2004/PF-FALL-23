#include <stdio.h>

int main() {
    // --- FINDING MULTIPLES OF 3 ---//
    int n;
    int rem;
    printf ("Enter a number ");
    scanf ("%d" ,&n);
    rem = n % 3;
    if (rem == 0) {
    printf ("The number is a multiple of 3");
    }
    else { 
    printf ("The number is not a multiple of 3");
    }

    return 0;
}

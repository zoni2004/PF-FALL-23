#include <stdio.h>

int main() {
     char operation;
    float ans;
    int x;
    int y;
    printf ("Enter a number \n");
    scanf ("%d" ,&x);
    printf ("Enter another number \n");
    scanf ("%d" ,&y);
    printf ("Enter the basic arithmetic operation you want to perform \n");
    scanf (" %c" ,&operation);
    switch (operation) {
    case '+':
    ans = x + y;
    printf ("Your answer is: %f" , ans);
    break;
    case '-':
    ans = x - y;
    printf ("Your answer is: %f" , ans);
    break;
    case '*':
    ans = x * y;
    printf ("Your answer is: %f" , ans);
    break;
    case '/': 
    if (y != 0) {
    ans = x / y;
    printf ("Your answer is: %f" , ans);
    }
    else if ( y == 0) {
    printf ("Enter denominator again \n");
    scanf ("%d" ,&y);
    }
    break;
    }

    return 0;
}

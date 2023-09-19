#include <stdio.h>

int main () {
    char operation;
    float ans;
    int x;
    int y;
    char a;
    a = '+';
    char b;
    b = '-';
    char c;
    c ='*';
    char d;
    d = '/';
    printf ("Enter a number \n");
    scanf ("%d" ,&x);
    printf ("Enter another number \n");
    scanf ("%d" ,&y);
    printf ("Enter the basic arithmetic operation you want to perform \n");
    scanf ("%c" ,&operation);
    switch (operation) {
    case 'a':
    ans = x + y;
    printf ("Your answer is: %f" , ans);
    break;
    case 'b':
    ans = x - y;
    printf ("Your answer is: %f" , ans);
    break;
    case 'c':
    ans = x * y;
    printf ("Your answer is: %f" , ans);
    break;
    case 'd': 
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

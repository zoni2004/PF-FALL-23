#include <stdio.h>

int main() {
    int n;
    int i = 0;
    int j = 0;
    printf ("Enter the number of rows and maximum stars \n");
    scanf ("%d" ,&n);
    do {
        do {
            i++;
            printf("*");
            j++;
        } while ( i > j);
        printf ("\n");
    } while (i > n);
    return 0;
}

#include <stdio.h>

int main() {
    int x;
    int rem1;
    int rem2;
    printf ("Input a 8-bit number \n");
    scanf ("%c" ,&x);
    rem1 = x % ;
    rem2 = x % ;
    if (rem1 != 0 && rem2 != 0) {
        x = x  ;
        printf ("The 4th and 7th bit are now turned off %d",x);
    }
    else if (rem1 != 0) {
        x = x  ;
        printf ("The 7th bit is now turned off %d" ,x);
    }
    else if (rem2 != 0) {
        x = x  ;
        printf ("The 4th bit is now turned off %d" ,x);
    }
    else {
        printf ("Both 4th and 7th bit are off already");
    }
    
    return 0;
}


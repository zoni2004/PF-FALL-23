#include <stdio.h>

int main() {
    //--- SWITCHING BIT 4 AND BIT 7 OFF FROM  AN INT 8-BIT NUMBER---//
    int x;
    int bit7;
    int bit4;
    printf ("Input a 8-bit number \n");
    scanf (" %d" ,&x);
    bit4 = x / 1000;
    bit4 = bit4 % 10;
    bit7 = x / 1000000;
    bit7 = bit7 % 10;
    fflush (0);
    if (bit4 == 0 && bit7 == 1) {
        x = x - 1000000 ;
        printf ("The 7th bit is now turned off %d",x);
    }
    else if (bit4 ==1 && bit7 == 0) {
        x = x - 1000 ;
        printf ("The 4th bit is now turned off %d",x);
    }
    else if (bit4 == 1 && bit7 == 1) {
        x = x - 1000000 - 1000;
        printf ("The 4th and 7th bit are now turned off %d",x);
    }
    else {
        printf ("The 4th and 7th bit already turned off %d",x");
    }
    return 0;
}

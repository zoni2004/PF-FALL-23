#include <stdio.h>

int main() {
    //-----GREETING ACCORDING TO THE TIME OF THE DAY----//
    int current_t;
    printf ("Enter the current time");
    scanf ("%d" ,&current_t);
    if (current_t >= 5 && current_t <= 11) {
        printf ("Good Morning");
    }
    else if (current_t >= 12 && current_t <= 18){
    printf ("Good Evening");
    }
    else if (current_t > 18 && current_t <= 24){
    printf ("Good Night");
    }
    else {
    printf ("Invalid Input");
    }
    return 0;
}

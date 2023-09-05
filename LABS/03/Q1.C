#include <stdio.h>
#include <math.h>

int main() {
             int num1;
             int num2;
             char sign;
             float ans;
             printf ("Enter a number:\n ");
             scanf ("%d \n" &num1);
             printf ("Enter another number: \n");
             scanf ("%d \n" &num2);
             printf ("Enter an arithemtic operation \n")
             scanf ("%c \n" &sign)
             if (sign == +) {
                 answer = num1 + num2;
                 printf ("The answer is: %f \n", answer);
             }
             if (sign == -) {
                 answer = num1 - num2;
                 printf ("The answer is: %f \n", answer);
             }
            if (sign == *) {
                answer = num1 * num2;
                printf ("The answer is: %f \n", answer);
            }
            if (sign == /){
                answer = num1 / num2;
                printf ("The answer is: %f \n" , answer);
            }
    return 0;
}

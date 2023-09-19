#include <stdio.h>

int main() {
    float actual_amount;
    float saved_amount;
    float discount;
    float amount_discount; //amount after discount
    printf ("Enter total cost of items \n");
    scanf ("%f" ,&actual_amount);
    if (actual_amount >= 2000 && actual_amount <= 4000) {
        discount = actual_amount * 0.2;
        amount_discount = actual_amount - discount;
        saved_amount = actual_amount - amount_discount; 
        printf ("The actual amount was: %f \n",actual_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_discount);
    }
    else if (actual_amount >= 4001 && actual_amount <= 6000) {
        discount = actual_amount * 0.3;
        amount_discount = actual_amount - discount;
        saved_amount = actual_amount - amount_discount; 
        printf ("The actual amount was: %f \n",actual_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_discount);
    }
     else if (actual_amount > 6000) {
        discount = actual_amount * 0.5;
        amount_discount = actual_amount - discount;
        saved_amount = actual_amount - amount_discount; 
        printf ("The actual amount was: %f \n",actual_amount);
        printf ("The saved_amount is: %f \n",saved_amount);
        printf ("The amount after discount is: %f \n",amount_discount);
    }
    else {
        printf ("You are not able to avail the discount as your total amount is less than 2000 \n");
    }
    return 0;
}


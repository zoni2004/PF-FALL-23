#include <stdio.h>

int main() {
			 int num1;
             int num2;
             char sign;
             float ans;
             printf("Enter an arithemtic operation: \n");
             scanf( " %c" ,&sign);
             printf ("Enter a number:\n ");
             scanf ("%d" ,&num1);
             printf ("Enter another number: \n");
             scanf ("%d" ,&num2);
            
			if (sign == '+')
			  {
			  	ans = num1 + num2;
                 printf ("The addition of %d and %d is %f", num1, num2, ans);
             }
             
            else if (sign == '-')
			 {
			 	ans = num1 - num2;
                 printf ("The answer of %d and %d is %f", ans,num1,num2);
             }
             
            else if (sign == '*')
			 {
			 	ans = num1 * num2;
                printf ("The answer of %d and &d is %f", ans,num1,num2);
            }
            
            else if (sign == '/')
			{
                if (num2 == 0) {
                printf ("denominator can't be zero \n");
                scanf ("%d" ,&num2);
                }
                ans = num1 / num2;
                printf ("The answer isof %d and %d is %f" , ans,num1,num2);
            }
            
            else {
            	printf ("Invalid Input");
			}
  
    return 0;
}

    

    
  
    

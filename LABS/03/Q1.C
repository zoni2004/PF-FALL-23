int num1;
             int num2;
             char sign;
             float answer;
             printf ("Enter a number:\n ");
             scanf ("%d" ,&num1);
             printf ("Enter another number: \n");
             scanf ("%d" ,&num2);
             printf ("Enter an arithemtic operation: \n");
             scanf ("%c" ,&sign);
             
             if (sign == '+') {
                 answer = num1 + num2;
                 printf ("The answer is: %f \n", answer);
             }
             else if (sign == '-') {
                 answer = num1 - num2;
                 printf ("The answer is: %f \n", answer);
             }
            else if (sign == '*') {
                answer = num1 * num2;
                printf ("The answer is: %f \n", answer);
            }
            else if (sign == '/'){
                if (num2 == 0) {
                printf ("denominator can't be zero");
                scanf ("%d" ,&num2);
                }
                answer = num1 / num2;
                printf ("The answer is: %f \n" , answer);
            }
  
    return 0;
}

    

    

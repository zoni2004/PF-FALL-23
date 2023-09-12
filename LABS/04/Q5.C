#include <stdio.h>

int main() {
    int year1;
    int year2;
    int month1;
    int month2;
    int day1;
    int day2;
    printf ("Enter the year of birth for person 1 \n");
    scanf ("%d" ,&year1);
    do {
    if (year1 > 0 && year1 < 2024) {
    printf ("Enter the month of birth for person 1 \n");
    scanf ("%d" ,&month1);
    }
    else {
        printf ("INVALID INPUT\n");
        scanf ("%d" ,&year1);
         scanf ("%d" ,&month1);
    }
    } while (year1 < 0 && year1 > 2024);
    do {
    if (month1 > 0 && month1 < 12) {
    printf ("Enter the date of birth for person 1 \n");
    scanf ("%d" ,&month1);
    }
    else {
        printf ("INVALID INPUT \n");
         scanf ("%d" ,&month1);
         scanf ("%d" ,&day1);
    }
    } while (month1 < 0 && month1 > 12);
    printf ("Enter the year of birth for person 2 \n");
    scanf ("%d" ,&year2);
    do {
    if (year2 > 0 && year2 < 2024) {
    printf ("Enter the month of birth for person 2 \n");
    scanf ("%d" ,&month2);
    }
    else {
        printf ("INVALID INPUT \n");\
        scanf ("%d" ,&year2);
        scanf ("%d" ,&month2);

    }
    } while (year2 < 0 && year2 > 2024);
    do {
    if (month2 > 0 && month2 < 12) {
    printf ("Enter the date of birth for person 2 \n");
    scanf ("%d" ,&day2);
    }
    else {
        printf ("INVALID INPUT \n");
        scanf ("%d" ,&month2);
     scanf ("%d" ,&day2);
    }
    } while (month2 < 0 && month2 > 12);
    //COMPARISN OF YEARS 
    if (year1 < year2) {
        printf ("PERSON 1 IS OLDER");
    }
    else if (year2 < year1) {
        printf ("PERSON 2 IS OLDER");
    }
    else if (year1 = year2) {  
        //COMPARISON OF MONTHS IF YEARS EQUAL 
        if (month1 < month2) {
            printf ("PERSON 1 IS OLDER");
        } 
        else if (month2 < month1) {
            printf ("PERSON 2 IS OLDER");
        }
        //COMPARISON OF DAYS IF MONTHS EQUAL
        else if (month2 = month1) {
            if (day1 < day2) {
                printf ("PERSON 1 IS OLDER");
            }
            else if (day2 < day1){
                printf ("PERSON 2 IS OLDER");
            }
            else if (day1 = day2) {
                printf ("BOTH ARE OF SAME AGE");
            }
        }
    }
    
    return 0;
}

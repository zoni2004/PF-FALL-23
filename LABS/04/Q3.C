#include <stdio.h>
#include <math.h>

int main() {
int n;
int count = 0;
int sum = 0;
int num;
int x;
printf ("Please enter the number of values you need \n");
scanf ("%d" , &n);
if (n > 1) {
do {
printf ("Please enter a number \n");
scanf ("%d" , &num);
count = count+1;
x = num*num;
sum = sum + x;
} while (count != n);
printf ("Your sum of square values %d" ,sum); 

}
else {
printf ("INVALID INPUT OF n")
 return 0;
}

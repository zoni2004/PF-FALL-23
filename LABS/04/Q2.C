#include <stdio.h>

int main () {

int n;
int count = 0;
int i=0;
printf ("Please enter the number of stars and lines you require \n")
scanf ("%d" , &n)
while (count < n); {
printf ("*");
count = count++;
do {
printf ("\n");
i = i++;
} while ( i!=n);
 return 0;
}

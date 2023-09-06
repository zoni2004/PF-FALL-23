#include <stdio.h>

int main() {
             float rad;
             float height;
             float pi = 3.142;
             printf ("ENTER RADIUS \n");
             scanf ("%f", &rad);
             printf ("ENTER HEIGHT \n");
             scanf ("%f", &height);
             float basearea = pi * rad * rad;
             float volume = basearea * height; 
             printf("The volume is: %f\n" , volume);
  
return 0;
}       
 

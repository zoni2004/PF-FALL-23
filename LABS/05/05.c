#include <stdio.h>

int main() {
    //----DIFFERENTIATING DIFFERENT CHARACTERS---//
    int character;
    printf ("Input a character \n");
    scanf ("%c" ,&character);
    if (character >= 'a' && character <= 'z' ){
        printf ("Character is a small alphabet");
    }
    else if (character >= 'A' && character <= 'Z' ){
        printf ("Character is a capital alphabet");
    }
    else if (character >= '0' && character <= '9' ){
        printf ("Character is a digit");
    }   
    else {
        printf ("Character is a special character");
    }
    
    return 0;
}


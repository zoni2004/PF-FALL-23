#include <stdio.h>
#include <string.h>

int main (){
	int count = 0;
	int i, result_length_compare, result_char_compare;
	int pass_input [300];
	char pass[9];
	strcpy (pass, "Secure123");
	printf ("Enter the password \n");
    scanf (" %s", 	pass_input);
    result_length_compare = strcmp(pass,pass_input);
    
    if (result_length_compare< 0){
    	printf ("Login failed. Incorrect password");
	}
	else if (result_length_compare > 0){
    	printf ("Login failed. Incorrect password");
	}
	else if (result_length_compare == 0){
		 if (result_char_compare< 0){
    	     printf ("Login failed. Incorrect password");
	     }
      	else if (result_char_compare > 0){
          	printf ("Login failed. Incorrect password");
      	}
         else if (result_length_compare == 0){
         	printf ("Login successful. welcome!");
		 }
	}

	
	return 0;
}

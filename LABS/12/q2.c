#include <stdio.h>
#include <stdlib.h>

int comparefiles (FILE *f_ptr1, FILE *f_ptr2, int *lines, int *cols){
	char ch1,ch2;
	*lines = 1;
	*cols = 0;
	do{
		ch1 = fgetc(f_ptr1);
		ch2 = fgetc(f_ptr2);
		
		if (ch1 == '\n'){
			*lines += 1;
			*cols = 0;
		}
		
		if (ch1 != ch2){
			return -1;
			
		*cols += 1;
		}
	}while (ch1 != EOF && ch2 != EOF);
	
	if (ch1 == EOF && ch2 == EOF){
		return 0;
	}
	else {
		return -1;
	}
}


int main (){
	FILE *fptr1;
	fptr1 = fopen("./test1.docx", "rb");
	FILE *fptr2;
	fptr2 = fopen ("./test2.docx", "rb");
	
	if (fptr1 == NULL || fptr2 == NULL){
		printf ("The file is not opened.The program will exit now");
		return 1;
	}
	int rows, columns;
	
	int diff = comparefiles(fptr1,fptr2,&rows,&columns);
	if (diff == 0){
		printf ("Files are equal");
	}
	else{
		printf ("Files are not equal");
	}
	
	fclose (fptr1);
	fclose (fptr2);
return 0;
}

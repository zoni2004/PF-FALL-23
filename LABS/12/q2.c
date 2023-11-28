/*
* Programmer: Zunaira Amjad
* Desc: comparing 2 files
* Date: 10-10-23
*
*/

#include <stdio.h>
#include <stdlib.h>

//making a function to compare the two files
int comparefiles (FILE *f_ptr1, FILE *f_ptr2, int *lines, int *cols){
	char ch1,ch2;
	*lines = 1;
	*cols = 0;
	//looping through the files 
	do{
		ch1 = fgetc(f_ptr1); //reading the first file
		ch2 = fgetc(f_ptr2); //reading the second file
		//moving until the line reaches its end
		if (ch1 == '\n'){
			*lines += 1;
			*cols = 0;
		}
		//if the files arent same then returns 1
		if (ch1 != ch2){
			return 1;
		}
		//adding columns if not qual to \n
		*cols += 1;
		
	}while (ch1 != EOF && ch2 != EOF);
	//making sure files have reached their end after getting out of loop
	if (ch1 == EOF && ch2 == EOF){
		return 0;
	}
	else {
		return 1;
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
	
	int diff = comparefiles(fptr1,fptr2,&rows,&columns); //calling the compare function

	//if returns 0 then equal
	if (diff == 0){
		printf ("Files are equal");
	}
	//else not equal
	else{
		printf ("Files are not equal");
	}
	
	fclose (fptr1);
	fclose (fptr2);
return 0;
}

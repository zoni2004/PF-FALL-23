/*
* Programmer: Zunaira Amjad
* Desc: finding rows and columns of a cvs file
* Date: 10-10-23
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fptr;
	//opening the file
	fptr = fopen("./test.csv", "r+");
	//checking for file
	if (fptr == NULL){
		printf ("The file is not opened.The program will exit now");
		return 1;
	}

	else{
	int rows=1, columns=0;
	int i;
	char chr = fgetc(fptr);
	//looping until reaches end of file
	while (chr!=EOF){
		//if end of line then adds rows
		if (chr == '\n'){
			rows = rows + 1;
			columns = 0;
		}
	chr = fgetc(fptr);
	//else adds columns
	columns++;
	}

	fclose (fptr);
	printf ("Number of rows is: %d\n",rows);
	printf ("Number of columns is: %d",columns);
return 0;
}

	
return 0;
}

/**
 * Programmer: Zunaira Amjad
 * Desc: Data from two file combined and stored in file
 * Date: 09/12/2023
 * Roll-No: 23K-0013
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *depart = fopen("department.txt", "r");
	FILE *personal = fopen("personal.txt", "r");
	FILE *combine = fopen("combine.txt", "a");

	char tempArray[30], Array[30], id[5]; 
	printf("Enter Id: ");
	scanf("%s", &id);
	fscanf(personal, "%s", &Array);
	while(!feof(personal) && (strcmp(id, Array)) != 0){
		fscanf(personal, "%s", &Array);
		if (Array == NULL) {
			fgets(tempArray, 20, personal);
        }
	}
	fscanf(personal, "%s", &tempArray);
	strcat(Array, " ");
	strcat(Array, tempArray);
	fscanf(depart, "%s", &tempArray);
	while((strcmp(id, tempArray)) != 0){
		fscanf(depart, "%s", &tempArray);
		if (tempArray == NULL) {
			fgets(tempArray, 20, depart);
        }
	}
	fscanf(depart, "%s", &tempArray);
	strcat(Array, " ");
	strcat(Array, tempArray);
	fprintf(combine, "Name: Zunaira Amjad\nRoll No: 23K-0013\n");
	fputs(Array, combine);
	fprintf(combine, "\n");
}
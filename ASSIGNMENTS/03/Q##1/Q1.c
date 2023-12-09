/**
 * Programmer: Zunaira Amjad
 * Desc: Max Subset Matrix in 2x2 or 4x4 or 8x8
 * Date: 09/12/2023
 * Roll-No: 23K-0013
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void subset(int row, int col, int **original_array, int **submatrix){
	int newrow = 0, newcol = 0;
	for (int i = 0; i < row; i+= 2)
	{
		newcol = 0;
		for (int j = 0; j < col; j+=2)
		{
			int largest = original_array[i][j];
			for (int a = i; a < i + 2; a++)
			{
				for (int b = j; b < j + 2; b++)
				{
					if (original_array[a][b] > largest)
						largest = original_array[a][b];
				}
			}
			submatrix[newrow][newcol] = largest;
			newcol++;
		} // end of for loop
		newrow++;
	} // end of for loop	
}

void studentData(char name[]){
	printf("Name: Zunaira Amjad\nStudent Id: ");
	for (int i = 3; i < strlen(name); i++) {
		printf("%c", name[i]);
    }
	printf("\n");
}

int main(int argc, char const *argv[])
{
	if (argc < 2)
		return 1;
	FILE *ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		printf("No file found\n");
		return 1;
	} // end of if
	char name[8];
	printf("Enter Id: ");
    getchar();
	fgets(name, 8, stdin);
	int row;
	printf("Enter Dimensions of the Matrix: ");
	scanf("%d", &row);
	int **original_array = (int **)malloc(row * sizeof(int *));
	for (int i = 0; i < row; i++) {
		original_array[i] = (int *)malloc(row * sizeof(int));
    }
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++) {
			fscanf(ptr, "%d", &original_array[i][j]);
        }
	}// end of foor loop
	int **submatrix = (int **)calloc(row/2, sizeof(int *));
	for (int i = 0; i < row/2; i++)
		submatrix[i] = (int *)calloc(row/2, sizeof(int));
	subset(row, row, original_array, submatrix);
	studentData(name);
	for (int i = 0; i < row/2; i++)
	{
		for (int j = 0; j < row/2; j++)
			printf("%d ", submatrix[i][j]);
		printf("\n");		
	}
} // end main

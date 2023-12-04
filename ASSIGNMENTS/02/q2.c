/**
 * Programmer: Zunaira Amjad 
 * Desc: Largest submatrix
 * Date: 30/11/2023
 */ 
#include <stdio.h>

int main(){
	int row, columns;
	printf("Enter Columns: ");
	scanf("%d", &columns);
	printf("Enter Rows: ");
	scanf("%d", &row);
	int matrix[row][columns], temp[row][columns];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("Enter 0 or 1 for matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < 1; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			temp[i][j] = matrix[i][j];
		}
	}
	for (int i = 0; i < 1; ++i)
	{
		for (int j = 1; j < row; ++j)
		{
			temp[j][i] = matrix[j][i];
		}
	}
	for (int i = 1; i < row; ++i)
	{
		for (int j = 1; j < columns; ++j)
		{
			if (matrix[i][j] == 0)
			{
				temp[i][j] = 0;
			}
			else if (temp[i-1][j-1] < temp[i][j-1] && temp[i-1][j-1] < temp[i-1][j])
			{
				temp[i][j] = temp[i-1][j-1] + 1;
			}
			else if (temp[i][j-1] < temp[i-1][j-1] && temp[i][j-1] < temp[i-1][j])
			{
				temp[i][j] = temp[i][j-1] + 1;
			}
			else {
				temp[i][j] = temp[i-1][j] + 1;
			}
		}
	}
	int highest = temp[0][0];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			if (temp[i][j] > highest)
			{
				highest = temp[i][j];
			}
		}
	}
	printf("%dx%d\n", highest, highest);
}

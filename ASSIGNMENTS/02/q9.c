/**
 * Programmer: Zunaira Amjad 
 * Desc: Inward Outward Spiral
 * Date: 30/11/2023
 */ 
#include <stdio.h>

void forwards(int rows, int columns,int *a, int *b, int *count, int arr[][50]);
void downwards(int rows, int columns,int *a, int *b, int *count, int arr[][50]);
void printArray(int n, int arr[][50]);
int main(){
	// nxn array, count to store the numbers, 1 to n*n.
	int n, count = 1;
	// a, b variables that make sure inward spiral goes smoothly.
	int a = -1;
	int b = 1;
	printf("Enter A Number N: ");
	scanf("%d", &n);
	// for inward spiral.
	int arr[50][50] = {0};
	// for outward spiral.
	int arr2[50][50] = {0};
	// stopping condition for inward spiral
	while(a != b && a-b != 1){
		a++;
		// enters forward numbers in array.
		forwards(n,n,&a,&b,&count,arr);
		// breaks out of loop when n is odd and we have reached the middle point, that is columns and row indexes are equal.
		if (n % 2 != 0 && a == b)
		{
			break;
		}
		// enters downwards, backwards and upwards number in array.
		downwards(n,n,&a,&b,&count,arr);
	}
	// makes it so we are on the same columns and rows, if i dont do this, in even n the number wont enter correctly.
	a = b;
	// to print numbers from 1 but now outwards.
	count = 1;
	int c = 0;
	int Col = a;
	int Row = a+1;
	// loops until hits n+1 or the break conditions
	while (c <= n){
		// this c used to traverse forwards, backwards, upwards, downwards.
		c++;
		int j, backCol;
		// enters numbers forwards
		for (j = Col; j < Col+c; ++j)
		{
			// if a number is already on the location then move to the next location so that i dont replace the value here.
			if (arr2[Col][j] != 0)
			{
				j++;
			}
			arr2[Col][j] = count;
			count++;
		}
		// if we have reached the final location after forward is done when n is odd then break.		
		if (Col+1 == n && n % 2 != 0)
		{
			break;
		}
		// enters numbers downwards
		for (int i = Col; i <= Col+c; ++i)
		{
			// if a number is already on the location then move to the next location so that i dont replace the value here.
			if (arr2[i][j] != 0)
			{
				i++;
			}
			arr2[i][j] = count;
			count++;
		}
		Col--;
		c++;
		// enters numbers backwards
		for (backCol = Row; backCol > Row-c; --backCol)
		{
			// if a number is already on the location then move to the next location so that i dont replace the value here.
			if (arr2[Row][backCol] != 0)
			{
				backCol--;
			}
			arr2[Row][backCol] = count;
			count++;
		}
		// if we have reached the final location and n is even then break
		if (Row + 1 == n && n % 2 == 0)
		{
			break;
		}
		// enters numbers upwards
		for (int i = Row; i >= Row-c; --i)
		{
			// if a number is already on the location then move to the next location so that i dont replace the value here.
			if (arr2[i][backCol] != 0)
			{
				i--;
			}
			arr2[i][backCol] = count;
			count++;
		}
		Row++;
	}
	printArray(n, arr);
	printf("\n");
	printArray(n, arr2);
}

// for inwards array forward entering
void forwards(int rows, int columns,int *a, int *b, int *count, int arr[][50]){
	// in i stores the r value of a
	int j, i = *a;
	for (j = i; j < (columns-i); ++j)
	{
		// stores the count r value
		arr[i][j] = *count;
		// changes the r value by 1
		(*count)++;
	}
	*a = i;
	*b = j-1;
}

// for inwards array downwards, backwards, upwards
void downwards(int rows, int columns,int *a, int *b, int *count, int arr[][50]){
	// j has the r value of b
	int i,j = *b;
	// downwards
	for (i = *a+1; i < (rows-*a); ++i)
	{
		// stores the count r value
		arr[i][j] = *count;
		// changes the r value by 1
		(*count)++;
	}
	i--;
	if (i - j == 1){
		// stores the value of i at a.
		*a = i;
		// stores the value of j at b.
		*b = j;
		return;
	}
	// backwards
	for (j = j-1; j >= j-(j-(*a)); --j)
	{
		// stores the count r value
		arr[i][j] = *count;
		// changes the r value by 1
		(*count)++;
	}
	j++;
	// upwards
	for (i = i-1; i > i-(i - *a); --i)
	{
		// stores the count r value
		arr[i][j] = *count;
		// changes the r value by 1
		(*count)++;
	}
}

void printArray(int n, int arr[][50])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][j] < 10){
				// for printing the zero before single digits numbers so that final array is aligned properly.
				printf("0%d ",arr[i][j]);
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}
}

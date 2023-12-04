/**
 * Programmer:  Zunaira Amjad
 * Desc: Maze Correct Path
 * Date: 30/11/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void solvemaze(int a, int b, char maze[5][5], char arr[5][5]);
int main(){
	int n = 0, m = 0;
	char maze[5][5] = {{'S', 'O', 'O', 'W', 'W'},
					   {'O', 'W', 'O', 'O', 'W'},
					   {'O', 'O', 'O', 'W', 'O'},
					   {'W', 'W', 'O', 'W', 'O'},
					   {'W', 'W', 'O', 'E', 'W'} };
	char arr[5][5] = {{'W', 'W', 'W', 'W', 'W'},
					  {'W', 'W', 'W', 'W', 'W'},
					  {'W', 'W', 'W', 'W', 'W'},
					  {'W', 'W', 'W', 'W', 'W'},
					  {'W', 'W', 'W', 'W', 'W'}  };
	solvemaze(n,m, maze,arr);
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (arr[i][j] == 'D')
			{
				printf("(%d, %d) ", i, j);
			}
		}
	}
}

void solvemaze(int a, int b, char maze[5][5], char arr[5][5]){
	if (maze[a][b] == 'E')
	{
		arr[a][b] = 'D';
		return;
	}
	arr[a][b] = 'D';
	if (b+1 < 5 && (maze[a][b+1] == 'O' || maze[a][b+1] == 'E') && maze[a][b+1] != 'D')
	{
		solvemaze(a, b+1, maze, arr);
	}
	else if (a+1 < 5 && (maze[a+1][b] == 'O' || maze[a+1][b] == 'E') && maze[a+1][b] != 'D')
	{
		solvemaze(a+1, b, maze, arr);
	}
	if (maze[a][b] == 'O' && maze[a+1][b] == 'W' && maze[a][b+1] == 'W' && maze[a][b-1] == 'O')
	{
		arr[a][b] = 'W';
		solvemaze(a+1, b-1, maze, arr);
	}
	return;
}

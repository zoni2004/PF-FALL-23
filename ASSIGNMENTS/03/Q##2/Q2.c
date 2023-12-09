/**
 * Programmer: Zunaira Amjad
 * Desc: Department details Stored Using Structtures
 * Date: 09/12/2023
 * Roll-No: 23K-0013
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
	char name[20];
	char role[25];
	int communication;
	int teamwork;
	int creativity;
} employee;

typedef struct
{
	char departname[20];
	employee emp[5];
} department;

void data(char names[][20], char roles[][15], department details[]){
	int num;
	int nameTrack[20] = {0};
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	for (int i = 0; i < 4; ++i)
	{
		int rolesTrack[5] = {0};
		for (int j = 0; j < 5; ++j)
		{
			strcpy(details[i].departname, departments[i]);	

			do {
				num = rand() % 20;
			} while(nameTrack[num] == 1);
			nameTrack[num] = 1;
			strcpy(details[i].emp[j].name, names[num]);


			do {
				num = rand() % 5;
			} while(rolesTrack[num] == 1);
			rolesTrack[num] = 1;
			strcpy(details[i].emp[j].role, roles[num]);

			num = rand() % 100 + 1;
			details[i].emp[j].communication = num;

			num = rand() % 100 + 1;
			details[i].emp[j].teamwork = num;

			num = rand() % 100 + 1;
			details[i].emp[j].creativity = num;
		}

	}
}

void best(department details[]){
	int sum, best, largest = 0;
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	for (int i = 0; i < 4; ++i)
	{
		sum = 0;
		for (int j = 0; j < 5; ++j)
		{
			sum += details[i].emp[j].teamwork + details[i].emp[j].creativity + details[i].emp[j].communication;
		}
		printf("Sums of %s: %d\n", departments[i], sum);
		if (sum > largest)
		{
			largest = sum;
			best = i;
		}
	}
	printf("Best Department is %s: %d\n", departments[best], largest);
	printf("|%*s| %*s| %13s| %11s| %9s|\n", 20, "Employee Name", 20, "Employee Role", "Communication", "Creativity", "Teamwork");
	for (int i = 0; i < 5; ++i)
	{
		printf("|%*s| %*s| %13d| %11d| %9d|\n",20, details[best].emp[i].name, 20, details[best].emp[i].role, details[best].emp[i].communication, details[best].emp[i].creativity, details[best].emp[i].teamwork);
	}
}

int main(){
	char names[][20] = {"Avery", "Blake", "Cameron", "Dylan", "Evelyn", "Finn", "Harper", "Jordan", "Kendall", "Logan", "Morgan", "Noah", "Peyton", "Quincy", "Riley", "Skyler", "Toby", "Vivian", "Wesley", "Zoe"};
	char roles[][15] = {"Director", "Executive", "Manager", "Employee", "Trainee"}; 
	department details[4];
	printf("Name: Zunaira Amjad\nId: 23K-0047\n");
	data(names, roles, details);
	best(details);
}


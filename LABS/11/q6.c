/**
 * Programmer: Zunaira Amjad 
 * Desc: Adds 45 to Current Date Assuming Each Month has 30 days
 * Date: 01/12/2023
 */ 
#include <stdio.h>
#include <string.h>

typedef struct date
{
	int day;
	char month[10];
	int year;
}date;

int main(){
	date calen;
	int index;
	char months[][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	printf("Enter Current Day Month Year\n");
	scanf("%d %s %d", &calen.day, &calen.month, &calen.year);
	if (strcmp(calen.month, "December") == 0 || (strcmp(calen.month, "November") == 0 && calen.day >= 15))
	{
		calen.year++;
	}
	calen.day += 45;
	int num = (calen.day / 30);
	calen.day -= (num * 30);
	if (calen.day == 0)
	{
		calen.day = 1;
	}
	for (int i = 0; i < 12; ++i)
	{
		if (strcmp(months[i], calen.month) == 0)
		{
			index = i;
			break;
		}
	}
	index += num;
	if (index > 11)
	{
		index -= 12;
	}
	strcpy(calen.month, months[index]);
	printf("%d %s %d\n", calen.day, calen.month, calen.year);
}

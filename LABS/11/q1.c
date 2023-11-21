/*
* Programmer: Zunaira Amjad
* Desc:using structures to store, find ,and print data 
* Date: 21-11-23
*
*/

#include <stdio.h>
#include <string.h>

    struct data {
        char rollno[10];
        char name[20];
        char dept [20];
        char course [20];
        int joinyear;
    };
int main() {
    int n;
    printf ("Enter the number of students in school: \n");
    scanf ("%d",&n);
    struct data d[n];
    int i=0;
    for (i=0; i<n; i++){
        puts ("Enter roll number of student");
		scanf ("%s", d[i].rollno);
        puts ("Enter name of student");
        scanf ("%s", d[i].name);
        puts ("Enter department of student");
        scanf ("%s", d[i].dept);
        puts ("Enter course of student");
        scanf ("%s", d[i].course);
        puts ("Enter joining year of student");
        scanf("%d", &d[i].joinyear);
    }
    int jy;
    printf ("Enter the specific year of joining you want the students for");
    scanf ("%d" , &jy);
    for (i=0; i<n; i++){
    	  if (d[i].joinyear == jy){
    	  	printf ("%s" , d[i].name);
        }
        else {
        	printf ("Not present");
		}
    printf ("\n");	
	}
	char rn[10];
	printf ("Enter the roll number of the student you want information on \n");
    scanf ("%s" ,rn);
    for (i=0; i<n; i++){
    	  if (strcmp (d[i].rollno,rn)== 0){
    	  	printf ("%s \n" , d[i].name);
    	  	printf ("%s\n" , d[i].dept);
    	  	printf ("%s\n" , d[i].course);
        }
    printf ("\n");	
	}
  
    return 0;
    
}

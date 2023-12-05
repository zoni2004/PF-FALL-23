#include <stdio.h>

void printStatistics(int data[50][4], float GPA[50], int salaryDemand[50], int X, int Y) {
    // Variable declarations
    int numCandidatesGPAAbove3AndAnalyticalAbove50 = 0;
    int numCandidatesCumulativeScoreAboveXY = 0;
    float totalSalaryDemand = 0;
    int totalCandidates = 50;
    int i,j;
    // Part (a) - Total number of candidates with GPA > 3.0 and Analytical score > 50
    for (i = 0; i < totalCandidates; ++i) {
        if (GPA[i] > 3.0 && data[i][1] > 50) {
            numCandidatesGPAAbove3AndAnalyticalAbove50++;
        }
    }
    printf("a) Total number of candidates with GPA > 3.0 and Analytical score > 50: %d\n", numCandidatesGPAAbove3AndAnalyticalAbove50);

    // Part (b) - Percentage of candidates with cumulative score > X and salary < Y
    for (i = 0; i < totalCandidates; ++i) {
        if ((data[i][1] + data[i][2] + data[i][3]) > X && salaryDemand[i] < Y) {
            numCandidatesCumulativeScoreAboveXY++;
        }
    }
    float percentageCandidates = (float)numCandidatesCumulativeScoreAboveXY / totalCandidates * 100;
    printf("b) Percentage of candidates with cumulative score > %d and salary < %d: %.2f%%\n", X, Y, percentageCandidates);

    // Part (c) - Average salary demand
    for (i = 0; i < totalCandidates; ++i) {
        totalSalaryDemand += salaryDemand[i];
    }
    float averageSalaryDemand = totalSalaryDemand / totalCandidates;
    printf("c) Average salary demand for the post: %.2f\n", averageSalaryDemand);

    // Part (d) - Median GPA
    // Sorting the GPA array
    for (i = 0; i < totalCandidates - 1; ++i) {
        for (j = 0; j < totalCandidates - i - 1; ++j) {
            if (GPA[j] > GPA[j + 1]) {
                float temp = GPA[j];
                GPA[j] = GPA[j + 1];
                GPA[j + 1] = temp;
            }
        }
    }

    float medianGPA;
    if (totalCandidates % 2 == 0) {
        medianGPA = (GPA[totalCandidates / 2 - 1] + GPA[totalCandidates / 2]) / 2.0;
    } else {
        medianGPA = GPA[totalCandidates / 2];
    }
    printf("d) Median GPA from all candidates: %.2f\n", medianGPA);
    
}

int main (){
	FILE* finput;
	FILE* foutput;
	finput = fopen("\\C:\\Users\\K230013\\Desktop\\q2", "r");
	foutput = fopen("\\C:\\Users\\K230013\\Desktop\\q2", "w");
	int i;
	int data[50][4], salary_demand[50];
	float gpa[50];
	if (finput == NULL || foutput == NULL){
		printf ("Unable to open file");
		return 1;
	}
	for (i=0; i<50; i++){
		fscanf(finput, "%d %d %d %d %f %d", &data[i][0], &data[i][1], &data[i][2], &data[i][3], &gpa[i], &salary_demand[i]);
	}
	
fclose(finput);
fclose(foutput);
}

#include<stdio.h>
#pragma warning(disable:4996)

typedef struct {
	int payrollNo;
	float hourlyRate;
	int hoursWorked;
}PartTime;

int main() {
	FILE* fpPartTime;

	PartTime pt;

	fpPartTime = fopen("PartTime.txt", "r");

	int wage;

	if (fpPartTime == NULL) {
		printf("Unable to open the file");
		exit(-1);
	}

	else
		printf("Payroll number\t\t Wage(RM)\n");
	while (fscanf(fpPartTime, "%d %lf %d", &pt.payrollNo, &pt.hourlyRate, &pt.hoursWorked) != EOF) {
		wage = pt.hourlyRate * pt.hoursWorked;

		printf("%d %.2lf", pt.payrollNo, wage);
	}
	fclose(fpPartTime);
}
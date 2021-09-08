#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	FILE* fHospital,* fAge;

	fHospital = fopen("Hospital.txt", "r");
	fAge = fopen("Age.txt", "w");
	if (fAge == NULL) {
		printf("File openning error\n");
		exit(-1);
	}

	int age;
	char gender, illness[20];

	fprintf(fAge,"Age Group :%d-%d\n\n",50,70);
	fprintf(fAge, "%s %s %s", "Age", "Gender", "Illness");

	while (fscanf(fHospital, "%d%c%[^\n]\n", &age, &gender, &illness) != EOF) {
		if (age >= 50 && age <= 70)
			fprintf(fAge, "%d %c %s\n", age, gender, illness);
	}
}
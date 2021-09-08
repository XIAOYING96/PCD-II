#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fPtr1, * fPtr2;

	fPtr1 = fopen("sales.txt", "r");
	fPtr2 = fopen("average.txt", "w");

	if (fPtr1 == NULL || fPtr2 == NULL) {
		printf("\nError opening file\n");
		exit(-1);
	}

	int week, prod1,prod2,prod3,prod4,prod5,total=0,count=0;
	float avg;
	int i = 0;

	while (fscanf(fPtr1, "%d %d %d %d %d %d\n", &week, &prod1,&prod2,&prod3,&prod4,&prod5)) {
		for (i = 0; i < 4; i++) {
			total = prod1[i] + prod2 + prod3 + prod4 + prod5;
			count++;
			avg = total / count;

			fprintf(fPtr2, "%d %.2f\n", week, avg);
			printf("Done");
		}
	}

}
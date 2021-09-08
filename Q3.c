//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fPtr1, * fPtr2;
//
//	fPtr1 = fopen("marks.txt", "r");
//	fPtr2 = fopen("report.txt", "w");
//
//	char name[20];
//	int m1, m2, m3, m4;
//	double average;
//
//	if (fPtr1 == NULL || fPtr2 == NULL) {
//		printf("Error : File cannot be opened");
//		exit(-1);
//	}
//	else 
//		while (fscanf(fPtr1, "%[^\n]\n %d %d %d %d", name, &m1, &m2, &m3, &m4) != EOF) {
//			average = (m1 + m2 + m3 + m4) / 4;
//			fprintf(fPtr2, "Name:%s\nMarks:%d\nAverage:%d\n", name, m1, m2, m3, m4, average);
//			if (average < 50.00) {
//				printf("Name :%s\n", name);
//				printf("Average:%.2f\n\n", average);
//			}
//		}
//	fclose(fPtr1);
//	fclose(fPtr2);
//}
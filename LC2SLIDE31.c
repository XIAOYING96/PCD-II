//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("result.txt", "r");
//
//	int bi, bm;
//	double grade;
//	fscanf(fptr, "%d %d %lf",&bm, &bi, &grade);
//	while (!feof(fptr)) {
//		printf("%d %d %.2f\n", bm, bi, grade);
//		fscanf(fptr, "%d %d %lf", &bm, &bi, &grade);
//	}
//	fclose(fptr);
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("delimiter.txt", "r");
//	char x[20];
//	double y;
//	fscanf(fptr, "%[^=]=%lf", x, &y);
//	while (!feof(fptr)) {
//		printf("%s %.2lf", x, y);
//		fscanf(fptr, "%[^=]=%lf", x, &y);
//	}
//	fclose(fptr);
//}
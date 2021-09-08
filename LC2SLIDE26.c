//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void main() {
//	FILE* fptr;
//	int num1, num2;
//	fptr = fopen("number1.txt", "r");
//
//	fscanf(fptr,"%d %d", &num1, &num2);
//
//	while (!feof(fptr)) {
//		printf("%d %d\n", num1, num2);
//		fscanf(fptr,"%d %d", &num1, &num2);
//	}
//		fclose(fptr);
//}
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fPtr;
//	fPtr = fopen("number.txt", "r");
//
//	int num = 0, total = 0;
//	int i = 0;
//
//	if (fPtr == NULL) {
//		printf("Can't open the file sample.txt !");
//		exit(-1);
//	}
//
//	for (i = 0; !feof(fPtr); i++) {
//		fscanf(fPtr, "%d", &num);
//		total += num;
//	}
//	printf("%d numbers in the file \n");
//	fclose(fPtr);
//}
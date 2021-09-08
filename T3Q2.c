//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable:4996)
//
//int main() {
//	int itemCode, unitSold;
//	float unitSales;
//	int i = 0;
//
//	FILE* fptr;
//	fptr = fopen("sales.txt", "w");
//
//	do {
//		printf("Enter the number item sold\n\n");
//		scanf("%d", &itemCode);
//		printf("Enter the unit price\n\n");
//		scanf("%lf", &unitSold);
//		printf("Enter the unit sales price\n\n");
//		scanf("%d", &unitSales);
//
//		fprintf(fptr, "%d\t %d\t %lf\n", itemCode, unitSold, unitSales);
//
//	} while (i != -1);
//	printf("End the program");
//	fclose(fptr);
//}
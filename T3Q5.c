//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//struct Sales {
//	int month;
//	double sales;
//};
//
//int main() {
//	FILE* infp, * outfp;
//	struct Sales sales1;
//	
//	if((infp = fopen("SALES01.txt", "r"))==NULL)
//		printf("ERROE ! Can't open the file\n");
//
//	else if((outfp = fopen("COMM01.txt", "w"))==NULL)
//		printf("ERROR ! Can't open the file\n");
//
//	else {
//		while (fscanf(infp, "%d %lf", &sales1.month, &sales1.sales) != EOF)
//			fprintf(outfp, "%d %10.2lf %10.2lf\n", sales1.month, sales1.sales, sales1.sales * 0.027);
//
//	
//		fclose(infp);
//		fclose(outfp);
//	}
//}
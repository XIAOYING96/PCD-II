//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("sales.dat", "r");
//	int x;
//	double y, total;
//	fscanf(fptr, "%d %lf",&x,&y);
//	while (!feof(fptr)) {
//		printf("%d %.2f %.2f\n",x,y,x*y);
//		fscanf(fptr, "%d %lf", &x, &y);
//	}
//	fclose(fptr);
//}
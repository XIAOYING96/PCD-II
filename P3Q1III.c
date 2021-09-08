//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//int main() {
//		FILE* fptr;
//		FILE* fptr2;
//
//	int n, i = 0;
//	int sum=0;
//	double average;
//
//	fptr = fopen("numbers.txt", "r");
//	fptr2 = fopen("numbers.txt", "w");
//
//	while(fscanf(fptr,"%d",&n)!=EOF){
//		sum += n;
//		fscanf(fptr, "%d", &n);
//		i++;
//	}
//	average = sum / 6.0;
//	fprintf(fptr2, "%d\n %lf\n", sum, average);
//	printf("Sum = %d\n", sum);
//	printf("Average = %.2f\n", average);
//	fclose(fptr);
//	fclose(fptr2);
//}
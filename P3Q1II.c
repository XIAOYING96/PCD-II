//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//
//	int n, i = 0;
//	int sum=0;
//	double average;
//
//	fptr = fopen("numbers.txt", "r");
//
//	while(fscanf(fptr,"%d",&n)!=EOF){
//		sum += n;
//		i++;
//	}
//	average = sum / 6.0;
//	printf("Sum = %d\n", sum);
//	printf("Average = %.2f\n", average);
//	fclose(fptr);
//}
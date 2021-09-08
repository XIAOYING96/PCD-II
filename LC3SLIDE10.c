//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//
//	fptr = fopen("file.bin", "wb");
//
//	double value = 12.50;
//	float num[4] = { 11,22,33,44 };
//
//	fwrite(&value, sizeof(double), 1, fptr);
//	fwrite(&num[1], sizeof(float), 1, fptr);
//	fwrite(&num, sizeof(float), 4, fptr);
//
//	fclose(fptr);
//}
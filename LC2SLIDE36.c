//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("space.txt", "r");
//	int x;
//	char y[26];
//	fscanf(fptr, "%d %[^\n]\n", &x, y);
//
//	while (!feof(fptr)) {
//		printf("%d %s\n", x, y);
//		fscanf(fptr, "%d %[^\n]\n", &x, y);
//	}
//	printf("%d %s\n", x, y);
//	fclose(fptr);
//}
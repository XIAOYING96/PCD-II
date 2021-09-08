//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("name.txt", "r");
//	char str[20];
//	fscanf(fptr, "%[^\n]\n", str);
//	while (!feof(fptr)) {
//		printf("%s\n", str);
//		fscanf(fptr, "%[^\n]\n", str);
//	}
//	printf("%s\n", str);
//	fclose(fptr);
//}
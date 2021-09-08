//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#pragma warning(disable:4996)
//
//void displayRecord();
//void addRecord();
//
//int main() {
//	displayRecord();
//	addRecord();
//}
//
//void displayRecord() {
//	FILE* fptr;
//
//	fptr = fopen("mixed.txt", "r");
//
//	int count=0;
//	char name[20];
//	int mark;
//
//	printf("LIST OF RECORD - mixed.txt\n");
//	printf("%-6s\t%12s\n", "NAME", "MARK");
//	while(fscanf(fptr,"%[^\n] %d\n",name,&mark)!=EOF){
//		count++;
//		printf("\n\n%-20s 2d\n", name, mark);
//
//	}
//	printf("Number of records = %3d",count);
//	fclose(fptr);
//}
//
//void addRecord() {
//	FILE* fptr;
//
//	char name[20],cont;
//	int mark;
//
//	fptr = fopen("mixed.txt", "a");
//
//	do {
//		printf("Add Record\n");
//		printf("----------------\n");
//		printf("Add another record (Y =yes)?\n");
//		rewind(stdin);
//		scanf("%c", &cont);
//
//		printf("Enter name :\n");
//		scanf("%s", &name);
//
//		printf("Enter mark :\n");
//		scanf("%d", &mark);
//
//		fprintf(fptr, "%s %d\n", name, mark);
//	} while (toupper(cont) == 'Y');
//}
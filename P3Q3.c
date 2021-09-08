//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//void displayRecord();
//
//int main() {
//	displayRecord();
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
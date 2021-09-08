#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<ctype.h>
//#pragma warning(disable:4996)
//
//#define MAX_SIZE 20
//
//void displayAll();
//void search();
//void viewRecord();
//void editRecord();
//
//struct Date {
//	int day;
//	int month;
//	int year;
//};
//
//typedef struct {
//	char ID[6];
//	char Name[20];
//	struct Date Join;
//	char department[15];
//}Employee;
//
//Employee emp[MAX_SIZE] =
//{ {"E01","Alice Chin",5,12,2008,"R&D"},
//{"E02","John",9,12,2011,"IT"},
//{"E03","Vivian",3,3,2015,"HR"},
//{"E04","Alice Chin",4,4,2011,"IT"},
//{"E05","Vivian Tan",5,3,2015,"HR"} };
//int nEmployee = 5;
//
//int main(void) {
//	displayAll();
//	search();
//	viewRecord();
//	editRecord();
//}
//
//void displayAll() {
//	int count = 0,i=0;
//	
//	printf("%-s \t %-20s \t %11s \t %-s\n", "ID", "Name", "Date Joined", "Department");
//
//	for (i = 0; i < nEmployee; i++) {
//		printf("%-s\t%-20s\t %02d/%02d/%4d %-5s\n",emp[i].ID,emp[i].Name,emp[i].Join.day,emp[i].Join.month,emp[i].Join.year,emp[i].department);
//
//		count++;
//	}
//	printf("\n\t%d records listed.\n\n", count);
//}
//
//void search(){
//	int i=0, searchYr, searchMn, count;
//	char cont;
//
//	do {
//		count = 0;
//		printf("Search for Employee(s) joined in which Month and Year ?\n");
//		rewind(stdin);
//		scanf("%d %d", &searchMn, &searchYr);
//
//		printf("%-s \t %-20s \t %11s \t %-s\n", "ID", "Name", "Date Joined", "Department");
//
//		for (i = 0; i < nEmployee; i++) {
//			if (searchMn == emp[i].Join.month && 
//				searchYr == emp[i].Join.year) {
//				count++;
//				printf("%-s\t%-20s\t %02d/%02d/%04d\t\t%-s\n",emp[i].ID,emp[i].Name, emp[i].Join.day,emp[i].Join.month, emp[i].Join.year,emp[i].department);
//			}
//		}
//		printf("\n\t %d employee(s) joined in %02d/%d\n", count,searchMn,searchYr);
//		printf("Search another (Y = yes)?\n");
//		rewind(stdin);
//		scanf("%c",&cont);
//		rewind(stdin);
//	} while (toupper(cont) == 'Y');
//}
//
//void viewRecord() {
//	char viewID[6];
//	int i, found=1;
//	char cont=0;
//
//	do {
//		found = 0;
//		printf("Enter ID of Employee to view :");rewind(stdin);
//		scanf("%s",viewID);
//		for (i = 0; i < nEmployee; i++) {
//			if (strcmp(viewID, emp[i].ID) == 0) {
//				found = 1;
//				printf("Employee ID : %s\n Name : %s\nDate Joined : %02d-%02d-%04d\nDepartment :%s\n", emp[i].ID, emp[i].Name, emp[i].Join.day, emp[i].Join.month, emp[i].Join.year, emp[i].department);
//			}
//		}
//		if (!found) {
//			printf("----Employee not found----");
//		}
//		printf("View another (Y = yes) ? ");rewind(stdin);
//		scanf("%c",&cont);
//
//	} while (toupper(cont) == 'Y');
//}
//
//void editRecord() {
//	char editID[5];
//	char comfirmUpd;
//	int editIndex, i;
//	Employee temp;
//	char cont;
//	do {
//		editIndex = -1;
//		printf("\nEnter ID of Employee to edit : \n");rewind(stdin);
//		scanf("%s", editID);
//		i = 0;
//		while (i < nEmployee && editIndex == -1) {
//			if (strcmp(editID, emp[i].ID) == 0) {
//				editIndex = i;
//			}
//			i++;
//		}
//			if (editIndex == -1) {
//				printf("\nError :Employee Not Found\n\n");
//			}
//			else {
//				printf("\nRecord Found :\n");
//				printf("%-5s\t%-20s %11s\t%-5s\t", "ID", "Name", "Date Joined", "Department");
//				printf("%-5s\t%-20s\t%2d/%2d/%4d\t %15s\n", emp[editIndex].ID, emp[editIndex].Name, emp[editIndex].Join.day, emp[editIndex].Join.month, emp[editIndex].Join.year, emp[editIndex].department);
//
//				printf("Enter Updated Details :\n");
//				printf("ID : %s", emp[editIndex].ID);
//				printf("Name :\n"); rewind(stdin);
//				scanf("%[^\n]", &temp.Name);
//				printf("Date Joined :"); rewind(stdin);
//				scanf("%d/%d/%d", &temp.Join.day, &temp.Join.month, &temp.Join.year);
//				printf(" \nDepartment :\n"); rewind(stdin);
//				scanf("%%[^\n]", &temp.department);
//
//				printf("The information is confirm (Y = yes)?\n"); rewind(stdin);
//				scanf("%c", &comfirmUpd);
//
//				if (toupper(comfirmUpd) == 'Y') {
//					strcpy(temp.ID, editID);
//					emp[editIndex] = temp;
//				}
//
//				else
//					printf("No changes made\n\n");
//				printf("\n\nCurrent Record details\n\n");
//			}
//		
//		printf("View another (Y = yes) ? ");
//		rewind(stdin);
//		scanf("%c", &cont);
//	} while (toupper(cont) == 'Y');
//}
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//struct employee {
//    int ssn;
//    char name[45];
//    char address[50];
//    float hsr;
//}employee_record[1000];
//
//void main() {
//    FILE* inPtr;
//    inPtr = fopen("employee.txt", "r");
//    int i;
//
//    for (i = 0; i < 1000; i++){
//        employee_record[i].ssn = 0;
//        strcpy(employee_record[i].name, "");
//        strcpy(employee_record[i].address, "");
//        employee_record[i].hsr = 0.0;
//    }
//
//
//    if (inPtr == NULL);
//    {
//        printf("can't open the employee.txt file");
//        exit(-1);
//
//    }
//
//    for (i = 0; inPtr != EOF; i++){
//        fscanf(inPtr, "%d %s %s %f", &employee_record[i].ssn,employee_record[i].name, employee_record[i].address,&employee_record[i].hsr);
//        i++;
//    }
//    pritnf("%s", employee_record[i].name);
//
//    fclose(inPtr);
//}
//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//struct Attendance {
//	char studentName[40];
//	char programmeCode[4];
//	int yearOfStudy;
//	int groupNo;
//	int daysAbsent;
//};
//
//int main() {
//	struct Attendance att;
//
//	strcpy(att.studentName, "Tan Ah Kow");
//	strcpy(att.programmeCode, "DIA 1");
//
//	att.groupNo = 05;
//	att.daysAbsent = 3;
//
//	char word[30];
//
//	if (att.daysAbsent < 2)
//		strcpy(word, "Warning to student");
//
//	else if (att.daysAbsent < 5)
//		strcpy(word, "Inform parents");
//
//	else
//		strcpy(word, "Bar from exam");
//
//
//	printf("Name\t\t  Programme        Group    Days Absent        Action\n" );
//	printf("---------------------------------------------------------------------\n");
//	printf("%s           %s            %d          %d           %s", att.studentName,att.programmeCode, att.groupNo,att.daysAbsent, word);
//
//	return (0);
//}
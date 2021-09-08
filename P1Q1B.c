//#include<stdio.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//struct Attendance {
//	char studentName[40];
//	char programmeCode[6];
//	int yearOfStudy;
//	int groupNo;
//	int daysAbsent;
//};
//
//int main() {
//	struct Attendance att;
//
//	char word[20];
//
//	printf("Enter you name :\n");
//	gets(att.studentName);
//
//	printf("Enter you programme :\n");
//	gets(att.programmeCode);
//
//	printf("Enter you group :\n");
//	scanf("%d", &att.groupNo);
//
//	printf("Enter you days absent :\n");
//	scanf("%d", &att.daysAbsent);
//
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
//	printf("Name\t\t  Programme        Group    Days Absent        Action\n");
//	printf("---------------------------------------------------------------------------\n");
//	printf("%s           %s            %02d          %02d           %s", att.studentName, att.programmeCode, att.groupNo, att.daysAbsent, word);
//
//	return (0);
//}
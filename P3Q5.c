//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning(disable:4996)
//
//int main() {
//	int letter[27] = { 0 }, i;
//	char fileName[25], ch;
//
//	FILE* fptr;
//
//	printf("Enter file Name : ");
//	scanf("%s",&fileName);
//
//	fptr = fopen(fileName, "r");
//
//	if (fptr == NULL) {
//		printf("Error : File Not Found");
//	}
//	else {
//		while (fscanf(fptr, "%c", &ch) != EOF) {
//			ch = toupper(ch);
//			if (isalpha(ch))
//				letter[ch - 'A']++;
//			else if (ch == ' ')
//				letter[26]++;
//		}
//		printf("\nLetter : -");
//		for (i = 0; i < 26; i++) {
//			printf("\n\t %c =%d", 'A' + i, letter[i]);
//		}
//		printf("\n No.Of Words=%d\n", letter[26] + 1);
//		fclose(fptr);
//	}
//
//}
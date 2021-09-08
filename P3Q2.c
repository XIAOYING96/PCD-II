//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//
//	fptr = fopen("text.txt", "r");
//
//	int char_count = 0;
//	int letter_count = 0,vowels_count=0, consonants_count=0;
//	int blank_count=0;
//	char ch;
//
//	while (fscanf(fptr, "%c", &ch) != EOF) {
//		char_count++;
//		if (ch == ' ')
//			blank_count++;
//
//		else {
//			if (isalpha(ch))
//				letter_count++;
//			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//				vowels_count++;
//			else
//				consonants_count++;
//
//		
//		}
//	}
//		fscanf(fptr, "%d %d %d %d %d", &char_count, &letter_count, &vowels_count, &consonants_count);
//		printf("Total number of characters : %d\n", char_count);
//		printf("Number of letter : %d\n", letter_count);
//		printf("Number of vowels : %d\n", vowels_count);
//		printf("Number of consonants : %d\n", consonants_count); 
//		printf("Number of blanks : %d\n", blank_count);
//		printf("Approx no.of words : %d\n", blank_count + 1);
//	
//	fclose(fptr);
//}
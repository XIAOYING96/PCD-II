//#include<stdio.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("file1.bin", "wb");
//
//	int num = 10;
//	char ch = 'K';
//	double db = 2.5;
//
//	fwrite(&num, sizeof(num), 1, fptr);
//	fwrite(&ch, sizeof(ch), 1, fptr);
//	fwrite(&db, sizeof(db), 1, fptr);
//
//	fclose(fptr);
//}
//#include<stdio.h>
//#pragma warning(Disable:4996)
//
//int main() {
//	FILE* fptr,*fptr1,*fptr2;
//
//	fptr=fopen("integer.dat", "rb");
//	fptr1=fopen("even.dat", "wb");
//	fptr2=fopen("add.dat", "wb");
//
//	int data;
//
//	if (fptr == NULL || fptr1 == NULL || fptr2 == NULL) {
//		printf("Error message !");
//		exit(-1);
//	}
//	while (fread(&data, sizeof(int), 1, fptr)!=0) {
//		if (data % 2 == 0)
//			fwrite(&data, sizeof(int), 1, fptr1);
//
//		else
//			fwrite(&data, sizeof(int), 1, fptr2);
//
//		fclose(fptr);
//		fclose(fptr1);
//		fclose(fptr2);
//	}
//}
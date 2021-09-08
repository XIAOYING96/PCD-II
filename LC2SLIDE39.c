//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//int main() {
//	FILE* fptr;
//	fptr = fopen("product.dat", "r");
//	char code[16];
//	int qty;
//	fscanf(fptr, "%[^\#]#%d",code,&qty);
//	while (!feof(fptr)) {
//		if (qty > 25) {
//			printf("%s\n",code);
//			fscanf(fptr, "%[^\#]#%d", code, &qty);
//		}
//	}
//	fclose(fptr);
//}
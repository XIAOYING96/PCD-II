#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	FILE* fPtr1, *fPtr3;

	char no[20], name[20];
	int phone, year, type;

	if ((fPtr1 = fopen("membership.txt", "r")) == NULL)
		printf("Error opening teh file\n");

	if ((fPtr3 = fopen("membership100to200.txt", "w")) == NULL)
		printf("Error opening the file\n");

	else {
		printf("List of Platinum Members :\n");
		while (fscanf(fPtr1, "%s %s %d %d %d\n", no, name, &phone, &year, &type) != EOF) {
			if (strcmp(no, "A00100") >= 0 && strcmp(no, "A00200") <= 0)
				fprintf(fPtr3, "%s %s %d %d %d\n", no, name, phone, 2025, type);

			if (type == 3)
				printf("%s\n", name);
		}
	}
	fclose(fPtr1);
	fclose(fPtr3);
}
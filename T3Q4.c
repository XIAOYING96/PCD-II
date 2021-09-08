#/*include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	FILE* fptr;
	fptr = fopen("alumni.txt", "r");

	char name[10],designation[20],category[10],location[10];

	fscanf(fptr, "%s %s %s %s", &name,&designation,&category,&location);

	while (!feof(fptr)) {
		printf("Name = %s\n",name);
		printf("Designation = %s\n", designation);
		printf("Category = %s\n", category);
		printf("Location = %s\n", location);
		fscanf(fptr, "%s %s %s %s", &name, &designation, &category, &location);
	}
	fclose(fptr);
}*/
#include<stdio.h>
#pragma warning(disable:4996)

typedef struct {
	int itemNo;
	double costPrice, sellPrice;
}Product;

typedef struct {
	Product prod;
	double profit;
	int unitSold;
}Sales;

int main() {
	FILE* prodP,*salesP;
	Product p;
	Sales s;
	char ans;

	prodP = fopen("product.dat", "rb");
	salesP = fopen("sales.dat", "wb");

	while (fread(&p,sizeof(Product),1,prodP)!=0) {
		s.prod = p;

		s.profit = p.sellPrice - p.costPrice;

		printf("Unit Sold >");
		scanf("%d", &s.unitSold);

		fwrite(&s, sizeof(Sales), 1, salesP);

	}
	fclose(prodP);
	fclose(salesP);
}
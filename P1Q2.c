//#include<stdio.h>
//#pragma warning(disable:4996)
//
//typedef struct {
//	char bookID[20];
//	char authorname[20];
//	char bookTitle[40];
//	char publisher[20];
//	int yearOfPublication;
//	int quantityInStock;
//}BookInventory;
//
//struct Transaction {
//	char transactionCode;
//	int quantity;
//};
//
//int main() {
//	struct Transaction txn;
//
//	BookInventory book = { "BK-2044","JK Rowling","Harry Potter and the Prisoner of Azkaban","Bloomsbury",1999,25 };
//	printf("Book Details :\n");
//	printf("===================\n");
//	printf("Book ID : %s\n", book.bookID);
//	printf("Author Name : %s\n", book.authorname);
//	printf("Book Title : %s\n", book.bookTitle);
//	printf("Publisher : %s\n", book.publisher);
//	printf("Year of Publication : %d\n", book.yearOfPublication);
//	printf("Quantity in Stock : %d\n", book.quantityInStock);
//
//	do{
//		printf("\nTransaction Code (S=sold, P=purchased,X=exit) :\n");
//		scanf("%c", &txn.transactionCode);
//
//		if (txn.transactionCode == 's' || txn.transactionCode == 'S') {
//			printf("Transaction quantity already sold :\n");
//			scanf("%d", &txn.quantity);
//			book.quantityInStock -= txn.quantity;
//		}
//
//		else if (txn.transactionCode == 'p'|| txn.transactionCode == 'P') {
//			printf("Transaction Quantity :\n");
//			scanf("%d", &txn.quantity);
//			book.quantityInStock += txn.quantity;
//			printf("Purchased : %d copies of ""%s""by %s", book.quantityInStock, book.bookTitle, book.authorname);
//		}
//
//		else if (txn.transactionCode == 'x' || txn.transactionCode == 'X') {
//			printf("Exited-End of Transaction ");
//		}
//	} while (txn.transactionCode != 'x' && txn.transactionCode != 'X');
//
//		return (0);
//}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



struct inform {

	int bID;
	int pNUMBER[20];
	char bNAME[50];
	char pNAME[50];
	char aNAME[50];
	char aEMAIL[100];
	char pDATE[50];


};


struct inform book[50];
int myIndex = 0;

void add_inform() {

	int next = 1;
	int zero;


	while (1)
	{
		system("cls");
		printf(" \n");
		printf("\nEnter book ID: ");
		scanf_s(" %d", &book[myIndex].bID);
		getchar();
		printf("\nEnter book name: ");
		gets_s(book[myIndex].bNAME, 50);
		printf("\nEnter publication date: ");
		gets_s(book[myIndex].pDATE, 50);
		printf("\nEnter publisher name: ");
		gets_s(book[myIndex].pNAME, 50);
		printf("\nEnter publisher phone number(only numbers): ");
		scanf_s(" %d", &book[myIndex].pNUMBER);
		getchar();
		gets_s(book[myIndex].aNAME, 50);
		printf("\nEnter author email address: ");
		gets_s(book[myIndex].aEMAIL, 100);

		myIndex++;
		printf("\nRecord saved\n");

		printf("\nWould you like to ADD another book record?    ->>    Enter 1 \n");
		printf("UPDATE, DELETE, SEARCH, DISPLAY ALL BOOK        ->>    Enter 0\n:  ");
		scanf_s("%d", &next);
		getchar();


	if (next == 0) break;

	
	}
}


void Displaybook(struct inform book) {

	printf("\n              \n");

	printf("\nBook ID %d     ", book.bID);
	printf("\nBook name %s     ", book.bNAME);
	printf("\nPublication date %s     ", book.pDATE);
	printf("\nPublisher name %s     ", book.pNAME);
	printf("\nPublisher phone number %d     ", book.pNUMBER);
	printf("\nAuthor name %s     ", book.aNAME);
	printf("\nAuthor E-mail address %s\n  ", book.aEMAIL);

}

int main() {


	int find;
	int num;
	int del, i;
	char id[50], inf[50], part[50];
	
	

	add_inform();


	system("cls");

	

	while (1) {

	printf("\n\n1.SEARCH   2.UPDATE   3.DELETE   4.DISPLAY ALL BOOK  5.ADD \n");
	scanf_s("%d", &num);

	switch (num) {

	case 1:

		system("cls");

		printf("\n\n<SEARCH>\n");
		printf("Enter ID for search: ");
		scanf_s("%d", &find);


		for (int i = 0; i < myIndex; ++i) {
			if (find == book[i].bID) {
				printf("\n              \n");

				printf("\nBook ID %d     ", book[i].bID);
				printf("\nBook name %s     ", book[i].bNAME);
				printf("\nPublication date %s     ", book[i].pDATE);
				printf("\nPublisher name %s     ", book[i].pNAME);
				printf("\nPublisher phone number %d     ", book[i].pNUMBER);
				printf("\nAuthor name %s     ", book[i].aNAME);
				printf("\nAuthor E-mail address %s\n  ", book[i].aEMAIL);
			}
			else printf("No data\n");
		} break;

	case 2:

		system("cls");

		printf("\n\n<UPDATE>\n");
		printf("Enter 'book name'  for upadate : ");
		scanf_s("%s", &inf, sizeof(inf));
		printf("\nwhich one? \n:bid, bname, pdate, pname, pnumber, aname, aemail:\n\n");
		scanf_s("%s", &part, sizeof(part));
		for (i = 0; i < myIndex; i++) {
			if (!strcmp(inf, book[i].bNAME)) {

				if (!strcmp(part, "bid")) {
					printf("BOOK ID: ");
					scanf_s("%d", &book[i].bID);
				}
				if (!strcmp(part, "bname")) {
					printf("BOOK NAME: ");
					scanf_s("%s", &book[i].bNAME, sizeof(book[i].bNAME));
				}
				if (!strcmp(part, "pdate")) {
					printf("PUB DATE: ");
					scanf_s("%s", &book[i].pDATE, sizeof(book[i].pDATE));
				}
				if (!strcmp(part, "pname")) {
					printf("PUBLISHER NAME: ");
					scanf_s("%s", &book[i].pNAME, sizeof(book[i].pNAME));
				}
				if (!strcmp(part, "pnumber")) {
					printf("PUBLISHER PHONE NUMBER: ");
					scanf_s("%d", &book[i].pNUMBER, sizeof(book[i].pNUMBER));
				}
				if (!strcmp(part, "aname")) {
					printf("AUTHOR NAME: ");
					scanf_s("%d", &book[i].aNAME, sizeof(book[i].aNAME));
				}
				if (!strcmp(part, "aemail")) {
					printf("AUTHOR EMAIL: ");
					scanf_s("%d", &book[i].aEMAIL, sizeof(book[i].aEMAIL));
				}
			}
		}break;



	case 3:

		system("cls");

		printf("\n\n< DELETE >\n");
		printf("Enter book name for delete : ");
			scanf_s("%s", &id, sizeof(id));
			for (i = 0; i < myIndex; i++) {
				if (!strcmp(id, book[i].bNAME))
				{
					book[i] = book[i];
					}
				}
			
				myIndex--;
				printf("- DELETE COMPLETE -\n"); break;
		
	

		case 4: 
			
			system("cls");

		printf("****************************************");

		for (i = 0; i < myIndex; i++)
		Displaybook(book[i]);

		printf("\n\n****************************************");


		case 5: 
			system("cls");
			

	}

	

}

#include <stdio.h>
#include <string.h>


struct Books {
	char name[60];
	int ID;
	char date[40];
	char author[60];
	char address[100];
	char publisher[60];
	char p_num[40];
};

int myIndex = 0;
struct Books bk[20];


void select() {

	int cmd, i;


	do {

		printf("\n\n<< Library Management Program >>\n");
		printf("1. Add Book Information\n");
		printf("2. Delete Book Information\n");
		printf("3. Update Book Information\n");
		printf("4. Search by Book ID\n");
		printf("5. Display a list of book(s) published by an author a\n");
		printf("6. Display a list of book(s) published by a publisher p\n");
		printf("7. Display list of all book\n");
		printf("8. Exit\n\n >> ");
		scanf_s("%d", &cmd);

		if (cmd < 1 || cmd>9) {
			printf("Wrong"); break;
		}
		else if (cmd == 1) {
			add();
		}
		else if (cmd == 2) {
			del();
		}
		else if (cmd == 3) {
			update();
		}
		else if (cmd == 4) {
			search();
		}
		else if (cmd == 5) {
			DisplayA();
		}
		else if (cmd == 6) {
			DisplayP();
		}
		else if (cmd == 7) {

			system("cls");

			printf("****************************************");

			for (i = 0; i < myIndex; i++) {

				printf("\nID : %d", bk[i].ID);
				printf("\n\nName : %s", bk[i].name);
				printf("\nPublication date : %s", bk[i].date);
				printf("\nPublisher : %s", bk[i].publisher);
				printf("\nPublisher Phone Number : %s", bk[i].p_num);
				printf("\nAuthor name : %s", bk[i].author);
				printf("\nAuthor E-mail Address : %s", bk[i].address);


			}

			printf("\n****************************************");

		}

	} while (cmd != 8);

	return 0;

}

int del() {

	int id;


	printf("\n\n< DELETE >\n");
	printf("Enter book ID : ");
	scanf_s("%d", &id);
	for (int i = 0; i < myIndex; i++) {
		if (id == bk[i].ID)
		{
			bk[i] = bk[i];
		}
	}

	myIndex--;
	printf("\n- DELETE COMPLETE -\n");

}

int add() {

	int next = 1;
	int flag = 0;
	int i, temp;


	while (1)
	{
		system("cls");
		printf(" \n");
		printf("\nEnter book ID: ");
		scanf_s("%d", &temp);
		for (i = 0; i < myIndex; i++) {
			if (temp == bk[i].ID) {
				flag = 1;
			}
		}
		if (!flag && temp > 0) {
			bk[myIndex].ID = temp;
		}
		else if (flag == 1) {
			printf("\nThis ID already exists!\n");
			break;
		}
		else if (temp <= 0) {
			printf("\nThis ID's value is invalid\n'");
			break;
		}
		getchar();
		printf("\nEnter book name: ");
		gets_s(bk[myIndex].name, 50);
		printf("\nEnter publication date: ");
		gets_s(bk[myIndex].date, 40);
		printf("\nEnter publisher name: ");
		gets_s(bk[myIndex].publisher, 50);
		printf("\nEnter author name: ");
		gets_s(bk[myIndex].author, 50);
		printf("\nEnter publisher phone number: ");
		gets_s(bk[myIndex].p_num, 40);
		printf("\nEnter author email address: ");
		gets_s(bk[myIndex].address, 100);

		myIndex++;
		printf("\nRecord saved\n");

		printf("\n ADD  ->>  Enter 1/  OTHERS  ->>  Enter 0 :  ");
		scanf_s("%d", &next);
		getchar();


		if (next == 0) break;


	}

}

int search() {

	int find;


	printf("\n\n<SEARCH>\n\n");
	printf("Enter ID for search: ");
	scanf_s("%d", &find);

	for (int i = 0; i < myIndex; ++i) {
		if (find == bk[i].ID) {

			printf("\n\nID : %d", bk[i].ID);
			printf("\n\nName : %s", bk[i].name);
			printf("\nPublication date : %s", bk[i].date);
			printf("\nPublisher : %s", bk[i].publisher);
			printf("\nPublisher Phone Number : %s", bk[i].p_num);
			printf("\nAuthor name : %s", bk[i].author);
			printf("\nAuthor E-mail Address : %s", bk[i].address);

		}
		else if (find != bk[i].ID) { printf("No data\n"); }
	}
}

int update() {


	int inf;

	printf("\n\n<UPDATE>\n\n");
	printf("Enter 'BOOK ID'  for upadate : ");
	scanf_s("%d", &inf);

	for (int i = 0; i < myIndex; i++) {
		if (inf == bk[i].ID) {


			printf("\n -- REWRITE -- \n");

				printf("ID: ");
				scanf_s("%d", &bk[i].ID);
				getchar();

				printf("NAME: ");
				gets_s(bk[i].name, 60);
			
				printf("DATE: ");
				gets_s(bk[i].date, 40);
		
				printf("PUBLISHER: ");
				gets_s(bk[i].publisher, 60);
		
				printf("PUBLISHER PHONE NUMBER: ");
				gets_s(bk[i].p_num, 40);
		
				printf("AUTHOR: ");
				gets_s(bk[i].author, 60);
			
				printf("AUTHOR EMAIL: ");
				gets_s(bk[i].address, 100);

	
		
		}
	}			printf("\n***Record saved***\n");
}

int DisplayA() {


	system("cls");

	int i;
	char author[60];

	printf("\nEnter author's name of book to find : ");
	scanf_s("%s", &author, sizeof(author));

	printf("****************************************");

	for (i = 0; i < myIndex; i++) {
		if (!strcmp(author, bk[i].author)) {
			printf("\n\nID : %d", bk[i].ID);
			printf("\nName : %s", bk[i].name);
			printf("\nPublication date : %s", bk[i].date);
			printf("\nPublisher : %s", bk[i].publisher);
			printf("\nPublisher Phone Number : %s", bk[i].p_num);
			printf("\nAuthor name : %s", bk[i].author);
			printf("\nAuthor E-mail Address : %s", bk[i].address);
		}
		if (i == myIndex) {
		printf("\nThere is no book by that author's name!\n");
	}


	}	
		printf("\n****************************************");
}

int DisplayP() {

	system("cls");

	int i;
	char publisher[40];

	printf("\nEnter publisher's name of book to find : ");
	scanf_s("%s",&publisher, sizeof(publisher));

	printf("****************************************");

	for (i = 0; i < myIndex; i++) {
		if (!strcmp(publisher, bk[i].publisher)) {
			printf("\n\nID : %d", bk[i].ID);
			printf("\nName : %s", bk[i].name);
			printf("\nPublication date : %s", bk[i].date);
			printf("\nPublisher : %s", bk[i].publisher);
			printf("\nPublisher Phone Number : %s", bk[i].p_num);
			printf("\nAuthor name : %s", bk[i].author);
			printf("\nAuthor E-mail Address : %s", bk[i].address);
		}
		if (i == myIndex) {
			printf("\nThere is no book by that publisher's name!\n");
	}
	

	}printf("\n****************************************");
}	

int main() {
	
	select();


	}


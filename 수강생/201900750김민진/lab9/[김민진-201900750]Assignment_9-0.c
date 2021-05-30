#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Book
{
	int ID;
	char title[50];
	char date[10];
	char publisher[50];
	char phone[20];
	char author[50];
	char a_email[50];
};

struct Book book[50];
int idx = 0;

void printAll()
{
	printf("\n");
	for (int i = 0; i < idx; i++)
	{
		printf("\nID:  %d", book[i].ID);
		printf("\nTitle:  %s", book[i].title);
		printf("\nPublication date:  %s", book[i].date);
		printf("\nAuthor:  %s", book[i].author);
		printf("\nAuthor's email:  %s", book[i].a_email);
		printf("\nPublisher name:  %s", book[i].publisher);
		printf("\nPublisher phone number:  %s", book[i].phone);
		printf("\n");
	}
}
void addBook()
{
	int flag = 0, temp, nxt;

	while (1)
	{
		flag = 0;

		printf("\n\nEnter Book ID: ");
		scanf_s("%d", &temp);

		for (int i = 0; i < idx; i++)
			if (temp == book[i].ID)
				flag = 1;

		if (!flag && temp > 0)
			book[idx].ID = temp;
		else if (flag == 1)
		{
			printf("\nThis ID already exists.\n");

			printf("\nWould you like to add another information?\n");
			printf("<<< Enter 1 to continue and 0 to exit >>> ");
			scanf_s("%d", &nxt);

			getchar();

			system("cls");

			if (nxt == 0) break;
			continue;
		}
		else if (flag <= 0)
		{
			printf("\nThis ID is invaild.\n");

			printf("\nWould you like to add another information?\n");
			printf("<<< Enter 1 to continue and 0 to exit >>> ");
			scanf_s("%d", &nxt);

			getchar();

			system("cls");

			if (nxt == 0) break;
			continue;
		}
		getchar();

		printf("\nEnter title of book: ");
		gets(book[idx].title);

		printf("\nEnter publication date(YYMMDD): ");
		gets(book[idx].date);

		printf("\nEnter name of author: ");
		gets(book[idx].author);

		printf("\nEnter email address of author: ");
		gets(book[idx].a_email);

		printf("\nEnter name of publisher: ");
		gets(book[idx].publisher);

		printf("\nEnter phone number of publisher(000-0000-0000): "); // int로 선언하고 %011d로 하면 굳이 hypen 안써도
		gets(book[idx].phone);

		idx++;

		printf("\n--- Record Saved ---\n");
		printf("\nWould you like to add another information?\n");
		printf("<<< Enter 1 to continue and 0 to exit >>> ");
		scanf_s("%d", &nxt);

		getchar();

		system("cls");

		if (nxt == 0) break;
	}
}
void deleteBook()
{
	int flag, temp, del_idx, nxt = 1;
	while (1)
	{
		flag = 0;

		printAll();

		printf("\n\nEnter Book ID to delete : ");
		scanf_s("%d", &temp);
		for (int i = 0; i < idx; i++)
		{
			if (temp == book[i].ID)
			{
				del_idx = i;
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			for (int i = del_idx; i < idx; i++)
				book[i] = book[i + 1];

			idx--;
			printf("\nRecord saved.\n");
		}
		else if (!flag)
			printf("\nThis ID is not in this system.\n");

		printf("\nWould you like to delete another information?\n");
		printf("<<< Enter 1 to continue and 0 to exit >>> ");
		scanf_s("%d", &nxt);

		getchar();

		system("cls");

		if (nxt == 0) break;
	}
}
void updateBook()
{
	int flag, temp, edit_idx, nxt = 1, original;

	printAll();

	while (1)
	{
		flag = 0;

		printf("\n\nSelect book ID you want to update: ");
		scanf_s("%d", &temp);
		getchar();
		original = temp;

		for (int i = 0; i < idx; i++)
		{
			if (book[i].ID == temp)
			{
				flag = 1;
				edit_idx = i;
				break;
			}
		}
		if (!flag)
			printf("\n\nThis ID does not exist.\n");
		else if (flag == 1)
		{
			flag = 0;

			printf("\n\nEnter book ID to update: ");
			scanf_s("%d", &temp);
			getchar();

			for (int i = 0; i < idx; i++)
			{
				if (original == temp)
					break;
				if (book[i].ID == temp)
					flag = 1;
			}
			if (!flag && temp > 0)
			{
				book[edit_idx].ID = temp;

				printf("\nEnter title of book: ");
				gets(book[edit_idx].title);

				printf("\nEnter publication date(YYMMDD): ");
				gets(book[edit_idx].date);

				printf("\nEnter name of author: ");
				gets(book[edit_idx].author);

				printf("\nEnter email address of author: ");
				gets(book[edit_idx].a_email);

				printf("\nEnter name of publisher: ");
				gets(book[edit_idx].publisher);

				printf("\nEnter phone number of publisher(000-0000-0000): ");
				gets(book[edit_idx].phone);

				printf("\nRecord saved\n");

				printf("\nWould you like to update another information?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}
			else if (flag == 1)
			{
				printf("\n\nThis ID already exists.\n");
				continue;
			}
			else if (temp <= 0)
			{
				printf("\n\nThis ID' is invalid.\n");
				continue;
			}
		}
		printAll();
	}
}
void searchBook()
{
	int flag, nxt;
	char temp[50];

	while (1)
	{
		printf("\n\nEnter title of book to find: ");
		gets(temp);

		flag = 0;
		for (int i = 0; i < idx; i++)
		{
			if (strcmp(temp, book[i].title) == 0)
			{
				flag = 1;
				printf("\n\nName : %d", book[i].ID);
				printf("\nID : %s", book[i].title);
				printf("\nPublication date : %s", book[i].date);
				printf("\nAuthor name : %s", book[i].author);
				printf("\nAuthor E-mail Address : %s", book[i].a_email);
				printf("\nPublisher : %s", book[i].publisher);
				printf("\nPublisher Phone Number : %s\n\n", book[i].phone);
			}
		}
		if (flag == 0)
			printf("\nNo such book.\n");

		printf("\nWould you like to search for another information?\n");
		printf("<<< Enter 1 to continue and 0 to exit >>> ");
		scanf_s("%d", &nxt);

		getchar();

		system("cls");

		if (nxt == 0) break;
	}
}
void displayAuthor()
{
	int flag, nxt;
	char temp[50];

	while (1)
	{
		printf("\n\nEnter the name of author: ");
		gets(temp);

		flag = 0;
		for (int i = 0; i < idx; i++)
		{
			if (strcmp(temp, book[i].author) == 0)
			{
				printf("\nID:  %d", book[i].ID);
				printf("\nTitle:  %s", book[i].title);
				printf("\nPublication date:  %s", book[i].date);
				printf("\nAuthor:  %s", book[i].author);
				printf("\nAuthor's email:  %s", book[i].a_email);
				printf("\nPublisher name:  %s", book[i].publisher);
				printf("\nPublisher phone number:  %s", book[i].phone);
				printf("\n");
				flag = 1;
			}
		}
		if (flag == 0) printf("\nNo such author.\n");

		printf("\nWould you like to search for another author?\n");
		printf("<<< Enter 1 to continue and 0 to exit >>> ");
		scanf_s("%d", &nxt);

		getchar();

		system("cls");

		if (nxt == 0) break;
	}
}
void displayPub()
{
	int flag, nxt;
	char temp[50];

	while (1)
	{
		printf("\n\nEnter the name of publisher: ");
		gets(temp);

		flag = 0;
		for (int i = 0; i < idx; i++)
		{
			if (strcmp(temp, book[i].publisher) == 0)
			{
				printf("\nID:  %d", book[i].ID);
				printf("\nTitle:  %s", book[i].title);
				printf("\nPublication date:  %s", book[i].date);
				printf("\nAuthor:  %s", book[i].author);
				printf("\nAuthor's email:  %s", book[i].a_email);
				printf("\nPublisher name:  %s", book[i].publisher);
				printf("\nPublisher phone number:  %s", book[i].phone);
				printf("\n");
				flag = 1;
			}
		}
		if (flag == 0) printf("\nNo such author.\n");

		printf("\nWould you like to search for another publisher?\n");
		printf("<<< Enter 1 to continue and 0 to exit >>> ");
		scanf_s("%d", &nxt);

		getchar();

		system("cls");

		if (nxt == 0) break;
	}
}

int main(void)
{
	int cmd, flag, nxt = 1, temp, search_idx, edt_idx = 0;
	char search[50];


	do
	{
		printf("\n\n");
		printf("---------- Library Management Program ----------\n\n");
		printf("  1. Add book information\n");
		printf("  2. Delete book information\n");
		printf("  3. Update book information\n");
		printf("  4. Search book information\n");
		printf("  5. Display a list of book(s) published by an author a\n");
		printf("  6. Display a list of book(s) published by a publisher p\n");
		printf("  7. Display a list of all book\n");
		printf("  8. Quit\n\n");
		printf("------------------------------------------------\n\n");
		printf("Select menu: ");
		scanf_s("%d", &cmd);
		getchar();

		system("cls");

		switch (cmd)
		{
		case 1:
			addBook();
			break;
		case 2:
			deleteBook();
			break;
		case 3:
			updateBook();
			break;
		case 4:
			searchBook();
			break;
		case 5:
			displayAuthor();
			break;
		case 6:
			displayPub();
			break;
		case 7:
			printAll();
			break;
		default:
			printf("Invalid choice.\n");
			break;
		}



	} while (cmd != 8);

	system("cls");
	printf("\nProgram terminated.\n\n");

	return 0;
}
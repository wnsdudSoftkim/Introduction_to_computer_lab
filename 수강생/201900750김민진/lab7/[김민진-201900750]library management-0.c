#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Book
{
	int b_id;
	char b_name[30];
	int publication_date;
	char publisher[20];
	char publisher_phone[20];
	char a_name[20];
	char a_email[30];
};


int main(void) {

	struct Book book[100];
	int idx = 0;
	int nxt = 1, cmd, temp, search_idx, flag = 1, edt_idx = 0;
	char search[20];

	while (1)
	{
		printf("\n\n");
		printf("---------- Library Management Program ----------\n\n");
		printf("  1. Add book information\n");
		printf("  2. Update book information\n");
		printf("  3. Delete book information\n");
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
			while (1)
			{
				printf("\n");
				printf("\nEnter book ID: ");
				scanf_s("%d", &temp);
				getchar();

				if (temp < 0)
				{
					printf("Book ID should not be a negative number.\n");
					continue;
				}
				if (idx > 0)
				{
					flag = 1;
					for (int i = 0; i < idx; i++)
					{
						if (temp == book[i].b_id)
						{
							printf("Duplicate ID\n");
							flag = 0;
							break;
						}
					}
				}
				if (flag == 0) continue;
				book[idx].b_id = temp;

				printf("\nEnter title of book: ");
				gets(book[idx].b_name);

				printf("\nEnter publication date(YYMMDD): ");
				scanf_s("%d", &book[idx].publication_date);
				getchar();
				
				printf("\nEnter name of publisher: ");
				gets(book[idx].publisher);

				printf("\nEnter phone number of publisher(000-0000-0000): ");
				gets(book[idx].publisher_phone);

				printf("\nEnter name of author: ");
				gets(book[idx].a_name);

				printf("\nEnter email address of author: ");
				gets(book[idx].a_email);

				idx++;

				printf("\nRecord saved\n");
				printf("\nWould you like to add another information?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}

			system("cls");
			break;

		case 2:
			while (1)
			{
				printf("\n");
				for (int i = 0; i < idx; i++)
				{
					printf("\nID:  %d", book[i].b_id);
					printf("\nTitle:  %s", book[i].b_name);
					printf("\nPublication date:  %d", book[i].publication_date);
					printf("\nPublisher name:  %s", book[i].publisher);
					printf("\nPublisher phone number:  %s", book[i].publisher_phone);
					printf("\nAuthor:  %s", book[i].a_name);
					printf("\nAuthor's email:  %s", book[i].a_email);
					printf("\n");
				}

				printf("\nEnter the ID of book you want to update: ");
				scanf_s("%d", &temp);
				getchar();

				flag = 0;
				for (int i = 0; i < idx; i++)
				{
					if (temp == book[i].b_id)
					{
						flag = 1;
						edt_idx = i;
						break;
					}
				}
				if (flag == 0)
					printf("\nNo such book.\n");
				else
				{
					printf("\nEnter title of book: ");
					gets(book[edt_idx].b_name);

					printf("\nEnter publication date(YYMMDD): ");
					scanf_s("%d", &book[edt_idx].publication_date);
					getchar();

					printf("\nEnter name of publisher: ");
					gets(book[edt_idx].publisher);

					printf("\nEnter phone number of publisher(000-0000-0000): ");
					gets(book[edt_idx].publisher_phone);

					printf("\nEnter name of author: ");
					gets(book[edt_idx].a_name);

					printf("\nEnter email address of author: ");
					gets(book[edt_idx].a_email);

					printf("\nRecord saved\n");
				}

				printf("\nWould you like to update another information?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}
			break;

		case 3:
			while (1)
			{
				printf("\n");
				for (int i = 0; i < idx; i++)
				{
					printf("\nID:  %d", book[i].b_id);
					printf("\nTitle:  %s", book[i].b_name);
					printf("\nPublication date:  %d", book[i].publication_date);
					printf("\nPublisher name:  %s", book[i].publisher);
					printf("\nPublisher phone number:  %s", book[i].publisher_phone);
					printf("\nAuthor:  %s", book[i].a_name);
					printf("\nAuthor's email:  %s", book[i].a_email);
					printf("\n");
				}
				printf("\nEnter ID of book you want to delete: ");
				scanf_s("%d", &temp);
				getchar();

				flag = 0;
				for (int i = 0; i < idx; i++)
				{
					if (temp == book[i].b_id)
					{
						flag = 1;
						edt_idx = i;
						break;
					}
				}
				if (flag == 0)
				{
					printf("\nNo such book.\n");
				}
				else
				{
					for (int i = edt_idx; i < idx; i++)
					{
						book[i] = book[i + 1];
						idx--;
					}
					printf("\nRecord saved\n");
				}
				
				printf("\nWould you like to delete another information?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}
			break;

		case 4:
			while (1)
			{
				printf("\nEnter book ID: ");
				scanf_s("%d", &temp);

				flag = 0;
				for (int i = 0; i < idx; i++)
				{
					if (temp == book[i].b_id)
					{
						flag = 1;
						search_idx = i;
						break;
					}
				}
				if (flag == 0)
					printf("\nNo such book.\n");
				else
					printf("\nBook %d is located at index %d.\n", temp, search_idx + 1);


				printf("\nWould you like to search for another information?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}
			break;

		case 5:
			while (1)
			{
				printf("Enter the name of author: ");
				gets(search);

				flag = 0;
				for (int i = 0; i < idx; i++)
				{
					if (strcmp(search, book[i].a_name) == 0)
					{
						printf("\nID:  %d", book[i].b_id);
						printf("\nTitle:  %s", book[i].b_name);
						printf("\nPublication date:  %d", book[i].publication_date);
						printf("\nPublisher name:  %s", book[i].publisher);
						printf("\nPublisher phone number:  %s", book[i].publisher_phone);
						printf("\nAuthor:  %s", book[i].a_name);
						printf("\nAuthor's email:  %s", book[i].a_email);
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
			break;

		case 6:
			while (1)
			{
				printf("Enter the name of publisher: ");
				gets(search);

				flag = 0;
				for (int i = 0; i < idx; i++)
				{
					if (strcmp(search, book[i].publisher) == 0)
					{
						printf("\nID:  %d", book[i].b_id);
						printf("\nTitle:  %s", book[i].b_name);
						printf("\nPublication date:  %d", book[i].publication_date);
						printf("\nPublisher name:  %s", book[i].publisher);
						printf("\nPublisher phone number:  %s", book[i].publisher_phone);
						printf("\nAuthor:  %s", book[i].a_name);
						printf("\nAuthor's email:  %s", book[i].a_email);
						printf("\n");
						flag = 1;
					}
				}
				if (flag == 0) printf("\nNo such publisher.\n");

				printf("\nWould you like to search for another publisher?\n");
				printf("<<< Enter 1 to continue and 0 to exit >>> ");
				scanf_s("%d", &nxt);

				getchar();

				system("cls");

				if (nxt == 0) break;
			}
			break;

		case 7:
			for (int i = 0; i < idx; i++)
			{
				printf("\nID:  %d", book[i].b_id);
				printf("\nTitle:  %s", book[i].b_name);
				printf("\nPublication date:  %d", book[i].publication_date);
				printf("\nPublisher name:  %s", book[i].publisher);
				printf("\nPublisher phone number:  %s", book[i].publisher_phone);
				printf("\nAuthor:  %s", book[i].a_name);
				printf("\nAuthor's email:  %s", book[i].a_email);
				printf("\n");
			}
			break;

		case 8:
			system("cls");
			printf("\nProgram terminated.\n");
			break;

		default:
			printf("Wrong input.\n\n");
			break;
		}

		if (cmd == 8) break;
	}

	return 0;
}
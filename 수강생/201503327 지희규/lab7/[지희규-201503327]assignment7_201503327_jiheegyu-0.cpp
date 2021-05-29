#include<stdio.h>
#include<string.h>
#define Max 5

struct Book
{
	int ID;
	char Bname[Max];
	int Date;
	char Pname[Max];
	int Phone;
	char Aname[Max];
	char Aemail[Max];
	char Asearch[Max];
	char Psearch[Max];
};

struct Update
{
	int ID;
	char Bname[Max];
	int Date;
	char Pname[Max];
	int Phone;
	char Aname[Max];
	char Aemail[Max];
};

int main()
{
	int sel,i,j, save = 0;
	struct Book Book[Max];
	struct Update Update;

	for (i = 0; i < Max; i++)
	{
		Book[i].ID = 0;
		Book[i].Date = 0;
		Book[i].Phone = 0;

		for (j = 0; j < Max; j++)
		{
			Book[i].Bname[j] = 0;
			Book[i].Pname[j] = 0;
			Book[i].Aname[j] = 0;
			Book[i].Aemail[j] = 0;
			Book[i].Asearch[j] = 0;
			Book[i].Psearch[j] = 0;
		}
	}
	
	printf("1 : Add book information\n");
	printf("2 : Update book information\n");
	printf("3 : Delete book information\n");
	printf("4 : Search book information\n");
	printf("5 : Display a list of book(s) published by an author\n");
	printf("6 : Display a list of books published by a publisher\n");
	printf("7 : Display a list of all book\n");
	printf("8 : Program Exit \n");
	printf("\n");
	

	while (1)
	{
		Update.ID = 0;
		Update.Date = 0;
		Update.Phone = 0;

		int a = 0;

		for (i = 0; i < Max; i++)
		{
			Update.Bname[i] = 0;
			Update.Pname[i] = 0;
			Update.Aname[i] = 0;
			Update.Aemail[i] = 0;
		}
		
		printf("Select operation number : ");
		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1)
		{
			if (save >= 5)
			{
				printf("There are no place to add\n\n");
			}

			else
			{
				printf("Enter the Book ID : ");
				scanf_s("%d", &Book[save].ID);


				if (Book[save].ID < 0)
				{
					printf("Book ID should not be a negative number.\n");
					Book[save].ID = 0;
				}

				else
				{
					for (i = 0; i < Max; i++)
					{
						if (Book[i].ID == Book[save].ID)
						{
							a++;
						}
					}

					if (a >= 2)
					{
						Book[save].ID = 0;
						printf("You enter the same ID already\n\n");
					}

					else if (a == 1)
					{
						printf("Enter the Book name : ");
						scanf_s("%s", &Book[save].Bname, 5);
						printf("Enter the Publication Date : ");
						scanf_s("%d", &Book[save].Date);
						printf("Enter the Publisher Name : ");
						scanf_s("%s", &Book[save].Pname, 5);
						printf("Enter the Publisher Phone Number : ");
						scanf_s("%d", &Book[save].Phone);
						printf("Enter a author Name : ");
						scanf_s("%s", &Book[save].Aname, 5);
						printf("Enter a author Email Address : ");
						scanf_s("%s", &Book[save].Aemail, 5);
						printf("\n");

						printf("Save success.\n\n");
						save++;
					}
				}
			}
			printf("\n\n");
		}

		else if (sel == 2)
		{
			int save_ID;

			printf("Enter the Book ID to update : ");
			scanf_s("%d", &Update.ID);
			printf("\n");

			if (Update.ID < 0)
			{
				printf("Book ID should not be a negative number.\n");
				Update.ID = 0;
			}

			else
			{
				for (i = 0; i < Max; i++)
				{
					if (Book[i].ID == Update.ID)
					{
						save_ID = i;
						a++;
					}
				}

				if (a > 0)
				{
					printf("Enter the new information.\n\n");
					printf("Enter the Book name : ");
					scanf_s("%s", &Update.Bname, 5);
					printf("Enter the Publication Date : ");
					scanf_s("%d", &Update.Date);
					printf("Enter the Publisher Name : ");
					scanf_s("%s", &Update.Pname, 5);
					printf("Enter the Publisher Phone Number : ");
					scanf_s("%d", &Update.Phone);
					printf("Enter a author Name : ");
					scanf_s("%s", &Update.Aname, 5);
					printf("Enter a author Email Address : ");
					scanf_s("%s", &Update.Aemail, 5);
					printf("\n");

					Book[save_ID].ID = Update.ID;
					strncpy_s(Book[save_ID].Bname, Update.Bname, Max);
					Book[save_ID].Date = Update.Date;
					strncpy_s(Book[save_ID].Pname, Update.Pname, Max);
					Book[save_ID].Phone = Update.Phone;
					strncpy_s(Book[save_ID].Aname, Update.Aname, Max);
					strncpy_s(Book[save_ID].Aemail, Update.Aemail, Max);

					printf("Update success.\n");
				}

				else if (a == 0)
				{
					Update.ID = 0;
					printf("This ID don't exist\n");
					
				}
			}
			printf("\n\n");
		}

		else if (sel == 3)
		{
			int ID, del;

			printf("Enter the Book ID to delete : ");
			scanf_s("%d", &ID);

			for (i = 0; i < Max; i++)
			{
				if (ID == Book[i].ID)
				{
					del = i;
					a = 1;
				}
			}

			if (a == 0)
			{
				printf("This ID don't exist\n");
			}

			else
			{
				Book[del].ID = 0;
				Book[del].Date = 0;
				Book[del].Phone = 0;

				for (i = 0; i < Max; i++)
				{
					Book[del].Bname[i] = 0;
					Book[del].Pname[i] = 0;
					Book[del].Aname[i] = 0;
					Book[del].Aemail[i] = 0;
				}

				for (i = del; i < Max - 1; i++)
				{
					Book[i].ID = Book[i + 1].ID;
					Book[i].Date = Book[i + 1].Date;
					Book[i].Phone = Book[i + 1].Phone;

					for (int j = 0; j < Max; j++)
					{
						Book[i].Bname[j] = Book[i + 1].Bname[j];
						Book[i].Pname[j] = Book[i + 1].Pname[j];
						Book[i].Aname[j] = Book[i + 1].Aname[j];
						Book[i].Aemail[j] = Book[i + 1].Aemail[j];
					}
				}

				Book[4].ID = 0;
				Book[4].Date = 0;
				Book[4].Phone = 0;

				for (int j = 0; j < Max; j++)
				{
					Book[4].Bname[j] = 0;
					Book[4].Pname[j] = 0;
					Book[4].Aname[j] = 0;
					Book[4].Aemail[j] = 0;
				}
				printf("ID is Deleted.\n");
				save--;
			}
			printf("\n\n");
		}

		else if (sel == 4)
		{
			int ID, search;

			if (save == 0)
			{
				printf("There are no data.\n\n");
			}

			else if (save > 0)
			{
				printf("Enter the Book ID to search :");
				scanf_s("%d", &ID);
				printf("\n");

				for (i = 0; i < Max; i++)
				{
					if (ID == Book[i].ID)
					{
						a++;
						search = i;
					}
				}

				if (a > 0)
				{
					printf("Book ID : %d \n", Book[search].ID);
					printf("Book Name : %s \n", Book[search].Bname);
					printf("Publication Date : %d \n", Book[search].Date);
					printf("Publisher Name : %s \n", Book[search].Pname);
					printf("Publisher Phone Number : %d \n", Book[search].Phone);
					printf("Author Name : %s \n", Book[search].Aname);
					printf("Author Email Address : %s \n", Book[search].Aemail);
				}

				else if (a == 0)
				{
					printf("This ID don't exist\n");
				}
				printf("\n\n");
			}
		}

		else if (sel == 5)
		{
			printf("Display a list of book(s) published by an author a\n\n");

			printf("Enter the author name : ");
			scanf_s("%s", &Book[0].Asearch, 5);
			printf("\n");

			printf("list of book(s) published by the author a :%s\n", Book[0].Asearch);
			for (i = 0; i < Max; i++)
			{
				if (strcmp(Book[0].Asearch, Book[i].Aname) == 0)
				{
					a++;
					printf("Book ID :%d, Book Name :%s, Publication Date : %d, Publisher Name :%s\n", Book[i].ID, Book[i].Bname, Book[i].Date, Book[i].Pname);
					printf("Publisher Phone Number : %d, Author Email Address : %s\n", Book[i].Phone, Book[i].Aemail);
				}
			}

			if (a == 0)
			{
				printf("Don't exist book by %s. \n", Book[0].Asearch);
			}
			printf("\n\n");
		}

		else if (sel == 6)
		{
			printf("Display a list of book(s) published by a publisher p\n\n");

			printf("Enter the publisher name : ");
			scanf_s("%s", &Book[0].Psearch, 5);
			printf("\n");

			printf("list of book(s) published by a publisher p : %s \n", Book[0].Psearch);

			for (i = 0; i < Max; i++)
			{
				if (strcmp(Book[0].Psearch, Book[i].Pname) == 0)
				{
					a++;
					printf("Book ID :%d, Book Name :%s, Publication Date : %d, Publisher Phone Numbe : %d\n", Book[i].ID, Book[i].Bname, Book[i].Date, Book[i].Phone);
					printf("Author name : %s, Author Email Address : %s\n", Book[i].Aname, Book[i].Aemail);
				}
			}

			if (a == 0)
			{
				printf("Don't exist book by %s \n", Book[0].Psearch);
			}
			printf("\n\n");
		}

		else if (sel == 7)
		{
		printf("Display a list of all book.\n\n");

		for (i = 0; i < Max; i++)
		{
			if (Book[i].ID != 0)
			{
				printf("%d. Book ID : %d \n", i + 1, Book[i].ID);
				printf("   Book Name : %s \n", Book[i].Bname);
				printf("   Publication Date : %d \n", Book[i].Date);
				printf("   Publisher Name : %s \n", Book[i].Pname);
				printf("   Publisher Phone Number : %d \n", Book[i].Phone);
				printf("   Author Name : %s \n", Book[i].Aname);
				printf("   Author Email Address : %s \n", Book[i].Aemail);
				printf("\n");

			}

			else
			{
				printf("%d. There are no data.\n", i + 1);
				printf("\n");
			}
		}
		printf("\n\n");
		}

		else if (sel == 8)
		{
			printf("End\n");
			break;
		}
	}
}

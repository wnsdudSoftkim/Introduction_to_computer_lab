#include<stdio.h>
#include<string.h>
#define max 30

int i = 0, op_num = 0, temp = 0, space = 0;

struct book
{
	int B_ID;
	char B_name[max];
	int Date;
	char P_name[max];
	int Phone_num;
	char A_name[max];
	char A_Email[max];
	char A_Search[max];
	char P_Search[max];
};

struct update
{
	int B_ID;
	char B_name[max];
	int Date;
	char P_name[max];
	int Phone_num;
	char A_name[max];
	char A_Email[max];
};

struct book Book[max];
struct update Up;

void addbook() 
{
		printf("Enter the book ID : ");
		scanf_s("%d", &Book[temp].B_ID);
		int cnt = 0;
		if (Book[temp].B_ID < 0)
		{
			printf("Book id must not be negative. \n");
			printf("==========================================================\n");
			Book[temp].B_ID = 0;
		}
		else
		{
			for (i = 0; i < max; i++)
			{
				if (Book[i].B_ID == Book[temp].B_ID)
				{
					cnt++;
				}
			}
			if (cnt >= 2)
			{
				Book[temp].B_ID = 0;
				printf("This ID is already exist.\n");
				printf("==========================================================\n");
			}
			else if (cnt == 1)
			{
				printf("Enter the Book name : ");
				scanf_s("%s", &Book[temp].B_name, 30);
				printf("Enter the Publication Date(ex :20210507) : ");
				scanf_s("%d", &Book[temp].Date);
				printf("Enter the Publisher Name : ");
				scanf_s("%s", &Book[temp].P_name, 30);
				printf("Enter the Publisher Phone Number : ");
				scanf_s("%d", &Book[temp].Phone_num);
				printf("Enter a author Name : ");
				scanf_s("%s", &Book[temp].A_name, 30);
				printf("Enter a author Email Address : ");
				scanf_s("%s", &Book[temp].A_Email, 30);
				printf("==========================================================\n");
				printf("The information in the book was saved.\n");
				temp++;
				space++;
			}
		}

}

void updatebook()
{
	int cnt = 0, temp_ID;
	printf("Enter the book ID to update : ");
	scanf_s("%d", &Up.B_ID);
	if (Up.B_ID < 0)
	{
		printf("Book id must not be negative.\n");
		printf("==========================================================\n");
		Up.B_ID = 0;
	}
	else
	{
		for (i = 0; i < max; i++)
		{
			if (Book[i].B_ID == Up.B_ID)
			{
				temp_ID = i;
				cnt++;
			}
		}
		if (cnt == 0)
		{
			Up.B_ID = 0;
			printf("The book doesn't exist.\n");
			printf("==========================================================\n");
		}
		else if (cnt >= 1)
		{
			printf("There's a book exists.\n Please enter the information.\n");
			printf("Enter the Book name : ");
			scanf_s("%s", &Up.B_name, 30);
			printf("Enter the Publication Date(ex :20210507) : ");
			scanf_s("%d", &Up.Date);
			printf("Enter the Publisher Name : ");
			scanf_s("%s", &Up.P_name, 30);
			printf("Enter the Publisher Phone Number : ");
			scanf_s("%d", &Up.Phone_num);
			printf("Enter a author Name : ");
			scanf_s("%s", &Up.A_name, 30);
			printf("Enter a author Email Address : ");
			scanf_s("%s", &Up.A_Email, 30);
			printf("==========================================================\n");
			Book[temp_ID].B_ID = Up.B_ID;
			strncpy_s(Book[temp_ID].B_name, Up.B_name, max);
			Book[temp_ID].Date = Up.Date;
			strncpy_s(Book[temp_ID].P_name, Up.P_name, max);
			Book[temp_ID].Phone_num = Up.Phone_num;
			strncpy_s(Book[temp_ID].A_name, Up.A_name, max);
			strncpy_s(Book[temp_ID].A_Email, Up.A_Email, max);
			printf("Updated successfully. \n");
		}
	}
}

void deletebook() 
{
		int ID = 0, pik = 0, cnt = 0;
		printf("Enter the book ID to delete : ");
		scanf_s("%d", &ID);
		for (i = 0; i < max; i++)
		{
			if (ID == Book[i].B_ID)
			{
				pik = i;
				cnt = 1;
			}
		}
		if (cnt == 0)
		{
			printf("This ID is not exist \n");
			printf("==========================================================\n");
		}
		else
		{
			Book[pik].B_ID = 0;
			Book[pik].Date = 0;
			Book[pik].Phone_num = 0;
			for (i = 0; i < max; i++)
			{
				Book[pik].B_name[i] = 0;
				Book[pik].P_name[i] = 0;
				Book[pik].A_name[i] = 0;
				Book[pik].A_Email[i] = 0;
			}
			printf("This ID is Deleted \n");
			printf("==========================================================\n");
			for (i = pik; i < max - 1; i++)
			{
				Book[i].B_ID = Book[i + 1].B_ID;
				Book[i].Date = Book[i + 1].Date;
				Book[i].Phone_num = Book[i + 1].Phone_num;
				for (int j = 0; j < max; j++)
				{
					Book[i].B_name[j] = Book[i + 1].B_name[j];
					Book[i].P_name[j] = Book[i + 1].P_name[j];
					Book[i].A_name[j] = Book[i + 1].A_name[j];
					Book[i].A_Email[j] = Book[i + 1].A_Email[j];
				}
			}
			Book[29].B_ID = 0;
			Book[29].Date = 0;
			Book[29].Phone_num = 0;
			for (int j = 0; j < max; j++)
			{
				Book[29].B_name[j] = 0;
				Book[29].P_name[j] = 0;
				Book[29].A_name[j] = 0;
				Book[29].A_Email[j] = 0;
			}
			temp--;
			space--;
		}
}

int search(int* id_copy, int end, int Target)
{
	for (int k = 0; k < end; k++)
	{
		if (id_copy[k] == Target)
		{
			return k;
			break;
		}
	}
	return -1;
}

void displayauthor()
{
	int cnt = 0;
	printf("Display a list of books published by an author\n");
	printf("Enter the author name :");
	scanf_s("%s", &Book[0].A_Search, 30);
	printf("==========================================================\n");
	printf("list of books published by the author :%s \n", Book[0].A_Search);
	for (i = 0; i < space; i++)
	{
		if (strcmp(Book[0].A_Search, Book[i].A_name) == 0)
		{
			cnt++;
			printf("%2d. ID :%2d, Bookname :%s, publisher :%d \n", cnt, Book[i].B_ID, Book[i].B_name, Book[i].Phone_num);
		}
	}

	if (cnt == 0)
	{
		printf("There is no book by %s. \n", Book[0].A_Search);
	}
	printf("==========================================================\n");
}

void displayPub()
{
	int cnt = 0;
	printf("Display a list of book(s) published by a publisher\n");
	printf("Enter the publisher name :");
	scanf_s("%s", &Book[0].P_Search, 30);
	printf("==========================================================\n");
	printf("list of books published by a publisher : %s \n", Book[0].P_Search);

	for (i = 0; i < max; i++)
	{
		if (strcmp(Book[0].P_Search, Book[i].P_name) == 0)
		{
			cnt++;
			printf("%2d. ID :%2d, Bookname :%s, Author name :%s \n", cnt, Book[i].B_ID, Book[i].B_name, Book[i].A_name);
		}
	}
	if (cnt == 0)
	{
		printf("There is no book by %s \n", Book[0].P_Search);
	}
	printf("==========================================================\n");
}

void displaybook()
{
	int cnt = 0;
	printf("\n==========================================================\n");
	printf("Book list \n");
	for (i = 0; i < max; i++)
	{
		if (Book[i].B_ID != 0)
		{
			printf("\n==========================================================\n");
			printf("%2d. Book ID : %d \n", i + 1, Book[i].B_ID);
			printf("%2d. Book Name : %s \n", i + 1, Book[i].B_name);
			printf("%2d. Publication Date : %d \n", i + 1, Book[i].Date);
			printf("%2d. Publisher Name : %s \n", i + 1, Book[i].P_name);
			printf("%2d. Publisher Phone Number : %d \n", i + 1, Book[i].Phone_num);
			printf("%2d. Author Name : %s \n", i + 1, Book[i].A_name);
			printf("%2d. Author Email Address : %s \n", i + 1, Book[i].A_Email);
			printf("\n==========================================================\n");
			cnt++;
		}
	}
	if (cnt == 0)
	{
		printf("There are no books saved. \n");
		printf("\n==========================================================\n");
	}
}

int main()
{
	for (i = 0; i < max; i++)
	{
		Book[i].B_ID = 0;
		Book[i].Date = 0;
		Book[i].Phone_num = 0;
		for (int j = 0; j < max; j++)
		{
			Book[i].B_name[j] = 0;
			Book[i].P_name[j] = 0;
			Book[i].A_name[j] = 0;
			Book[i].A_Email[j] = 0;
			Book[i].A_Search[j] = 0;
			Book[i].P_Search[j] = 0;
		}
	}

	while (1)
	{
		Up.B_ID = 0;
		Up.Date = 0;
		Up.Phone_num = 0;
		for (i = 0; i < max; i++)
		{
			Up.B_name[i] = 0;
			Up.P_name[i] = 0;
			Up.A_name[i] = 0;
			Up.A_Email[i] = 0;
		}
		printf("\n==========================================================\n");
		printf("1. Add book information\n");
		printf("2. Update book information\n");
		printf("3. Delete book information\n");
		printf("4. Search book information\n");
		printf("5. Display a list of book(s) published by an author\n");
		printf("6. Display a list of books published by a publisher\n");
		printf("7. Display a list of all book\n");
		printf("8. Program Exit \n");
		printf("==========================================================\n");
		printf("Please enter the operation number. : ");
		scanf_s("%d", &op_num);
		printf("==========================================================\n");

		switch (op_num) {
		case 1:
			addbook();
			break;
		case 2:
			updatebook();
			break;
		case 3:
			deletebook();
			break;
		case 4:
		{	int ID = 0, Search_id[max] = { 0 }, Sch = 0;
			if (temp == 0)
			{
				printf("There is no registered ID.");
			}
			else if (temp > 0)
			{
				printf("Enter the ID to search :");
				scanf_s("%d", &ID);
				for (i = 0; i < max; i++)
				{
					Search_id[i] = Book[i].B_ID;
				}

				Sch = search(Search_id, temp, ID);

				if (Sch == -1)
					printf("ID is not exist \n");
				else
				{
					printf("\n==========================================================\n");
					printf("Book ID : %d \n", Book[Sch].B_ID);
					printf("Book Name : %s \n", Book[Sch].B_name);
					printf("Publication Date : %d \n", Book[Sch].Date);
					printf("Publisher Name : %s \n", Book[Sch].P_name);
					printf("Publisher Phone Number : %d \n", Book[Sch].Phone_num);
					printf("Author Name : %s \n", Book[Sch].A_name);
					printf("Author Email Address : %s \n", Book[Sch].A_Email);
					printf("\n==========================================================\n");
				}
			}
			break;
		}
		case 5:
			displayauthor();
			break;
		case 6:
			displayPub();
			break;
		case 7:
			displaybook();
			break;
		case 8:
			printf("This Program EXit \n");
			return 0;
		default:
			printf("Invalid choice! \n");
			break;
		}
	}
}
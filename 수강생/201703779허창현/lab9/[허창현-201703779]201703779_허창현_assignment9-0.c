#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#define max 100

struct Library
{
	int book_id;

	char book_name[20];

	int publication_date;    //yymmdd

	char publisher_name[20];

	char publisher_phone_number[20];

	char author[20];

	char author_email[30];
};

int num = 0;              //book_num
int input, index, key;
char input_string[20];
int id[max] = { 0 };

void Add_book(Library book[])
{
	

	book[num].book_id = input;

	printf("Enter the new book name             : ");
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[num].book_name, input_string);

	printf("Enter the publication date(yymmdd)  : ");
	scanf_s("%d", &input);
	book[num].publication_date = input;

	printf("Enter the publisher name            : ");
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[num].publisher_name, input_string);

	printf("Enter the publisher phone number    : ");
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[num].publisher_phone_number, input_string);

	printf("Enter the publisher author name     : ");
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[num].author, input_string);

	printf("Enter the publisher author_email    : ");
	scanf_s("%s", input_string, 30);
	getchar();
	strcpy(book[num].author_email, input_string);

}
void Update_book(Library book[])
{
	printf("book id          : %d\n", book[index].book_id);
	printf("book name        : %s\n", book[index].book_name);
	printf("publication date : %d\n", book[index].publication_date);
	printf("publisher name   : %s\n", book[index].publisher_name);
	printf("publisher phone  : %s\n", book[index].publisher_phone_number);
	printf("author name      : %s\n", book[index].author);
	printf("author email     : %s\n", book[index].author_email);

	printf("\nChange book name                     [ %s -> ? ] : ", book[index].book_name);
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[index].book_name, input_string);

	printf("Change the publication date(yymmdd)  [ %d -> ? ] : ", book[index].publication_date);
	scanf_s("%d", &input);
	book[index].publication_date = input;

	printf("Changer the publisher name           [ %s -> ? ] : ", book[index].publisher_name);
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[index].publisher_name, input_string);

	printf("Change the publisher phone number    [ %s -> ? ] : ", book[index].publisher_phone_number);
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[index].publisher_phone_number, input_string);

	printf("Change the publisher author name     [ %s -> ? ] : ", book[index].author);
	scanf_s("%s", input_string, 20);
	getchar();
	strcpy(book[index].author, input_string);

	printf("Change the publisher author_email    [ %s -> ? ] : ", book[index].author_email);
	scanf_s("%s", input_string, 30);
	getchar();
	strcpy(book[index].author_email, input_string);

}
void Delete_book(Library book[])
{
	int i,j,k =0;
	printf("\n[Delete book information]\n\n");
	printf("Enter the book ID to delete : ");
	scanf_s("%d", &input);

	for (i = 0; i < num; i++)
	{                                               // search for book id to delete
		if (input == book[i].book_id) {             //삭제할 id를 찾아서
			k = 1;
			for (j = i; j < num; j++) {
				book[j] = book[j + 1];           // 뒤 데이터로 덮어씀
			}
			printf("delete success!\n");
			num--;
		}
	}

	if (k == 0)                                  //삭제할 id가 없으면 에러
	{
		printf("**error try again**\n\n"); //If there is no book id to delete, output an error message
	}
}
void Search_book(Library book[])
{
	printf("\n[Search book information]\n\n");
	printf("Enter the name of the book to search for :");
	scanf_s("%s", &input_string, 20);
	getchar();

	printf("\nSearching for %s...\n\n", input_string);

	int i,k = 0;
	for (i = 0; i < num; i++)
	{
		if (strcmp(input_string, book[i].book_name) == 0)
		{                                 //If the search results show a matching book name,
			k = 1;
			printf("********found it********\n");
			printf("book id          : %d\n", book[i].book_id);
			printf("book name        : %s\n", book[i].book_name);
			printf("publication date : %d\n", book[i].publication_date);
			printf("publisher name   : %s\n", book[i].publisher_name);
			printf("publisher phone  : %s\n", book[i].publisher_phone_number);
			printf("author name      : %s\n", book[i].author);
			printf("author email     : %s\n", book[i].author_email);
		}
	}
	if (k == 0)
	{
		printf("**No Search Results**");
	}
}
void Display_author_books(Library book[])
{
	printf("\n[Search for author]\n\n");
	printf("Enter the name of author to search for :");
	scanf_s("%s", &input_string, 20);
	getchar();

	printf("\nSearching for %s...\n\n", input_string);
	int i, k = 0;
	for (i = 0; i < num; i++)
	{
		if (strcmp(input_string, book[i].author) == 0)
		{                             //If the search results show a matching author,
			k++;
			if (k == 1) printf("********found it********\n");
			printf("[%d] %s\n", k, book[i].book_name);
		}
	}
	printf("\nFound %d search results..", k);

	if (k == 0)
	{
		printf("**No Search Results**");
	}
}
void Display_publisher_books(Library book[])
{
	printf("\n[Search for publisher]\n\n");
	printf("Enter the name of publisher to search for :");
	scanf_s("%s", &input_string, 20);
	getchar();

	int i,k = 0;
	printf("Searching for %s...\n\n", input_string);
	for (i = 0; i < num; i++)
	{
		if (strcmp(input_string, book[i].publisher_name) == 0)
		{                                      //If the search results show a matching author,
			k++;
			if (k == 1) printf("********found it********\n");
			printf("[%d] %s\n", k, book[i].book_name);
		}
	}
	printf("\nFound %d search results..", k);

	if (k == 0)
	{
		printf("**No Search Results**");
	}
}
void Display_all_books(Library book[])
{
	printf("\n[Display a list of all book]\n");
	int i = 0;
	for (i; i < num; i++)
	{

		printf("\n\n[%d]\n", i + 1);
		printf("book id          : %d\n", book[i].book_id);
		printf("book name        : %s\n", book[i].book_name);
		printf("publication date : %d\n", book[i].publication_date);
		printf("publisher name   : %s\n", book[i].publisher_name);
		printf("publisher phone  : %s\n", book[i].publisher_phone_number);
		printf("author name      : %s\n", book[i].author);
		printf("author email     : %s\n", book[i].author_email);
	}

	printf("\nFound %d search results..", i);
}


int main()
{

	struct Library book[max] = { 0 };

	int op, i, j;

	while (1)
	{
	start:
		printf("\n\n#Press any key to continue =>");
		key = _getch();
		if (key) system("cls");

		printf("\n\n        [ Welcome Library Management program ]\n\n");
		printf("******************************************************\n\n");
		printf("1. Add book information \n2. Update book information \n3. Delete book information\n4. Search book information\n");
		printf("5. Display a list of book(s) published by an author\n6. Display a list of book(s) published by a publisher\n");
		printf("7. Display a list of all book\n\n");
		printf("******************************************************\n");



		printf("\n\nEnter the option  ->  ");
		scanf_s("%d", &op);


		int k = 0;
		switch (op)
		{
		case 1:
			printf("\n[Add book information]\n\n");
			printf("Enter the new book ID               : ");
			scanf_s("%d", &input);

			//wrong input check
			if (input < 0)
			{
				printf("\n\n*** Book ID should not be a negative number ***\n\n");
				goto start;
			}    

			//If there is more than one book, duplication check
			if (num >= 1)                    
			{
				for (i = 0; i < num; i++)
				{
					if (input == book[i].book_id) {                    //입력받은 id가 기존의 id와 일치하는가
						printf("\n\n***Duplicate ID found***\n\n");
						goto start;                          //일치하면 경고문 출력후 초기로 돌아감
					}
				}
			} 

			Add_book(book);
			num++;
			break;

		case 2:
			printf("\n[Update book information]\n\n");
			printf("Enter 'book ID' to update :");
			scanf_s("%d", &input);

			index = 0;
			for (i = 0; i < num; i++)               //not exsite book id check
			{
				if (input == book[i].book_id) {
					k = 1;
					index = i;
				}
			}

			if (k == 0)                             // error print
			{
				printf("\n*** error! not exsite book ID  ***\n try again");
				goto start;
			}

			Update_book(book);
			break;

		case 3:
			Delete_book(book);
			break;


		case 4:
			Search_book(book);
			break;

		case 5:
			Display_author_books(book);
			break;

		case 6:
			Display_publisher_books(book);
			break;

		case 7:
			Display_all_books(book);
			break;

		default:
			printf("\n**errer**\n Please enter a number for the menu!");
			break;
		}
	}
}
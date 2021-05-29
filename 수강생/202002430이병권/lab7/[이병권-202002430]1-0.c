#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Book
{
	char bk_ID[30];
	char bk_name[30];
	char publication_date[30];
	char publisher_name[30];
	char author[30];
	char author_email[30];
	char phone_Num[30];
	int pages;
	float price;
};

int main()
{
	struct Book l[100];
	char ar_nm[30], bk_nm[30], bk_ID[30],author[30],phone_Num[30],author_email[30],publication_date[30],publisher_name[30];
	int i, j, keepcount;
	i = j = keepcount = 0;

	while (j != 9)
	{
		printf("\n\n1. Add book information\n2. Update book information\n");
		printf("3. Delete book information\n");
		printf("4. Search book inforamtion\n");
		printf("5. List of book(s) published by an author a\n");
		printf("6. List of book(s) publisher by a publisher p\n");
		printf("7. List of all book\n");
		printf("8. Exit");

		printf("\n\nEnter one of the above : ");
		scanf_s("%d", &j);

		switch (j)
		{
			
		case 1:

			printf("Enter book name = ");
			scanf_s("%s", l[i].bk_name);

			printf("Enter book ID = ");
			scanf_s("%s", l[i].bk_ID);

			printf("Enter publication_date = ");
			scanf_s("%s", l[i].publication_date);

			printf("Enter publisher_name = ");
			scanf_s("%s", l[i].publisher_name);

			printf("Enter author name = ");
			scanf_s("%s", l[i].author);

			printf("Enter author email = ");
			scanf_s("%s", l[i].author_email);

			printf("Enter phblisher Phobe Number = ");
			scanf_s("%s", l[i].phone_Num);

			keepcount++;

			break;
		case 2:
			printf("you have entered the following information\n");
			for (i = 0; i < keepcount; i++)
			{
				printf("book name = %s", l[i].bk_ID);

				printf("book name = %s", l[i].bk_name);

				printf("\t author name = %s", l[i].author);

				printf("\t author name = %s", l[i].publisher_name);
				
				printf("\t author name = %s", l[i].author_email);

				printf("\t  Publisher Phone number = %d", l[i].phone_Num);

				printf("\t  Publication Date = %d", l[i].publication_date);

			}
			break;

		case 3:
			printf("Enter author name : ");
			scanf_s("%s", ar_nm);
			for (i = 0; i < keepcount; i++)
			{
				if (strcmp(ar_nm, l[i].author) == 0)
					printf("%s %s %d %f", l[i].bk_ID,l[i].bk_name, l[i].author, l[i].publisher_name, l[i].author_email,l[i].pages, l[i].phone_Num, l[i].publication_date);
			}
			break;

		case 4:
			printf("Enter book name : ");
			scanf_s("%s", bk_nm);
			for (i = 0; i < keepcount; i++)
			{
				if (strcmp(bk_nm, l[i].bk_name) == 0)
					printf("%s \t %s \t %d \t %f", l[i].bk_ID, l[i].bk_name, l[i].author, l[i].publisher_name, l[i].author_email, l[i].pages, l[i].phone_Num, l[i].publication_date);
			}
			break;

		case 5:
			printf("Enter Publisher name : ");
			scanf_s("%s", publisher_name);
			for (i = 0; i < keepcount; i++)
			{
				if (strcmp(publisher_name, l[i].publisher_name) == 0)
					printf("%s \t %s \t %d \t %f", l[i].bk_ID, l[i].bk_name, l[i].author, l[i].publisher_name, l[i].author_email, l[i].pages, l[i].phone_Num, l[i].publication_date);
			}
			break;
		case 6:
			printf("Enter Publication Date : ");
			scanf_s("%s", publication_date);
			for (i = 0; i < keepcount; i++)
			{
				if (strcmp(publication_date, l[i].publication_date) == 0)
					printf("%s \t %s \t %d \t %f", l[i].bk_ID, l[i].bk_name, l[i].author, l[i].publisher_name, l[i].author_email, l[i].pages, l[i].phone_Num, l[i].publication_date);
			}
			break;

		case 7:
			printf("Enter Publisher Phone Number :  ");
			scanf_s("%s", phone_Num);
			for (i = 0; i < keepcount; i++)
			{
				if (strcmp(phone_Num, l[i].phone_Num) == 0)
					printf("%s \t %s \t %d \t %f", l[i].bk_ID, l[i].bk_name, l[i].author, l[i].publisher_name, l[i].author_email, l[i].pages, l[i].phone_Num, l[i].publication_date);
			}
			break;


		case 8:
			printf("\n No of books in library : %d", keepcount);
			break;
		case 9:
			exit(0);

		}
	}
	return 0;

}
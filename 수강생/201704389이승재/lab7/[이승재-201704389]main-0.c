#include<stdio.h>
#include<string.h>

int bookid, bookidnum, id, i, j;
char bookname;
/*int main(void)
{
	int Bid, PBdate, PBphonenum;
	char Bname, PBname, ATname, ATemail;
}*/
struct bookinfo {
	int bookid, pbdate, pbphonenum;
	char bookname[50], pbname[20], authorname[20], authoremail[30];
};

/*struct bookmanage {
	int choice, i, j, A[10], search;

};*/

struct bookinfo bi[50];

void displaybook(struct bookinfo bi)
{
	printf("Book ID: %d", bi.bookid);
	printf("\nBook Name: %s", bi.bookname);
	printf("\nPublication Date: %d", bi.pbdate);
	printf("\nPublisher Name: %s", bi.pbname);
	printf("\nPublisher Phone Number: %d", bi.pbphonenum);
	printf("\nAuthor Name: %s", bi.authorname);
	printf("\nAuthor Email Address: %s", bi.authoremail);

}

int main(void)
{
	int choice, i, j, A[10], search;

	do
	{
		printf("1. Add book information. \n");
		printf("2. Update book information. \n");
		printf("3. Delete book information. \n");
		printf("4. Search book information. \n");
		printf("5. Display a list of book(s) published by an author a. \n");
		printf("6. Display a list of book(s) published by a publisher p. \n");
		printf("7. Display a list of all book. \n");

		printf("Choice a number -> ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Add book information. \n\n");
			printf("Enter a book ID:  ");
			scanf_s("%d", &bookid);
			id = bookidnum;
			bookidnum += bookid;
			for (i = id; i < bookid; i++) {
				for (j = 0; j < i; j++) {
					if (i == j) {
						j--;
						i--;

						printf("\n complete \n ");
						break;
					}
				}
				printf("Enter a bookid : \n");
				scanf_s("%d", &bookid);
				for (i = 0; i < 10; i++)
				{
					scanf_s("%d", &A[i]);
					for (j = 0; j < i; j++)
					{
						if (A[i] == A[j])
						{
							i--;
							break;
						}
					}
				}
		case 2:
			printf("Update book information. \n");
		case 3:
			printf("Delete book information. \n");

			for (i = 0; i < 10; i++)
			{
				scanf_s("%d", &A[j]);
				for (i = 0; i < 10; i++)
				{
					if (A[i] == A[j])
					{
						A[i] == A[i--];
						break;
					}
				}
			}
		case 4:
			printf("Search book information. \n");
			for (i = 0; i < 30; i++)
			{
				scanf_s("%d", &search);
				{
					if (A[i] == search)
					{
						printf("book information : %d", search);
						break;
					}
				}
			}
		case 5:
			printf("Display a list of book(s) published by an author a. \n");
		case 6:
			printf("Display a list of book(s) published by a publisher p. \n");
		
		case 7:
			printf("Display a list of all book. \n");
			for (i = 0; i < 30; i++)
			{
				displaybook(bi[j]);
			}
			break;
			}
		}
	} while (choice != 0);
}

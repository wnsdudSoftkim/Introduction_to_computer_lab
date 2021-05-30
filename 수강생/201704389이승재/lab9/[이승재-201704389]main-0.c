#include<stdio.h>
#include<string.h>

/*int main(void)
{
	int Bid, PBdate, PBphonenum;
	char Bname, PBname, ATname, ATemail;
}*/

int bookid, bookidnum, id, i, j;
char bookname;


struct bookinfo {
	int bookid, pbdate, pbphonenum;
	char bookname[50], pbname[20], authorname[20], authoremail[30];
};

struct authorinfo {
	char name[50];
	char email[50];
};

struct bookinfo bi[50];
struct authorinfo ai[50];

int bk_index = 0, author_index, a, temp;
struct book add_bookname();
struct author add_author();

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

void displayauthor(struct authorinfo ai) {
	int j;
	printf("\n=============\n");
	printf("name : %s", ai.name);
	printf("\nBook ID : ");
	for (j = 0; j < bk_index; j++) {
		if (ai.name == bi[j].authorname) {
			printf("%d", bi[j].authorname);
		}
	}
	printf("\nE-mail : %s", ai.email);
	printf("\n=============\n");
}

void search_book() {
	char search_bk[30];

	printf("\n Enter Book's name to find : ");
	getchar();
	scanf_s("%s", search_bk);

	for (a = 0; a < bk_index; a++) {
		if (!strcmp(search_bk, bi[a].bookname)) {
			displaybook(bi[a]);
			break;
		}
	}
	if (a == bk_index) {
		printf("\nThere is no book by that name!\n");
	}
}

/*void update_book()
{

}*/

void bookmanagement() {
	int bm, i;

	do {
		printf("\n====== Book Management ======\n");
		printf("\n1. Add Books\n");
		printf("\n2. Update Book\n");
		printf("\n3. Delete Book\n");
		printf("\n4. Search Book \n");
		printf("\n5. Display a list of all book");
		printf("\n6. Exit\n");
		printf("\n\nEnter menu : ");
		scanf_s("%d", &bm);

		switch (bm) {
		case 1:
			add_bookname();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			search_book();
			break;
		case 5:
			for (i = 0; i < bk_index; i++)
			{
				displaybook(bi[i]);
			}
			break;
		default:
			printf("\nInvalid choice! \n");
			break;
		}
	} while (bm != 6);
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

struct book add_bookname() {

	int next = 1, flag = 0;

	while (1) {
		if (author_index == 0) {
			printf("\nNo registered authors.\n");
			add_authorid();
			break;
		}
		else {
			printf("\nEnter Author name: ");
			scanf_s("%d", &temp);
			for (a = 0; a < author_index; a++) {
				if (add_bookname[a].ID == temp) {
					book[bk_index].authorname = temp;
					break;
				}
			}
			if (a == author_index) {
				printf("\nNo registered authors.\nPlease Register Author.\n");
				add_authorid();
				break;
			}
		}
		printf("\nEnter Book name : ");
		scanf_s("%d", &temp);
		for (a = 0; a < bk_index; a++) {
			if (temp == bi[a].bookname) {
				flag = 1;
			}
		}
		if (!flag) {
			bi[bk_index].bookname = temp;
		}
		else if (flag == 1) {
			printf("\nThis ID already exists!\n");
			break;
		}
		// book ID 중복 검사 
		getchar();
		// 다음 String 을 입력 받기 위해 Buffer 를 비워줌. 
		printf("\nEnter Book name : ");
		gets(bi[bk_index].bookname);

		printf("\nEnter Book publication date : ");
		scanf_s("%d", &bi[bk_index].pbdate);

		printf("\nEnter Book publisher name  : ");
		scanf_s("%s", &bi[bk_index].pbname);

		printf("\nEnter Book publisher phone number : ");
		scanf_s("%d", &bi[bk_index].pbphonenum);

		bk_index++;
		printf("\nRecord saved\n");
		printf("\nDo you want to add it? \n<< Enter 1 to continue , 0 to exit >>");
		scanf_s("%d", &next);
		getchar();
		if (next == 0) break;
	}
}
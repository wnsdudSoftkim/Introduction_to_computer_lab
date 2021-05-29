#include <stdio.h>
#include <string.h> 

struct Library
{
	int ID;
	char name[20];
	char pdate[50];
	char pname[20];
	int ppnumber[20];
	char aname[20];
	char aemail[50];
};

int main()
{
	struct Library LB[10];

	int k,index = 0;

	int next = 1;

	int input = 0;

	char what[30];

	int num = -1;

	printf("<< Welcome to Library>> \n");
	while (next != 0) {
		printf("\n\n1. Add book information\n2. Update book information\n3. Delete book information\n4. Search book information\n5.Display a list of book(s) published by an author a\n6. Display a list of book(s) published by a publisher p\n7. Display a list of all book\n0. out\n");
		scanf_s("%d", &next);
		getchar();

		switch (next) {

		case 0:
			break;

		case 1: {//Add book n=information
			
			int flag = 0;
			while (1) {
				printf("\nEnter Book ID(number): ");
				scanf_s(" %d", &input);
				getchar();
				if (input < 0){//음수안돼
					printf("\nBook ID can't be a negetive number"); break;
				}
				for (int i = 0; i <= index; i++) { //중복안돼
					if (input == LB[i].ID) {
						flag = 1;
					}
				}
				if (flag == 1) {
					printf("\n This ID already exists! or check your ID agian\n");
					break;
				}
				if (!flag) {

					LB[index].ID = input; 
					printf("\nEnter Book name: ");
					gets(LB[index].name);

					printf("\nEnter Publication Date(yyyy-MM-dd): ");
					gets(LB[index].pdate);

					printf("\nEnter Publisher name: ");
					gets(LB[index].pname);

					printf("\nEnter Publisher Phone number: ");
					scanf_s(" %d", &LB[index].ppnumber);
					getchar();

					printf("\nEnter Author Name: ");
					gets(LB[index].aname);

					printf("\nEnter Author email: ");
					gets(LB[index].aemail);
					
					index += 1;

					printf("\ninformation saved\n"); break;

				}
			}
			
		}break;

		case 2: {//update book information
			printf("\nEnter the book name you want to update :");
			gets(what);

			for (int i = 0; i < index; i++) {
				int ret = strcmp(what, LB[i].name);
				if (ret == 0) {//찾으면 업데이트 시작
					printf("\nEnter new Book name: ");
					gets(LB[index].name);

					printf("\nEnter new Publication Date(yyyy-MM-dd): ");
					gets(LB[index].pdate);

					printf("\nEnter new Publisher name: ");
					gets(LB[index].pname);

					printf("\nEnter new Publisher Phone number: ");
					scanf_s(" %d", &LB[index].ppnumber);
					getchar();

					printf("\nEnter new Author Name: ");
					gets(LB[index].aname);

					printf("\nEnter new Author Email: ");
					gets(LB[index].aemail);

					printf("\nUpdated\n"); break;
				}
				else if ((i == index - 1) || (ret == 1)) {
					printf("\nThere is no such a book"); break;
				}
			}break;
		} break;
		case 3: {//delete
			printf("\nEnter Book name you want to delete:");
			gets(what);
			int flag = 0;
			for (int i = 0; i <= index; i++) {
				int ret = strcmp(what, LB[i].name);
				if (ret == 0) {//도서관에 존재! k 에 인덱스 저장
					k = i; 
					flag = 1;
					break;
				}
			}
			if (flag == 1) {// 존재하면 찾고 앞으로 땅기기 후 index -1
				for (int i = k; i < index; i++) {
					LB[i] = LB[i + 1];
				}
				index -= 1;
				printf("\ndeleted");
				break;
			}
			else if (!flag) {
				printf("\n This ID is not in this system.\n");
			}				
		}break;

		case 4: {// search book information
			printf("\nEnter Book name you want know:");
			gets(what);

			for (int i = 0; i <= index; i++) {
				int ret = strcmp(what, LB[i].name);
				if (ret == 0) {
					printf("\ninformation of %s", what);
					printf("Book id : %d", LB[i].ID);
					printf("publish date :%s ", LB[i].pdate);
					printf("publisher name :%s ", LB[i].pdate);
					printf("publisher phone number :%ld  ", LB[i].ppnumber);
					printf("auther name :%s ", LB[i].aname);
					printf("auther email :%s ", LB[i].aemail);
					break;
				}
				if ((i == index) || (ret == 1)) {//끝까지도 같은게 없으면
					printf("\nThere is no such a book");
				}
			}break;

		}
		case 5: {//작가 이름으로 찾기
			printf("\nEnter auther name: ");
			gets(what);
			for (int i = 0; i <= index; i++) {
				int ret = strcmp(what, LB[i].aname);
				if (ret == 0) {
					printf("%s", LB[i].name); 
				}
				if (i == index) {
					printf("\ndone");
				}
			}
		}break;

		case 6: {
			printf("\nEnter publisher name: ");
			gets(what);
			for (int i = 0; i <= index; i++) {
				int ret = strcmp(what, LB[i].pname);
				if (ret == 0) {
					printf("%s", LB[i].name);
				}
				if (i == index) {
					printf("\ndone");
				}

			}

		}break;

		case 7: {// display
			printf("\n<<All books in library>>");
			if (index == 0) {
				printf("\nthere is no book to display"); break;
			}
			else {
				for (int i = 0; i < index; i++) {
					printf("\n%s", LB[i].name);
				}
			}

		}break;
		default :
			printf("not available");break;

		}
		}
	}


















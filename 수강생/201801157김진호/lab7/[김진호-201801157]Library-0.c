#include <stdio.h>
#include <string.h>
#include <conio.h>

struct book {

	int id;
	char name[20];
	char date[20];
	char pubName[20];
	char phoneNum[20];
	char autName[20];
	char email[30];

};

int main() {
	int num= 0;// how many books in system
	int opt;
	int loopidx = 0;
	
	struct book b[100];
	
	while (loopidx==0) {
		printf("Enter option you want to use \n1.Add book information. \n2.Update book information. \n3.Delete book information. \n4.Search book information. \n5.Find a book by a specific author. \n6.Find a book by a specific publisher. \n7.Display a list of all book. \n8.Exit\n");
		scanf_s("%d", &opt);
		printf("\n");

		switch (opt) {

			case(1)://Add book information.중복체크.음수 아님
			{
				system("cls");
				
				int dupidx = 0;

				int temp;
				
				printf("Enter book ID : ");
				scanf_s("%d", &temp);
				getchar();

				for (int i = 0; i < num; i++) {
					if (temp == b[i].id) {
						dupidx++;
					}
				}
				if (temp < 0)
					dupidx++;
				
				if (dupidx == 0) {
					
					b[num].id = temp;

					printf("Enter book Name : ");
					gets(b[num].name);


					printf("Enter publication date(dd/mm/yy) : ");
					gets(b[num].date);

					printf("Enter publisher name : ");
					gets(b[num].pubName);


					printf("Enter publisher phone number : ");
					gets(b[num].phoneNum);


					printf("Enter author name : ");
					gets(b[num].autName);

					printf("Enter author email : ");
					gets(b[num].email);

					printf("\n\n");
					num++;
				}
				else if (dupidx != 0) {
					printf("You entered duplicated ID.\n\n");
				}
				break;
			}

			case(2)://Update book information.
			{
				system("cls");
				
				int key;
				int check = 0;

				printf("Enter book ID you want to update information : ");
				scanf_s("%d",&key);
				for (int i = 0; i < num; i++) {
					if (key == b[i].id) {
						
						int inopt;
						check++;

						printf("What information would you like to change? \n1.book Name \n2.publication date \n3.publisher name \n4.publisher phone number \n5.author name \n6.author email\n");
						scanf_s("%d", &inopt);
						getchar();
						
						switch (inopt) 
						{
						
						case (1) : //book Name
							{
							char temp[20];
							printf("\nEnter new book name : ");
							gets(temp);
							strcpy_s(b[i].name,20,temp);

							break;
							}
						
						case (2): //publication date
							{
							char temp[20];
							printf("\nEnter new publication date : ");
							gets(temp);
							strcpy_s(b[i].date, 20, temp);
							break;
							}
						
						case (3): //publisher name
							{
							char temp[20];
							printf("\nEnter new publisher name : ");
							gets(temp);
							strcpy_s(b[i].pubName, 20, temp);
							break;
							}
						
						case (4): //publisher phone number
							{
							char temp[20];
							printf("\nEnter new phone number : ");
							gets(temp);
							strcpy_s(b[i].phoneNum, 20, temp);
							break;
							}

						case (5): //author name
							{
							char temp[20];
							printf("\nEnter new author name : ");
							gets(temp);
							strcpy_s(b[i].autName, 20, temp);
							break;
							}

						case (6): //author email
						{
							char temp[30];
							printf("\nEnter new author email : ");
							gets(temp);
							strcpy_s(b[i].email, 30, temp);
							break;
						}
						default :
							printf("You entered wrong number.\n");
						}
					}
				}
				if (check == 0) {
					printf("\nYou entered wrong ID\n\n");
				}
				break;
			}

			case(3)://Delete book information.
			{
				system("cls");
				int key;
				int check = 0;
				
				printf("Enter ID of book you want to Delete : ");
				scanf_s("%d", &key);
				
				for (int i = 0; i < num; i++) {
					if (key == b[i].id) {
						for (int j = i; j < num; j++) {
							b[j] = b[j + 1];
						}
						check++;
						num--;
					}
				}
				if (check == 0) {
					printf("\nYou entered wrong ID of book\n\n");
				}
				break;
			}

			case(4)://Search book information.
			{
				system("cls");
				int key;
				int check = 0;
				printf("Enter ID of book you want to find : ");
				scanf_s("%d", &key);
				for (int i = 0; i < num; i++) {
					if (b[i].id == key) {
						
						printf("\nBook Name : %s\n",b[i].name);

						printf("Publication Date : %s\n",b[i].date);

						printf("Publisher Name : %s\n", b[i].pubName);

						printf("Publisher Phone Number : %s\n", b[i].phoneNum);

						printf("Author Name : %s\n", b[i].autName);

						printf("Author Email : %s\n\n", b[i].email);

						check++;
					}
					if (check == 0) {
						printf("\nYou entered worng ID\n\n");
					}
				}
				break;
			}

			case(5)://Find a book by a specific author.
			{
				system("cls");
				char key[20];
				int check = 0;

				getchar();
				printf("Enter the author's name : ");
				gets(key);
				printf("\n\n");
				
				for (int i = 0; i < num; i++) {
					if (strcmp(key, b[i].autName) == 0) {
						printf("%s's Book : %s\n",key,b[i].name);
						check++;
					}
				}
				if (check == 0) {
					printf("There isn't %s's book\n",key);
				}
				printf("\n\n");
				break;
			}

			case(6)://Find a book by a specific publisher.
			{
				system("cls");
				char key[20];
				int check = 0;

				getchar();
				printf("Enter the publisher name : ");
				gets(key);
				printf("\n\n");

				for (int i = 0; i < num; i++) {
					if (strcmp(key, b[i].pubName) == 0) {
						printf("%s's Book : %s\n", key, b[i].name);
						check++;
					}
				}
				if (check == 0) {
					printf("There isn't %s's book\n");
				}
				printf("\n\n");
				break;
			}

			case(7)://Display a list of all book.
			{
				system("cls");
				for (int i = 0; i < num; i++) {
					printf("\nBook Name\n\n%d. %s\n", i+1, b[i].name);
				}
				printf("\n");
				break;
			}

			case(8)://Exit
			{
				loopidx++;
				break;
			}
			
			default:
				printf("You entered wrong number.\n\n");
		}
	}
}
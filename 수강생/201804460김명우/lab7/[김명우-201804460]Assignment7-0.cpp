#include<stdio.h>
#include<string.h>

typedef struct Book {

    int id;
    char name[50];
    char publication_date[50];
    char publisher_name[50];
    char phone_number[50];
    char author_name[50];
    char author_email[50];
}Book;

int main() {
    Book book[100];
    int index = -1;
    char temp[50];
    printf("Library Program");
    int a;
    int b = 0;
    while (1) {
        printf("(1)Add (2)Update (3)Delete (4)Search (5)Display a list of books published by an author (6)Display a list of books published by a publisher (7)Display a list of all book : ");
        scanf_s("%d", &b);
        switch (b)
        {
        case 1:
            if (index == 100) {
                printf("Library is full\n");
                continue;
            }
            printf("Input Book ID: ");
            scanf_s("%d", &a);
            if (a < 0) {
                printf("Book ID should not be a negative number.\n");
            }
            for (int i = 0; i <= index; i++) {
                if (book[i].id == a) {
                    printf("Book ID should be unique.\n");
                    a = -1;
                }
            }
            if (a == -1) continue;
            index++;
            book[index].id = a;
            printf("Input Book Name: ");
            scanf_s("%s", book[index].name);
            printf("Input Book Publication Date: ");
            scanf_s("%s", book[index].publication_date);
            printf("Input Book Publisher Name: ");
            scanf_s("%s", book[index].publisher_name);
            printf("Input Book Phone Number: ");
            scanf_s("%s", book[index].phone_number);
            printf("Input Book Author Name: ");
            scanf_s("%s", book[index].author_name);
            printf("Input Book Author Email Address: ");
            scanf_s("%s", book[index].author_email);
            break;
        case 2:
            if (index == -1) {
                printf("Empty error\n");
                break;
            }
            else {
                printf("Input Book ID: ");
                scanf_s("%d", &a);
                for (int i = 0; i <= index; i++) {
                    if (book[i].id == a) {
                        printf("Input Book Name: ");
                        scanf_s("%s", book[i].name);
                        printf("Input Book Publication Date: ");
                        scanf_s("%s", book[i].publication_date);
                        printf("Input Book Publisher Name: ");
                        scanf_s("%s", book[i].publisher_name);
                        printf("Input Book Phone Number: ");
                        scanf_s("%s", book[i].phone_number);
                        printf("Input Book Author Name: ");
                        scanf_s("%s", book[i].author_name);
                        printf("Input Book Author Email Address: ");
                        scanf_s("%s", book[i].author_email);
                        break;
                    }
                    if (i == index) {
                        printf("There is no Book ID(%d)\n", a);
                    }
                }
                break;
            }
        case 3:
            if (index == -1) {
                printf("Empty error\n");
                break;
            }
            printf("Input Book ID: ");
            scanf_s("%d", &a);
            for (int i = 0; i <= index; i++) {
                if (book[i].id == a) {
                    index--;
                    for (int j = i; j <= index; j++) {
                        book[j] = book[j + 1];
                    }
                    printf("Book ID = %d is removed\n", a);
                    break;
                }
                if (i == index) {
                    printf("There is no Book ID %d\n", a);
                }
            }
            break;
        case 4:
            printf("Input Book ID: ");
            scanf_s("%d", &a);
            for (int i = 0; i <= index; i++) {
                if (book[i].id == a) {
                    printf("There is %s in list\n", temp);
                    break;
                }
                if (i == index) {
                    printf("There is no %s in list\n", temp);
                    break;
                }
            }
            break;
        case 5:
            if (index == -1) {
                printf("There is no Book\n");
                break;
            }
            printf("Input Book Author: ");
            scanf_s("%s", temp);
            for (int i = 0; i <= index; i++) {
                if (strcmp(temp, book[i].author_name) == 0) {
                    printf("Book ID: %d\n", book[i].id);
                    printf("Book Name: %s\n", book[i].name);
                    printf("Book Publication Date: %s\n", book[i].publication_date);
                    printf("Book Publisher Name: %s\n", book[i].publisher_name);
                    printf("Book Publisher Phone Number: %s\n", book[i].phone_number);
                    printf("Book Author: %s\n", book[i].author_name);
                    printf("Book Author Email Address: %s\n\n", book[i].author_email);
                }
            }
            break;
        case 6:
            if (index == -1) {
                printf("There is no Book\\n");
                break;
            }
            printf("Input Book Publisher Name: ");
            scanf_s("%s", temp);
            for (int i = 0; i <= index; i++) {
                if (strcmp(temp, book[i].publisher_name) == 0) {
                    printf("Book ID: %d\\n", book[i].id);
                    printf("Book Name: %s\\n", book[i].name);
                    printf("Book Publication Date: %s\\n", book[i].publication_date);
                    printf("Book Publisher Name: %s\\n", book[i].publisher_name);
                    printf("Book Publisher Phone Number: %s\\n", book[i].phone_number);
                    printf("Book Author: %s\\n", book[i].author_name);
                    printf("Book Author Email Address: %s\\n\\n", book[i].author_email);
                }
            }
            break;
        case 7:
            printf("BOOK LIST\n");
            if (index == -1)
                printf("There is no Book\\n");

            for (int i = 0; i <= index; i++) {
                printf("Book ID: %d\\n", book[i].id);
                printf("Book Name: %s\\n", book[i].name);
                printf("Book Publication Date: %s\\n", book[i].publication_date);
                printf("Book Publisher Name: %s\\n", book[i].publisher_name);
                printf("Book Publisher Phone Number: %s\\n", book[i].phone_number);
                printf("Book Author: %s\\n", book[i].author_name);
                printf("Book Author Email Address: %s\\n\\n", book[i].author_email);
            }
            break;
        default:
            printf("Input Error!\\n");
            break;
        }
    }
}
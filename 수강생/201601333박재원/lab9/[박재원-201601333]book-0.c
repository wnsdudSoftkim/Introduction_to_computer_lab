#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Books {
    int ID;
    char bookName[20];
    int pubDate;
    char pubName[20];
    char phone;
    char authorName[20];
    char email[50];
};

struct Books book[100];
int idx = 0, i, j, check, check2, inputID;

void addBook() {
    int check = 0, i;
    if (idx >= 100) {
        printf("There is no empty space");
    }
    else {
        printf("\nEnter book ID: ");
        scanf("%d", &book[idx].ID);
        getchar();
        if (book[idx].ID < 0) {
            printf("Book ID must be positive number");
        }
        for (i = 0; i < idx; i++) {
            if (i != idx && book[i].ID == book[idx].ID) check = 1;
        }
        if (check == 1){
            printf("There is same book ID in the space");
        }
        else {
            printf("Enter book name: ");
            gets(book[idx].bookName);

            printf("Enter publication date(ex.210506): ");
            scanf("%d", &book[idx].pubDate);
            getchar();

            printf("Enter publisher name: ");
            gets(book[idx].pubName);

            printf("Enter publisher phone number(ex.01012345678): ");
            scanf("%d", &book[idx].phone);
            getchar();

            printf("Enter author name: ");
            gets(book[idx].authorName);

            printf("Enter author email: ");
            gets(book[idx].email);

            idx++;
            printf("\nComplete");
        }
    }
}

void printBook(int n) {
    printf("\nbook ID: %d", book[n].ID);
    printf("\nbook name: %s", book[n].bookName);
    printf("\npublication date: %d", book[n].pubDate);
    printf("\npublisher name: %s", book[n].pubName);
    printf("\npublisher phone number: %d", book[n].phone);
    printf("\nauthor name: %s", book[n].authorName);
    printf("\nauthor email: %s", book[n].email);
    printf("\n----------------------------");
}


int searchBook(int n) {
    check = 101;
    for (i = 0; i < idx; i++) {
        if (book[i].ID == n) {
            check = i;
            break;
        }
    }
    return check;
}

void updateBook() {
    check = 0;

    printf("\nEnter Book ID: ");
    scanf("%d", &inputID);
    for (i = 0; i < idx; i++) {
        if (book[i].ID == inputID) {
            check = 1;
            printBook(i);
            check2 = i;
            break;
        }
    }
    if (!check) {
        printf("\nThis ID does not exist!\n");
    }
    else if (check == 1) {
        printf("\nEnter Book ID to update : ");
        scanf("%d", &inputID);

        if (searchBook(inputID) == 101 && inputID > 0) {
            book[check2].ID = inputID;

            getchar();

            printf("\nEnter Book name : ");
            gets(book[check2].bookName);

            printf("\nEnter Publisher name : ");
            gets(book[check2].pubName);

            printf("\nEnter Publisher Date : ");
            scanf("%d", &book[check2].pubDate);
            getchar();

            printf("\nEnter Author name : ");
            gets(book[check2].authorName);

            printf("\nEnter Author e-mail address : ");
            gets(book[check2].email);

            printf("\nEnter Publisher Phone Number : ");
            scanf("%d", &book[check2].phone);
            getchar();

            printf("\nRecord saved\n");
        }
        else if (searchBook(inputID) != 101) {
            printf("\nThis ID already exists!\n");
            printf("%d", searchBook(inputID));
        }
        else if (inputID < 0) {
            printf("\nThis ID's value is invalid\n'");
        }
    }
}

void deleteBook() {
    printf("\nEnter book ID you wanna delete: ");
    scanf("%d", &inputID);
    if (searchBook(inputID) == 101) printf("\nThere is no ID %d in space", inputID);
    else {
        for (i = searchBook(inputID); i < idx; i++)
            book[i] = book[i + 1];
        idx--;
    }
}

int searchAuthor(char *c) {
    j = 0;

    for (i = 0; i < idx; i++) {
        if (!strcmp(book[i].authorName,c)) {
            printBook(i);
            j++;
        }
    }
    return j;
}

int searchPublisher(char *c) {
    j = 0;

    for (i = 0; i < idx; i++) {
        if (!strcmp(book[i].pubName,c)) {
            printBook(i);
            j++;
        }
    }
    return j;
}




int main() {
    int menu;
    char inputName[20];

    while(1){
        i, j, check, check2 = 0;
        int saveData[100] = {0};
        printf("\n************MENU************\n");
        printf("1.Add book information\n");
        printf("2.Update book information\n");
        printf("3.Delete book information\n");
        printf("4.Search book information\n");
        printf("5.Display a list of book(s) published by an author a\n");
        printf("6.Display a list of book(s) published by a publisher p\n");
        printf("7.Display a list of all book\n");
        printf("8.Finish the program\n");
        printf("Choose the number which you want: ");
        scanf("%d", &menu);

        if (menu == 8) break;

        if (menu > 8 || menu < 1) {
            printf("Wrong input detected, the input must be 1 to 8.");
            break;
        }

        switch(menu) {
            case 1:
                addBook();
                continue;
            case 2:
                updateBook();
                continue;
            case 3:
                deleteBook();
                continue;
            case 4:
                printf("\nEnter book ID you wanna search: ");
                scanf("%d", &inputID);
                if (searchBook(inputID) == 101) {
                    printf("\nThere is no ID %d in space", inputID);
                    continue;
                }
                else {
                    printBook(searchBook(inputID));
                    continue;
                }
            
            case 5:
                printf("\nEnter author name: ");
                getc(stdin);
                gets(inputName);
                if (searchAuthor(inputName) == 0) {
                    printf("\nThere is no author name %s in space", inputName);
                    continue;
                }
                else continue;

            case 6:
                printf("\nEnter publisher name: ");
                getc(stdin);
                gets(inputName);
                if (searchPublisher(inputName) == 0) {
                    printf("\nThere is no publisher name %s in space", inputName);
                    continue;
                }
                else continue;
        
                
                
            case 7:
                for (i = 0; i < idx; i++)
                    printBook(i);
                continue;

        }
    }
}
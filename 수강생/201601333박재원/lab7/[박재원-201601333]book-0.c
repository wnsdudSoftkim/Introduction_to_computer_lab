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

int main() {
    struct Books book[100];
    int menu, i, j, check, check2, inputID;
    char inputName[20];
    int index = 0;


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
                if (index >= 100) {
                    printf("There is no empty space");
                    continue;
                }
                else {
                    printf("\nEnter book ID: ");
                    scanf("%d", &book[index].ID);
                    getchar();
                    if (book[index].ID < 0) {
                        printf("Book ID must be positive number");
                        continue;
                    }
                    for (i = 0; i < index; i++) {
                        if (i != index && book[i].ID == book[index].ID) check = 1;
                    }
                    if (check == 1){
                        printf("There is same book ID in the space");
                        continue;
                    }
                    else {
                        printf("Enter book name: ");
                        gets(book[index].bookName);

                        printf("Enter publication date(ex.210506): ");
                        scanf("%d", &book[index].pubDate);
                        getchar();

                        printf("Enter publisher name: ");
                        gets(book[index].pubName);

                        printf("Enter publisher phone number(ex.01012345678): ");
                        scanf("%d", &book[index].phone);
                        getchar();

                        printf("Enter author name: ");
                        gets(book[index].authorName);

                        printf("Enter author email: ");
                        gets(book[index].email);

                        index++;
                        printf("\nComplete");
                        continue;
                    }
                }
            case 2:
                printf("\nEnter book ID you wanna update: ");
                scanf("%d", &inputID); 
                check = 101;
                for (i = 0; i < index; i++) {
                    if (book[i].ID == inputID) check = i;
                }
                if (check == 101) {
                    printf("\nThere is no ID %d in space", inputID);
                    continue;
                }
                else {
                    printf("\nEnter new book ID: ");
                    scanf("%d", &book[check].ID);
                    getchar();

                    for (i = 0; i < index; i++) {
                        if (i != check && book[i].ID == book[check].ID) check2 = 1;
                    }
                    if (check2 == 1){
                        printf("There is same book ID in the space");
                        continue;
                    }
                    else {
                        printf("\nEnter new book name: ");
                        gets(book[check].bookName);

                        printf("\nEnter new publication date(ex.210506): ");
                        scanf("%d", &book[check].pubDate);
                        getchar();

                        printf("\nEnter new publisher name: ");
                        gets(book[check].pubName);

                        printf("\nEnter new publisher phone number(ex.01012345678): ");
                        scanf("%d", &book[check].phone);
                        getchar();

                        printf("\nEnter new author name: ");
                        gets(book[check].authorName);

                        printf("\nEnter new author email: ");
                        gets(book[check].email);
                        continue;
                    }
                }

            case 3:
                printf("\nEnter book ID you wanna delete: ");
                scanf("%d", &inputID);
                check = 101;
                for (i = 0; i < index; i++) {
                    if (book[i].ID == inputID) check = i;
                }
                if (check == 101) {
                    printf("\nThere is no ID %d in space", inputID);
                    continue;
                }
                else {
                    for (i = check; i < index; i++)
                        book[i] = book[i + 1];
                    index--;
                    continue;
                }
            
            case 4:
                printf("\nEnter book ID you wanna search: ");
                scanf("%d", &inputID);
                check = 101;
                for (i = 0; i < index; i++) {
                    if (book[i].ID == inputID) check = i;
                }
                if (check == 101) {
                    printf("\nThere is no ID %d in space", inputID);
                    continue;
                }
                else {
                    printf("\nbook name: %s", book[check].bookName);
                    printf("\npublication date: %d", book[check].pubDate);
                    printf("\npublisher name: %s", book[check].pubName);
                    printf("\npublisher phone number: %d", book[check].phone);
                    printf("\nauthor name: %s", book[check].authorName);
                    printf("\nauthor email: %s", book[check].email);
                    continue;
                }
            
            case 5:
                printf("\nEnter author name: ");
                getc(stdin);
                gets(inputName);
                j = 0;

                for (i = 0; i < index; i++) {
                    if (!strcmp(book[i].authorName,inputName)) {
                        printf("\nbook ID: %d", book[i].ID);
                        printf("\nbook name: %s", book[i].bookName);
                        printf("\npublication date: %d", book[i].pubDate);
                        printf("\npublisher name: %s", book[i].pubName);
                        printf("\npublisher phone number: %d", book[i].phone);
                        printf("\nauthor email: %s", book[i].email);
                        printf("\n----------------------------");
                        j++;
                    }
                }
                if (j == 0) {
                    printf("\nThere is no author name %s in space", inputName);
                    continue;
                }
                else continue;

            case 6:
                printf("\nEnter publisher name: ");
                getc(stdin);
                gets(inputName);
                j = 0;

                for (i = 0; i < index; i++) {
                    if (!strcmp(book[i].pubName,inputName)) {
                        printf("\nbook ID: %d", book[i].ID);
                        printf("\nbook name: %s", book[i].bookName);
                        printf("\npublication date: %d", book[i].pubDate);
                        printf("\npublisher phone number: %d", book[i].phone);
                        printf("\nauthor name: %s", book[i].authorName);
                        printf("\nauthor email: %s", book[i].email);
                        printf("\n----------------------------");
                        j++;
                    }
                }
                if (j == 0) {
                    printf("\nThere is no publisher name %s in space", inputName);
                    continue;
                }
                else continue;
        
                
                
            case 7:
                for (i = 0; i < index; i++)
                    printf("\n%s", book[i].bookName);
                continue;

        }
    }
}
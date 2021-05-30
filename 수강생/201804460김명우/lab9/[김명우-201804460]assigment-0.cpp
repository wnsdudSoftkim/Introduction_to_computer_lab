#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BOOK_INFO {
    int Book_ID;
    char Book_Name[1000];
    char Book_date_of_issue[1000];
    int Publisher_ID;
    int Author_ID;
} BI;
typedef struct PUBLISHER_INFO {
    int Publisher_ID;
    char Publisher_Name[1000];
    char Publisher_Number[1000];
} PI;
typedef struct AUTHOR_INFO {
    int Author_ID;
    char Author_Name[1000];
    char Author_address[1000];
} AI;

void ADD(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]);
void DELETE(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]); 
int SEARCH(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]); 
void UPDATE(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]); 
void DISPLAY(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]);
int count = 0;

void sort(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {
    BI temp;
    PI temp1;
    AI temp2;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (BOOK[j].Book_ID > BOOK[j + 1].Book_ID) {
                temp = BOOK[j];
                BOOK[j] = BOOK[j + 1];
                BOOK[j + 1] = temp;
                temp1 = PUBLISHER[j];
                PUBLISHER[j] = PUBLISHER[j + 1];
                PUBLISHER[j + 1] = temp1;
                temp2 = AUTHOR[j];
                AUTHOR[j] = AUTHOR[j + 1];
                AUTHOR[j + 1] = temp2;
            }
        }
    }
}
int main() {

    int num;
    BI BOOK[100];
    PI PUBLISHER[100];
    AI AUTHOR[100];
    while (1) {
        printf("1: ADD_BOOK information\n 2: DELETE_BOOK information\n3: SEARCH_BOOK information\n4: UPDATE_BOOK information\n5: DISPLAY_BOOK information\n6: Exit Program\n Enter the number : ");
        scanf("%d", &num);
        switch (num) {

        case 1:
            ADD(BOOK, PUBLISHER, AUTHOR); 
            break;
        case 2:
            DELETE(BOOK, PUBLISHER, AUTHOR); 
            break;
        case 3:
            SEARCH(BOOK, PUBLISHER, AUTHOR); 
            break;
        case 4:
            UPDATE(BOOK, PUBLISHER, AUTHOR); 
            break;
        case 5:
            DISPLAY(BOOK, PUBLISHER, AUTHOR);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter a number from 1 to 6.\n");
            break;
        }
    }
}
void ADD(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {

    int ID, Pub_ID, Aut_ID;
    int bool1 = 0;

    do {
        printf("Enter the Book ID: ");
        scanf_s("%d", &ID);
        for (int i = 0; i < count; i++) {

            if (BOOK[i].Book_ID == ID) { 
                printf("The ID already exists.\n");
                bool1 = 1;
            }
        }
    } while (boo1 == 1 || ID < 0);
    BOOK[count].Book_ID = ID; 

    printf("Enter the Publisher ID : ");
    scanf("%d", &Pub_ID);

    int PUBLISHER_INDEX = 0;
    for (int i = 0; i < count; i++) { 

        if (BOOK[i].Publisher_ID == Pub_ID) {
            bool1 = 1;
            PUBLISHER_INDEX = i;
            break;
        }
    }
    BOOK[count].Publisher_ID = Pub_ID;
    PUBLISHER[count].Publisher_ID = Pub_ID;
    if (bool1 == 1) { 
        printf("Publisher ID already exists.\n");
        strcpy(PUBLISHER[count].Publisher_Name, PUBLISHER[PUBLISHER_INDEX].Publisher_Name);
        strcpy(PUBLISHER[count].Publisher_Number, PUBLISHER[PUBLISHER_INDEX].Publisher_Number);
    }
    else { 
        printf("Enter the Publisher Name : "); 
        scanf("%s", PUBLISHER[count].Publisher_Name); 
        printf("Enter the Publisher Phone Number : ");
        scanf("%s", PUBLISHER[count].Publisher_Number);
    }


    printf("Enter the Author ID : "); 
    scanf("%d", &Aut_ID);
    int AUTHOR_INDEX = 0;
    for (int i = 0; i < count; i++) {
        if (BOOK[i].Author_ID == Aut_ID) { 
            bool1 = 1;
            AUTHOR_INDEX = i; 
            break;
        }
    }
    BOOK[count].Author_ID = Aut_ID;
    AUTHOR[count].Author_ID = Aut_ID;
    if (bool1 == 1) {
        printf("Author ID that already exists.\n"); 
        strcpy(AUTHOR[count].Author_Name, AUTHOR[AUTHOR_INDEX].Author_Name);
        strcpy(AUTHOR[count].Author_address, AUTHOR[AUTHOR_INDEX].Author_address);
    }
    else {
        printf("Enter the Author Name : ");
        scanf("%s", AUTHOR[count].Author_Name);
        printf("Enter the Author e-amil address : ");
        scanf("%s", AUTHOR[count].Author_address);
    }
    printf("Enter the Book Name : ");
    scanf("%s", BOOK[count].Book_Name);
    printf("Enter the date of publication of a book : ");
    scanf("%s", BOOK[count].Book_date_of_issue);
    sort(BOOK, PUBLISHER, AUTHOR);
    count++;
}
void UPDATE(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {
    int index;
    int ID, Pub_ID, Aut_ID;
    printf("Please enter the index of the book you want to modify : ");
    scanf("%d", &index);
    printf("Enter the Book ID : ");
    scanf("%d", &ID);
    int bool1 = 0;
    int bool2 = 0;
    for (int i = 0; i < count; i++) {
        if (BOOK[i].Book_ID == ID) { 
            bool1 = 1;
        }
    } 
    if (bool1 == 1 || ID < 0) { 
        while (1) {
            bool2 = 0;
            printf("The ID already exists or you entered a negative number.\n");
            printf("Enter the new Book ID : ");
            scanf("%d", &ID);
            for (int i = 0; i < count; i++) {
                if (BOOK[i].Book_ID == ID) { 
                    bool2 = 1; 
                }
            } 
            if (bool2 != 1 && ID >= 0)
                break;
        }
    }
    BOOK[index].Book_ID = ID;
    printf("Enter the Publisher ID : ");
    scanf("%d", &Pub_ID);
    int PUBLISHER_INDEX = 0;
    for (int i = 0; i < count; i++) {
        if (BOOK[i].Publisher_ID == Pub_ID) { 
            bool1 = 1;
            PUBLISHER_INDEX = i;
            break;
        }
    }
    BOOK[count].Publisher_ID = Pub_ID;
    PUBLISHER[count].Publisher_ID = Pub_ID;
    if (bool1 == 1) {
        printf("Publisher ID that already exists. It is entered automatically.\n"); 
        strcpy(PUBLISHER[index].Publisher_Name, PUBLISHER[PUBLISHER_INDEX].Publisher_Name);
        strcpy(PUBLISHER[index].Publisher_Number, PUBLISHER[PUBLISHER_INDEX].Publisher_Number);
    }
    else {
        printf("Enter the Publisher Name : "); 
        scanf("%s", PUBLISHER[index].Publisher_Name);
        printf("Enter the Publisher Phone Number : ");
        scanf("%s", PUBLISHER[index].Publisher_Number);
    }
    printf("Enter the Author ID : ");
    scanf("%d", &Aut_ID);
    int AUTHOR_INDEX = 0;
    for (int i = 0; i < count; i++) {
        if (BOOK[i].Author_ID == Aut_ID) { 
            bool1 = 1;
            AUTHOR_INDEX = i;
            break;
        }
    }
    BOOK[count].Author_ID = Aut_ID;
    AUTHOR[count].Author_ID = Aut_ID;
    if (bool1 == 1) {
        printf("Author ID that already exists. It is entered automatically.\n"); 
        strcpy(AUTHOR[index].Author_Name, AUTHOR[AUTHOR_INDEX].Author_Name);
        strcpy(AUTHOR[index].Author_address, AUTHOR[AUTHOR_INDEX].Author_address);
    }
    else {
        printf("Enter the Author Name : ");
        scanf("%s", AUTHOR[index].Author_Name);
    }
    printf("Enter the Book Name : ");
    scanf("%s", BOOK[index].Book_Name);
    printf("Enter the date of publication of a book : ");
    scanf("%s", BOOK[index].Book_date_of_issue);
}
void DELETE(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {
    int index;
    printf("Please enter the index to be deleted : ");
    scanf("%d", &index);
    if (index >= 0 && count > index) {
        for (int i = index + 1; i < count; i++) { 
            BOOK[i - 1] = BOOK[i];
            PUBLISHER[i - 1] = PUBLISHER[i];
            AUTHOR[i - 1] = AUTHOR[i];
        }
        count--;
    }
    else
        printf("Error -- not found");
}
int SEARCH(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {
    int ID;
    printf("Please enter the BOOK ID : ");
    scanf("%d", &ID);
    int start = 0;
    int end = count;
    int mid;
    while (1) { 
        mid = (start + end) / 2;
        if (start < end) {
            if (BOOK[mid].Book_ID < ID) {
                start = mid + 1;
            }
            else if (BOOK[mid].Book_ID > ID) {
                end = mid - 1;
            }
            else { 
                printf("Existing Book ID | INDEX == %d\n", mid);
                break;
            }
        }
        else {
            if (BOOK[mid].Book_ID != ID) {
                printf("Error -- ID not found");
                break;
            }
            else { 
                printf("Existing Book ID | INDEX == %d\n", mid);
            }
            break;
        }
    }
    return 0;
}
void DISPLAY(struct BOOK_INFO BOOK[], struct PUBLISHER_INFO PUBLISHER[], struct AUTHOR_INFO AUTHOR[]) {
    int num;
    char author[50], publisher[50]; 
    int flag = 0;
    printf("1. Author\n2.Publisher\n3.All\nEnter the number : ");
    scanf("%d", &num);
    if (num == 1) {
        printf("Enter the author name : ");
        scanf("%s", author);
        printf("Index\\tBook ID\\tBook Name\\tBook's date of issue\\tPublisher Name\\tPublisher Number\\tAuthor Name\\tAuthor Email Address\n");
        for (int i = 0; i <= count; i++) {
            if (strcmp(author, AUTHOR[i].Author_Name) == 0) { 
                printf("%d\\t%d\\t%s\\t%s\\t%s\\t%s\\t%s\\t%s\n", i, BOOK[i].Book_ID, BOOK[i].Book_Name,
                    BOOK[i].Book_date_of_issue,
                    PUBLISHER[i].Publisher_Name, PUBLISHER[i].Publisher_Number, AUTHOR[i].Author_Name,
                    AUTHOR[i].Author_address);
                flag++;
            }
        }
        if (flag == 0)
            printf("Error -- Author not found\n");
    }
    else if (num == 2) {
        printf("Enter the Publisher name : ");
        scanf("%s", publisher);
        printf("Index\\tBook ID\\tBook Name\\tBook's date of issue\\tPublisher Name\\tPublisher Number\\tAuthor Name\\tAuthor Email Address\n");
        for (int i = 0; i < count; i++) {
            if (strcmp(publisher, PUBLISHER[i].Publisher_Name) == 0) { 
                printf("%d\\t%d\\t%s\\t%s\\t%s\\t%s\\t%s\\t%s\n", i, BOOK[i].Book_ID, BOOK[i].Book_Name,
                    BOOK[i].Book_date_of_issue,
                    PUBLISHER[i].Publisher_Name, PUBLISHER[i].Publisher_Number, AUTHOR[i].Author_Name,
                    AUTHOR[i].Author_address);
                flag++;
            }
        }
        if (flag == 0)
            printf("Error -- Publisher not found\n");
    }
    else if (num == 3) {
        printf("Index\\tBook ID\\tBook Name\\tBook's date of issue\\tPublisher Name\\tPublisher Number\\tAuthor Name\\tAuthor Email Address\n");
        for (int i = 0; i < count; ++i) { 
            printf("%d\\t%d\\t%s\\t%s\\t%s\\t%s\\t%s\\t%s\n", i, BOOK[i].Book_ID, BOOK[i].Book_Name,
                BOOK[i].Book_date_of_issue,
                PUBLISHER[i].Publisher_Name, PUBLISHER[i].Publisher_Number, AUTHOR[i].Author_Name,
                AUTHOR[i].Author_address);
        }
    }
    else
        printf("Enter a number from 1 to 3.\n");
}
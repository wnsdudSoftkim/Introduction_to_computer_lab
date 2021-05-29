#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct book {
    int id;
    char book_name[100];
    char pub_date[20];
    char pub_name[15];
    char phone_num[15];
    char author_name[10];
    char email[30];
};

int add_book(struct book bookArr[], int index);

delete_book(struct book bookArr[], int index);

update_book(struct book bookArr[], int index);

search_book(struct book bookArr[], int index);

display_books_by_pub(struct book bookArr[], int index);

display_books_by_author(struct book bookArr[], int index);

display_all_books(struct book bookArr[], int index);

int main(void) {

    struct book bookArr[100];

    for (int i = 0; i < 100; i++) {
        bookArr[i].id = 0;
    }

    int choice;
    int index = 0;
    char invalid_opt[20];

    while (1)
    {
        printf("0 : exit program.\n1: add book information.\n2: update book information.\n3: delete book information.\n4: search book information. \n5: display books by a publisher.\n6: display books by an author.\n7: display all books in the list.\n Choose one of the menu ");
        scanf_s("%d", &choice);
        if (choice == -1) {
            printf("\nInvalid options entered. Terminate program.\n.");
            return;
        }
     
        switch (choice) {
        case 0:
            printf("exit program.");
            return;
        case 1:
            index = add_book(bookArr, index);
            break;
        case 2:
            update_book(bookArr, index);
            break;
        case 3:
            delete_book(bookArr, index);
            break;
        case 4:
            search_book(bookArr, index);
            break;
        case 5:
            display_books_by_pub(bookArr, index);
            break;
        case 6:
            display_books_by_author(bookArr, index);
            break;
        case 7:
            display_all_books(bookArr, index);
            break;
        default:
            printf("Invalid option. Exit Program.");
            return;
        }
        choice = -1; // assign -1 to check if the user enters valid integer after switch loop.
                     // if user enters invalid 'string' value, we will check if choice is still -1,
                     // and terminate the program.

    }

}

int add_book(struct book bookArr[], int index) {
    int id;
    char temp;
    char book_name[100];
    char pub_date[20];
    char pub_name[15];
    char phone_num[15];
    char author_name[10];
    char email[30];
    printf("enter id for managing your book ");
    scanf_s("%d", &id);
    while (id <= 0) {
        printf("The ID must be larger than 0. Please enter the id again.\n");
        scanf_s("%d", &id);
    }
    for (int i = 0; i < index; i++) {
        if (bookArr[i].id == id) {
            printf("The id should be unique value. \n\n");
            return index;
        }
    }
    printf("enter name of the book ");
    scanf_s("%s", book_name, 100);
    temp = getchar(); // temp for ignoring the complaint of compiler
    printf("enter the published date. ");
    scanf_s("%s", pub_date, 20);
    temp = getchar();
    printf("enter the publisher name. ");
    scanf_s("%s", pub_name, 15);
    temp = getchar();
    printf("enter the phone number. ");
    scanf_s("%s", phone_num, 15);
    temp = getchar();
    printf("enter the author name. ");
    scanf_s("%s", author_name, 10);
    temp = getchar();
    printf("enter your email. ");
    scanf_s("%s", email, 30);

    bookArr[index].id = id;
    for (int i = 0; i < strlen(book_name); i++) {
        bookArr[index].book_name[i] = book_name[i];
    }
    bookArr[index].book_name[strlen(book_name)] = '\0';
    for (int i = 0; i < strlen(pub_date); i++) {
        bookArr[index].pub_date[i] = pub_date[i];
    }
    bookArr[index].pub_date[strlen(pub_date)] = '\0';
    for (int i = 0; i < strlen(pub_name); i++) {
        bookArr[index].pub_name[i] = pub_name[i];
    }
    bookArr[index].pub_name[strlen(pub_name)] = '\0';
    for (int i = 0; i < strlen(phone_num); i++) {
        bookArr[index].phone_num[i] = phone_num[i];
    }
    bookArr[index].author_name[strlen(author_name)] = '\0';
    for (int i = 0; i < strlen(author_name); i++) {
        bookArr[index].author_name[i] = author_name[i];
    }
    bookArr[index].phone_num[strlen(phone_num)] = '\0';
    for (int i = 0; i < strlen(email); i++) {
        bookArr[index].email[i] = email[i];
    }
    bookArr[index].email[strlen(email)] = '\0';
    index++;
    return index;
}

delete_book(struct book bookArr[], int index) {
    int id;
    printf("enter the book's id to delete. ");
    scanf_s("%d", &id);
    for (int i = 0; i < index; i++) {
        if (bookArr[i].id == id) {
            bookArr[i].id = -1;
            bookArr[i].book_name[0] = '\0';
            bookArr[i].pub_date[0] = '\0';
            bookArr[i].pub_name[0] = '\0';
            bookArr[i].phone_num[0] = '\0';
            bookArr[i].author_name[0] = '\0';
            bookArr[i].email[0] = '\0';
        }
    }
}

update_book(struct book bookArr[], int index) {
    int id;
    char temp;
    char book_name[100];
    char pub_date[20];
    char pub_name[15];
    char phone_num[15];
    char author_name[10];
    char email[30];
    int is_found = 0;
    int update_idx = 0;
    printf("enter the book's id to update. ");
    scanf_s("%d", &id);
    for (int i = 0; i < index; i++) {
        if (bookArr[i].id == id) {
            is_found = 1;
            update_idx = i;
            printf("enter name of the book ");
            scanf_s("%s", book_name, 100);
            temp = getchar(); // temp for ignoring the complaint of compiler
            printf("enter the published date. ");
            scanf_s("%s", pub_date, 20);
            temp = getchar();
            printf("enter the publisher name. ");
            scanf_s("%s", pub_name, 15);
            temp = getchar();
            printf("enter the phone number. ");
            scanf_s("%s", phone_num, 15);
            temp = getchar();
            printf("enter the author name. ");
            scanf_s("%s", author_name, 10);
            temp = getchar();
            printf("enter your email. ");
            scanf_s("%s", email, 30);
        }
    }
    if (!is_found) {
        printf("ID not found. please enter valid id to update.\n\n");
        return;
    }

    for (int i = 0; i < strlen(book_name); i++) {
        bookArr[update_idx].book_name[i] = book_name[i];
    }
    bookArr[update_idx].book_name[strlen(book_name)] = '\0';
    for (int i = 0; i < strlen(pub_date); i++) {
        bookArr[update_idx].pub_date[i] = pub_date[i];
    }
    bookArr[update_idx].pub_date[strlen(pub_date)] = '\0';
    for (int i = 0; i < strlen(pub_name); i++) {
        bookArr[update_idx].pub_name[i] = pub_name[i];
    }
    bookArr[update_idx].pub_name[strlen(pub_name)] = '\0';
    for (int i = 0; i < strlen(phone_num); i++) {
        bookArr[update_idx].phone_num[i] = phone_num[i];
    }
    bookArr[update_idx].phone_num[strlen(phone_num)] = '\0';
    for (int i = 0; i < strlen(author_name); i++) {
        bookArr[update_idx].author_name[i] = author_name[i];
    }
    bookArr[update_idx].author_name[strlen(author_name)] = '\0';
    for (int i = 0; i < strlen(email); i++) {
        bookArr[update_idx].email[i] = email[i];
    }
    bookArr[update_idx].email[strlen(email)] = '\0';
}

search_book(struct book bookArr[], int index) {
    int id;
    printf("enter book's id to search. ");
    scanf_s("%d", &id);
    for (int i = 0; i < index; i++) {
        if (bookArr[i].id == id) {
            printf("\n----- Searched Result ------\n\n");
            printf("id: %d\n", bookArr[i].id);
            printf("book name: %s\n", bookArr[i].book_name);
            printf("published date: %s\n", bookArr[i].pub_date);
            printf("publisher name: %s\n", bookArr[i].pub_name);
            printf("phone number: %s\n", bookArr[i].phone_num);
            printf("author name: %s\n", bookArr[i].author_name);
            printf("email: %s\n\n", bookArr[i].email);
        }
    }
}

void to_lower_char_array(char ch_array[]) {
    for (int i = 0; i < strlen(ch_array); i++) {
        ch_array[i] = tolower(ch_array[i]);
    }
}

display_books_by_pub(struct book bookArr[], int index) {
    char pub_name[15];
    printf("enter publisher name to query. ");
    scanf_s("%s", pub_name, 15);               
    to_lower_char_array(pub_name);

    char copied_pub_name[15]; // copy char array for querying case-insensitively.
    for (int i = 0; i < index; i++) {
        strncpy_s(copied_pub_name, 15, bookArr[i].pub_name, 15);
        to_lower_char_array(copied_pub_name);
        if (strstr(copied_pub_name, pub_name) != NULL && bookArr[i].id != -1) {
            printf("id: %d\n", bookArr[i].id);
            printf("book name: %s\n", bookArr[i].book_name);
            printf("published date: %s\n", bookArr[i].pub_date);
            printf("publisher name: %s\n", bookArr[i].pub_name);
            printf("phone number: %s\n", bookArr[i].phone_num);
            printf("author name: %s\n", bookArr[i].author_name);
            printf("email : %s\n\n", bookArr[i].email);
        }
        copied_pub_name[0] = '\0';
    }
}

display_books_by_author(struct book bookArr[], int index) {
    char author_name[10];
    printf("enter author name to query. ");
    scanf_s("%s", author_name, 10);
    to_lower_char_array(author_name);

    char copied_author_name[10]; // copy char array for querying case-insensitively.
    for (int i = 0; i < index; i++) {
        strncpy_s(copied_author_name, 10, bookArr[i].author_name, 10);
        to_lower_char_array(copied_author_name);
        if (strstr(copied_author_name, author_name) != NULL && bookArr[i].id != -1) {
            printf("id: %d\n", bookArr[i].id);
            printf("book name: %s\n", bookArr[i].book_name);
            printf("published date: %s\n", bookArr[i].pub_date);
            printf("publisher name: %s\n", bookArr[i].pub_name);
            printf("phone number: %s\n", bookArr[i].phone_num);
            printf("author name: %s\n", bookArr[i].author_name);
            printf("email : %s\n\n", bookArr[i].email);
        }
        copied_author_name[0] = '\0';
    }
}

display_all_books(struct book bookArr[], int index) {
    printf("------ List of all books below ------\n\n");
    for (int i = 0; i < index; i++) {
        if (bookArr[i].id != -1) {
            printf("id: %d\n", bookArr[i].id);
            printf("book name: %s\n", bookArr[i].book_name);
            printf("published date: %s\n", bookArr[i].pub_date);
            printf("publisher name: %s\n", bookArr[i].pub_name);
            printf("phone number: %s\n", bookArr[i].phone_num);
            printf("author name: %s\n", bookArr[i].author_name);
            printf("email : %s\n\n", bookArr[i].email);
        }
    }
}
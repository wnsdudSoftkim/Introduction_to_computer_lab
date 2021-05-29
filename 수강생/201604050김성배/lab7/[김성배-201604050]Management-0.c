#include <stdio.h>
#include <string.h>

struct library {
    int id;
    char book_name[20];
    char date[20];
    char publisher_name[20];
    char phone_number[20];
    char author_name[20];
    char email[20];
};

int main()
{

    struct library lib[20];
    int flag;
    int menu = 0, idx = 0;
    int i, j, tmp, c;
    int cnt = 0;
    char search[20];
    int left = 0;
    int right = cnt - 1;
    int middle;



    while (1)
    {
    printf("\n-----LIBRARY MANAGEMENT-----\n\n");
    printf("1.Add book information\n");
    printf("2.Update book information\n");
    printf("3.Delete book information\n");
    printf("4.Search book information\n");
    printf("5.Display a list of book(s) published by an author a\n");
    printf("6.Display a list of book(s) published by a publisher p\n");
    printf("7.Display a list of all book\n");
    printf("8.exit\n\n");


        printf("> ");
        scanf_s("%d", &menu);

        switch (menu) {
        case 1:
        
            printf("\ninput book id : ");
            scanf_s("%d", &lib[cnt].id);

            if (lib[cnt].id < 0) {
                printf("negative number is nope!\n");
                break;
            }

            for (i = 0; i < cnt; i++)
            {
                if (lib[i].id == lib[cnt].id)
                {
                    printf("no unique book id!\n");
                    break;
                }
            }

            printf("input book name : ");
            scanf_s("%s", lib[cnt].book_name, sizeof(lib[cnt].book_name));
            printf("input publication date : ");
            scanf_s("%s", lib[cnt].date, sizeof(lib[cnt].date));
            printf("input publisher name : ");
            scanf_s("%s", lib[cnt].publisher_name, sizeof(lib[cnt].publisher_name));
            printf("input publisher phone number : ");
            scanf_s("%s", lib[cnt].phone_number, sizeof(lib[cnt].phone_number));
            printf("input author name : ");
            scanf_s("%s", lib[cnt].author_name, sizeof(lib[cnt].author_name));
            printf("input author email address : ");
            scanf_s("%s", lib[cnt].email, sizeof(lib[cnt].email));


            for (i = 0; i < cnt; i++) {
                j = i;
                while (lib[j].id > lib[j + 1].id) {
                    tmp = lib[j + 1].id;
                    lib[j + 1].id = lib[j].id;
                    lib[j].id = tmp;
                    j--;
                    if (j < 0)
                        break;
                }
            }

            cnt++;

            printf("done.\n\n");
            break;

        case 2:

            for (i = 0; i < cnt; i++)
            {
                printf("\nindex : %d | book id : %d | book name : %s\n", i, lib[i].id, lib[i].book_name);
                printf("publication date : %s | publisher name : %s | publisher phone number : %s\n", lib[i].date, lib[i].publisher_name, lib[i].phone_number);
                printf("author name : %s | author email address : %s\n",lib[i].author_name,lib[i].email);
            }

       
            printf("\ninput index for update: ");
            scanf_s("%d", &idx);

            if (idx >= cnt || idx < 0)
            {
                printf("no index! \n");
                break;
            }

            printf("\nWhat do you want to update?\n");
            printf("1. book id\n");
            printf("2. book name\n");
            printf("3. publication date\n");
            printf("4. publisher name\n");
            printf("5. publisher phone number\n");
            printf("6. author name\n");
            printf("7. author email address\n");
            printf("> ");

            scanf_s("%d", &menu);

            switch (menu)
            {
            case 1:
            
               
                printf("input id : ");
                scanf_s("%d", &lib[idx].id);

                if (lib[idx].id < 0) {
                    printf("This book ID is negative number!\n");
                    break;
                }

                for (i = 0; i < cnt; i++)
                {
                    if (lib[i].id == lib[idx].id)
                    {
                        if (i != idx) {
                            printf("This book ID already exists !\n");
                            break;
                        }
                    }
                }

                for (i = 0; i < cnt; i++) {
                    j = i;
                    while (lib[j].id > lib[j + 1].id) {
                        tmp = lib[j + 1].id;
                        lib[j + 1].id = lib[j].id;
                        lib[j].id = tmp;
                        j--;
                        if (j < 0)
                            break;
                    }
                }


                break;

            case 2:
                printf("input book name : ");
                scanf_s("%s", lib[idx].book_name, sizeof(lib[idx].book_name));
                break;

            case 3:
                printf("input publication date : ");
                scanf_s("%s", lib[idx].date, sizeof(lib[idx].date) );
                break;

            case 4:
                printf("input publisher name : ");
                scanf_s("%s", lib[idx].publisher_name, sizeof(lib[idx].publisher_name) );
                break;

            case 5:
                printf("input publisher phone number : ");
                scanf_s("%s", lib[idx].phone_number, sizeof(lib[idx].phone_number) );
                break;

            case 6:
                printf("input author name : ");
                scanf_s("%s", lib[idx].author_name, sizeof(lib[idx].author_name) );
                break;

            case 7:
                printf("input author email address : ");
                scanf_s("%s", lib[idx].email, sizeof(lib[idx].email) );
                break;
            }
            break;

        case 3:
            for (i = 0; i < cnt; i++)
            {
                printf("index : %d | book id : %d | book name : %s\n", i, lib[i].id, lib[i].book_name);
            }
        
            printf("input index : ");
            scanf_s("%d", &idx);

            if (idx < 0 || cnt <= idx)
            {
                printf("no index\n");
                break;
            }

            if (idx == cnt - 1)
            {
                cnt--;
                break;
            }

            else {
                for (i = idx; i <= cnt - 2; i++)
                {
                    lib[i].id = lib[i + 1].id;
                    strncpy_s(lib[i].book_name, sizeof(lib[i].book_name), lib[i + 1].book_name, strlen(lib[i + 1].book_name));
                    strncpy_s(lib[i].date, sizeof(lib[i].date),lib[i + 1].date, strlen(lib[i + 1].date));
                    strncpy_s(lib[i].publisher_name, sizeof(lib[i].publisher_name), lib[i + 1].publisher_name, strlen(lib[i + 1].publisher_name));
                    strncpy_s(lib[i].phone_number, sizeof(lib[i].phone_number), lib[i + 1].phone_number, strlen(lib[i + 1].phone_number));
                    strncpy_s(lib[i].author_name, sizeof(lib[i].author_name), lib[i + 1].author_name, strlen(lib[i + 1].author_name));
                    strncpy_s(lib[i].email, sizeof(lib[i].email), lib[i + 1].email, strlen(lib[i + 1].email));
                }
                cnt--;
                break;
            }

        case 4:
            printf("1.search by book id\n");
            printf("2.search by book name\n");
            printf("3.search by publisher name\n");
            printf("4.search by publisher phone number\n");
            printf("5.search by author name\n");
            printf("6.search by author email address\n");
            printf("> ");
            scanf_s("%d", &menu);

            switch (menu)
            {
            case 1:
                printf("input book id: ");
                scanf_s("%d", &c);

                while (left <= right)
                {
                    middle = (left + right) / 2;
                    if (c < middle) {
                        right = middle - 1;
                        continue;
                    }
                    else if (c > middle) {
                        left = middle + 1;
                        continue;
                    }
                    else if (c == middle) {
                        i = middle;
                    }
                    i = -1;
                }


                for (i = 0; i < cnt; i++)
                {
                    if (i != -1)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;

            case 2:
                printf("input book name: ");
                scanf_s("%s", search, sizeof(search));

                for (i = 0; i < cnt; i++)
                {
                    if (strcmp(search, lib[i].book_name) == 0)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;

            case 3:
                printf("input publisher name: ");
                scanf_s("%s", search, sizeof(search));

                for (i = 0; i < cnt; i++)
                {
                    if (strcmp(search, lib[i].publisher_name) == 0)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;

            case 4:
                printf("input publisher phone number: ");
                scanf_s("%s", search, sizeof(search));

                for (i = 0; i < cnt; i++)
                {
                    if (strcmp(search, lib[i].phone_number) == 0)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;

            case 5:
                printf("input author name: ");
                scanf_s("%s", search, sizeof(search));

                for (i = 0; i < cnt; i++)
                {
                    if (strcmp(search, lib[i].author_name) == 0)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;

            case 6:
                printf("input author email address: ");
                scanf_s("%s", search, sizeof(search));

                for (i = 0; i < cnt; i++)
                {
                    if (strcmp(search, lib[i].email) == 0)
                    {
                        printf("book id : %d\n", lib[i].id);
                        printf("book name : %s\n", lib[i].book_name);
                        printf("publication date : %s\n", lib[i].date);
                        printf("publisher name : %s\n", lib[i].publisher_name);
                        printf("publisher phone number : %s\n", lib[i].phone_number);
                        printf("author name : %s\n", lib[i].author_name);
                        printf("author email address : %s\n\n", lib[i].email);
                    }
                }
                break;
            }
            break;

        case 5:
            printf("input author name: ");
            scanf_s("%s", search, sizeof(search));

            for (i = 0; i < cnt; i++)
            {
                if (strcmp(search, lib[i].author_name) == 0)
                {
                    printf("book id : %d\n", lib[i].id);
                    printf("book name : %s\n", lib[i].book_name);
                    printf("publication date : %s\n", lib[i].date);
                    printf("publisher name : %s\n", lib[i].publisher_name);
                    printf("publisher phone number : %s\n", lib[i].phone_number);
                    printf("author name : %s\n", lib[i].author_name);
                    printf("author email address : %s\n\n", lib[i].email);
                }
            }
            break;

        case 6:

            printf("input publisher name: ");
            scanf_s("%s", search, sizeof(search));

            for (i = 0; i < cnt; i++)
            {
                if (strcmp(search, lib[i].publisher_name) == 0)
                {
                    printf("book id : %d\n", lib[i].id);
                    printf("book name : %s\n", lib[i].book_name);
                    printf("publication date : %s\n", lib[i].date);
                    printf("publisher name : %s\n", lib[i].publisher_name);
                    printf("publisher phone number : %s\n", lib[i].phone_number);
                    printf("author name : %s\n", lib[i].author_name);
                    printf("author email address : %s\n\n", lib[i].email);
                }
            }
            break;
            
        case 7:
            for (i = 0; i < cnt; i++)
            {
                printf("book id : %d\n", lib[i].id);
                printf("book name : %s\n", lib[i].book_name);
                printf("publication date : %s\n", lib[i].date);
                printf("publisher name : %s\n", lib[i].publisher_name);
                printf("publisher phone number : %s\n", lib[i].phone_number);
                printf("author name : %s\n", lib[i].author_name);
                printf("author email address : %s\n\n", lib[i].email);
            }
            break;

        case 8:

            return 0;
        }

    }
}
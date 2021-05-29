#include <stdio.h>
#include <string.h>
#define N 50
#define T 100

struct Library_Management
{
    int B_ID;
    char B_Name[N];
    char Pub_Date[N];
    char Pub_Name[N];
    char Pub_Number[N];
    char Aut_Name[N];
    char Aut_Email[N];
};

int main(void)
{
    struct Library_Management BI[T];

    int opt, idx=0, flag = 0, flag2 = 0, ID, update_ID, temp, stack;

    while (1)
    {
        printf("1. <Add Book Info>\n2. <Update Book Info>\n3. <Delete Book Info>\n4. <Search Book Info>\n");
        printf("5. <Display a list of book(s) published by an author you input>\n");
        printf("6. <Display a list of book(s) published by a publisher you input>\n");
        printf("7. <Display a list of all books>\n");
        printf("0. <EXIT PROGRAM>\n\n");
        printf("Enter the option : ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 0:
            printf("\n\nGood Bye!\n\n");
            return 0;
        case 1:
            flag = 0;
            printf("\n================ADD BOOK INFO================\n\n");
            printf("Enter Book ID (ex. 11111111): ");
            scanf("%d", &BI[idx].B_ID);
            if (idx>0)
                for (int i = 0; i < idx; i++)
                    if (BI[i].B_ID == BI[idx].B_ID)
                        flag = 1;
            
            if (BI[idx].B_ID < 0)
            {
                printf("\nEntered ID should not be a negative number\n\n");
                break;
            }

            if (flag == 0)
            {
                getchar();
                printf("Enter Book Name: ");
                gets(BI[idx].B_Name);
                printf("Enter Publication Date (ex. 2021/05/04): ");
                gets(BI[idx].Pub_Date);
                printf("Enter Publisher Name: ");
                gets(BI[idx].Pub_Name);
                printf("Enter Publisher Phone Number (ex. 010-1234-1234): ");
                gets(BI[idx].Pub_Number);
                printf("Enter Author's Name: ");
                gets(BI[idx].Aut_Name);
                printf("Enter Author's Email Address: ");
                gets(BI[idx].Aut_Email);
                idx++;
                printf("\n\nRecord Saved\n\n");
            }
            else
                printf("\nDUPLICATE ID WAS ENTERED.\nTRY AGAIN!\n\n");
            break;

        case 2:
            flag = 0;
            flag2 = 0;
            printf("\n================UPDATE BOOK INFO================\n\n");
            printf("Enter the Book ID you want to update: ");
            scanf("%d", &ID);
            for (int i = 0; i < idx; i++)
                if (ID == BI[i].B_ID)
                {
                    flag2 = 1;
                    temp = i;
                }

            if (flag2 == 1)
            {
                printf("Enter the new Book ID (ex. 11111111): ");
                scanf("%d", &update_ID);

                for (int i = 0; i < idx; i++)
                    if (BI[i].B_ID == update_ID)
                        flag = 1;

                if (flag == 0)
                {
                    getchar();
                    BI[temp].B_ID = update_ID;
                    printf("Enter the new Book Name: ");
                    gets(BI[temp].B_Name);
                    printf("Enter the new Publication Date (ex. 2021/05/04): ");
                    gets(BI[temp].Pub_Date);
                    printf("Enter the new Publisher Name: ");
                    gets(BI[temp].Pub_Name);
                    printf("Enter the new Publisher Phone Number (ex. 010-1234-1234): ");
                    gets(BI[temp].Pub_Number);
                    printf("Enter the new Author's Name: ");
                    gets(BI[temp].Aut_Name);
                    printf("Enter the new Author's Email Address: ");
                    gets(BI[temp].Aut_Email);
                    printf("\n\nUPDATING COMPLETE!\n\n");
                }
                else
                    printf("\nDuplicated ID is already exist.\nTRY AGAIN!\n\n");
            }
            else
                printf("\nThere is no ID you entered.\nTRY AGAIN!\n\n");
            break;

        case 3:
            temp = 0;
            printf("\n================DELETE BOOK INFO================\n\n");
            printf("Enter the Book ID you want to delete: ");
            scanf("%d", &ID);

            for (int i = 0; i < idx; i++)
            {
                if (BI[i].B_ID == ID) {
                    temp = i;
                }
            }
            
            if (temp != 0)
            {
                for (int j = temp; j < idx-1; j++)
                {
                    BI[j] = BI[j+1];
                }
                idx--;
                printf("\n\nDELETING COMPLETE!\n\n");
            }
            else
                printf("\n\nThere is no %d Book ID in list.\n\n", ID);
            
            break;
        case 4:
            flag = 0;
            printf("\n================SEARCH BOOK INFO================\n\n");
            printf("Enter the Book ID you want to search: ");
            scanf("%d", &ID);

            for (int i = 0; i < idx; i++)
                if (BI[i].B_ID == ID)
                {
                    flag = 1;
                    temp = i;
                }

            if (flag == 1)
            {
                printf("Book ID: %d\n", BI[temp].B_ID);
                printf("Book Name: %s\n", BI[temp].B_Name);
                printf("Publication Date: %s\n", BI[temp].Pub_Date);
                printf("Publisher Name: %s\n", BI[temp].Pub_Name);
                printf("Publisher Phone Number: %s\n", BI[temp].Pub_Number);
                printf("Author Name: %s\n", BI[temp].Aut_Name);
                printf("Author Email Address: %s\n", BI[temp].Aut_Email);
                printf("\n\n");
            }
            else
                printf("\n\n%d is not exist in list!\n\n", ID);
            break;

        case 5:
        {
            char name[N];
            printf("\n================DISPLAY AUTHOR'S BOOK LIST================\n\n");
            getchar();
            printf("Enter the author's name: ");
            gets(name);

            printf("%s's book list.\n", name);
            temp = 1;
            for (int i = 0; i < idx; i++)
            {
                temp = strcmp(BI[i].Aut_Name, name);
                if (temp == 0)
                {
                    printf("Book ID: %d\n", BI[i].B_ID);
                    printf("Book Name: %s\n", BI[i].B_Name);
                    printf("Publication Date: %s\n", BI[i].Pub_Date);
                    printf("Publisher Name: %s\n", BI[i].Pub_Name);
                    printf("Publisher Phone Number: %s\n", BI[i].Pub_Number);
                    printf("Author Name: %s\n", BI[i].Aut_Name);
                    printf("Author Email Address: %s\n", BI[i].Aut_Email);
                    printf("\n\n");
                }
            }
        }
            break;

        case 6:
        {
            char name[N];
            printf("\n================DISPLAY PUBLISHER'S BOOK LIST================\n\n");
            getchar();
            printf("Enter the publisher's name: ");
            gets(name);

            temp = 1;
            for (int i = 0; i < idx; i++)
            {
                temp = strcmp(BI[i].Pub_Name, name);
                if (temp == 0)
                {
                    printf("Book ID: %d\n", BI[i].B_ID);
                    printf("Book Name: %s\n", BI[i].B_Name);
                    printf("Publication Date: %s\n", BI[i].Pub_Date);
                    printf("Publisher Name: %s\n", BI[i].Pub_Name);
                    printf("Publisher Phone Number: %s\n", BI[i].Pub_Number);
                    printf("Author Name: %s\n", BI[i].Aut_Name);
                    printf("Author Email Address: %s\n", BI[i].Aut_Email);
                    printf("\n\n");
                }
            }
        }
            break;

        case 7:
            printf("\n================DISPLAY BOOK LIST================\n\n");
            for (int i = 0; i < idx; i++)
            {
                printf("=====BOOK INFO %d=====\n", i+1);
                printf("Book ID: %d\n", BI[i].B_ID);
                printf("Book Name: %s\n", BI[i].B_Name);
                printf("Publication Date: %s\n", BI[i].Pub_Date);
                printf("Publisher Name: %s\n", BI[i].Pub_Name);
                printf("Publisher Phone Number: %s\n", BI[i].Pub_Number);
                printf("Author Name: %s\n", BI[i].Aut_Name);
                printf("Author Email Address: %s\n", BI[i].Aut_Email);
                printf("\n\n");
            }
            break;

        default:
            printf("\n\nWrong Option!\n\n");
            break;
        }
    }
}
#include <stdio.h>
#include <string.h>
#define MAX 99999
#define N 50

int idx = 0;

struct BookInfo
{
    int ID;
    char bookname[N];
    char date[N];
    char pubname[N];
    char pubnumber[N];
    char autname[N];
    char autemail[N*2];
} BI[N*2];

int indexsearching(int ID)
{
    int index = MAX;
    for (int i = 0; i < idx; i++)
    {
        if (ID == BI[i].ID)
        {
            index = i;
            break;
        }
    }
    return index;
}

void indexprinting(int i)
{
    printf("\n");
    printf("Book ID: %d\n", BI[i].ID);
    printf("Book Name: %s\n", BI[i].bookname);
    printf("Publication Date: %s\n", BI[i].date);
    printf("Publisher Name: %s\n", BI[i].pubname);
    printf("Publisher Phone Number: %s\n", BI[i].pubnumber);
    printf("Author Name: %s\n", BI[i].autname);
    printf("Author Email Address: %s\n", BI[i].autemail);
    printf("\n\n");
}

int Dup_Negative_Check(int ID)
{
    int result = 0;     // 0: Not problem, 1: Problem
    if (ID > 0)
    {
        for (int i = 0; i < idx; i++) 
        {
            if (ID == BI[i].ID)
                result = 1;
        }
    }
    else
        result = 1;
    return result;
}

void Adding(int ID)
{
    BI[idx].ID = ID;
    getchar();
    printf("Enter Book Name: ");
    gets(BI[idx].bookname);
    printf("Enter Publication Date (ex. 2021/05/04): ");
    gets(BI[idx].date);
    printf("Enter Publisher Name: ");
    gets(BI[idx].pubname);
    printf("Enter Publisher Phone Number (ex. 010-1234-1234): ");
    gets(BI[idx].pubnumber);
    printf("Enter Author's Name: ");
    gets(BI[idx].autname);
    printf("Enter Author's Email Address: ");
    gets(BI[idx].autemail);
    idx++;
}

void Display()
{
    for (int i = 0; i < idx; i++)
    {
        printf("------------------Book %d------------------\n", i+1);
        printf("Book ID: %d\n", BI[i].ID);
        printf("Book Name: %s\n", BI[i].bookname);
        printf("Publication Date: %s\n", BI[i].date);
        printf("Publisher Name: %s\n", BI[i].pubname);
        printf("Publisher Phone Number: %s\n", BI[i].pubnumber);
        printf("Author Name: %s\n", BI[i].autname);
        printf("Author Email Address: %s\n", BI[i].autemail);
        printf("\n\n");
    }
}

void Update(int ID, int newID)
{
    int temp;
    temp = indexsearching(ID);

    BI[temp].ID = newID;
    getchar();
    printf("Enter Book Name: ");
    gets(BI[temp].bookname);
    printf("Enter Publication Date (ex. 2021/05/04): ");
    gets(BI[temp].date);
    printf("Enter Publisher Name: ");
    gets(BI[temp].pubname);
    printf("Enter Publisher Phone Number (ex. 010-1234-1234): ");
    gets(BI[temp].pubnumber);
    printf("Enter Author's Name: ");
    gets(BI[temp].autname);
    printf("Enter Author's Email Address: ");
    gets(BI[temp].autemail);
    printf("\n\nRecord Saved\n\n");
}

void Delete(int ID)
{
    int temp;
    temp = indexsearching(ID);
    
    for (int j = temp; j < idx-1; j++)
        BI[j] = BI[j+1];
    idx--;
    printf("\n\nRecord Saved\n\n");
}

void Aut_Search(char name[])
{
    int result;
    for (int i = 0; i < idx; i++)
    {
        result = strcmp(name, BI[i].autname);
        if (result == 0)
        {
            printf("\n\n");
            indexprinting(i);
        }
    }
}

void Pub_Search(char name[])
{
    int result;
    for (int i = 0; i < idx; i++)
    {
        result = strcmp(name, BI[i].autname);
        if (result == 0)
        {
            printf("\n\n");
            indexprinting(i);
        }
    }
}

int main(void)
{
    struct BookInfo BI[N*2];
    int opt, ID, newID, result, temp, index;
    char name[N];
    do
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
        case 1:
            printf("================ADD BOOK INFO================\n");
            printf("Enter the book ID you want to add: ");
            scanf("%d", &ID);

            if (idx > 0)
                result = Dup_Negative_Check(ID);
            
            if (result == 0)
            {
                Adding(ID);
                printf("\n\nRecord Saved\n\n");
            }
            else
                printf("\n\n(WARNING) Wrong ID was entered!\n\n");
            
            break;
        case 2:
            printf("================UPDATE BOOK INFO================\n");
            printf("Enter the book ID you want to change: ");
            scanf("%d", &ID);
            result = Dup_Negative_Check(ID);

            if (result == 1)
            {
                printf("Enter the new book ID you want to update: ");
                scanf("%d", &newID);
                temp = Dup_Negative_Check(newID);
                if (temp == 0)
                    Update(ID, newID);
                else
                    printf("\n\n\n(WARNING) Duplicate ID was entered!\n\n");
            }
            else
                printf("\n\n(WARNING) Wrong ID was entered!\n\n");

            break;
        case 3:
            printf("================DELETE BOOK INFO================\n");
            printf("Enter the book ID you want to delete: ");
            scanf("%d", &ID);

            result = Dup_Negative_Check(ID);

            if (result == 1)
                Delete(ID);
            else
                printf("\n\n(WARNING) There is no %d ID in list!\n\n", ID);
            break;
        case 4:
            printf("================SEARCH BOOK INFO================\n");
            printf("Enter the book ID you want to search: ");
            scanf("%d", &ID);

            index = indexsearching(ID);
            if (result != MAX)
            {
                printf("The Book info is..\n");
                indexprinting(index);
            }
            else
                printf("\n\nThere is no ID you entered.\n\n");

            break;
        case 5:
            printf("================DISPLAY THE AUTHOR'S BOOK INFO================\n");
            getchar();
            printf("Enter the author's name: ");
            gets(name);
            Aut_Search(name);
            break;
        case 6:
            printf("================DISPLAY THE PUBLISHER'S BOOK INFO================\n");
            getchar();
            printf("Enter the publisher's name: ");
            gets(name);
            Pub_Search(name);
            break;
        case 7:
            Display();
            break;
        case 0:
            printf("\n\nGOOD BYE!\n\n");
        default:
            printf("\n(WARNING) Wrong Option! Enter the option again.\n\n");
            break;
        }
    } while (opt != 0);
    
    

    return 0;
}
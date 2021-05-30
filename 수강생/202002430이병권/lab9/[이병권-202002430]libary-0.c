#include <stdio.h>
#include <string.h>

struct Books
{
    char name[60];
    int ID;
    char date[40];
    char author[60];
    char address[100];
    char publisher[60];
    char p_num[40];
};

void Add_Book(struct Books *bk,int *idx,int *flag)
{
    while (1)
    {
        *flag = 0;
        int temp;
        printf("\nEnter Book ID : ");
        scanf("%d", &temp);
        for (int i = 0; i < *idx; i++)
        {
            if (temp == bk[i].ID)
            {
                *flag = 1;
            }
        }
        if (!*flag && temp > 0)
        {
            bk[(*idx)].ID = temp;
        }
        else if (*flag == 1)
        {
            printf("\nThis ID already exists!\n");
            break;
        }
        else if (temp <= 0)
        {
            printf("\nThis ID's value is invalid\n'");
            break;
        }
        getchar();


        printf("\nEnter Book name : ");
        gets(bk[*idx].name);


        printf("\nEnter Publisher name : ");
        gets(bk[*idx].publisher);

        printf("\nEnter Publication date : ");
        gets(bk[*idx].date);


        printf("\nEnter Author name : ");
        gets(bk[*idx].author);


        printf("\nEnter Author e-mail address : ");
        gets(bk[*idx].address);


        printf("\nEnter Publisher Phone Number : ");
        gets(bk[*idx].p_num);

        (*idx)++;
        printf("\nRecord saved\n");
        printf("\nWould you like to add another record? \n<< Enter 1 to continue and 0 to exit >> ");
        int next=0;
        scanf("%d", &next);
        getchar();
        if (next == 0) break;
    }
}

void Delete_Book(struct Books *bk,int *idx,int *flag)
{
    printf("\nEnter Book ID to delete : ");
    getchar();
    *flag = 0;
    int bk_id, del_id = 0;
    scanf("%d", &bk_id);
    for (int i = 0; i < *idx; i++)
    {
        if (bk_id == bk[i].ID)
        {
            del_id = i;
            *flag = 1;
            break;
        }
    }
    if (*flag)
    {
        for (int i = del_id; i < *idx; i++)
        {
            bk[i] = bk[i + 1];
            *idx--;
        }
    }
    else if (!*flag)
    {
        printf("\n This ID is not in this system.\n");
    }
}

void Update_Book(struct Books *bk,int *idx,int *flag)
{
    *flag = 0;
    int temp=0,bk_idx=0;
    printf("\nEnter Book ID: ");
    scanf("%d", &temp);
    for (int i = 0; i < (*idx); i++)
    {
        if (bk[i].ID == temp)
        {
            *(flag) = 1;
            printf("\n\nName : %s", bk[i].name);
            printf("\nID : %d", bk[i].ID);
            printf("\nPublication date : %s", bk[i].date);
            printf("\nAuthor name : %s", bk[i].author);
            printf("\nAuthor E-mail Address : %s", bk[i].address);
            printf("\nPublisher : %s", bk[i].publisher);
            printf("\nPublisher Phone Number : %s", bk[i].p_num);
            bk_idx = i;
            break;
        }
    }
    if (!*flag)
    {
        printf("\nThis ID does not exist!\n");
    }
    else if (*flag == 1)
    {
        *flag = 0;
        printf("\nEnter Book ID to update : ");
        scanf("%d", &temp);
        for (int i = 0; i < *idx; i++)
        {
            if (bk[i].ID == temp)
            {
                *flag = 1;
            }
        }
        if (!*flag && temp > 0)
        {
            bk[bk_idx].ID = temp;

            getchar();

            printf("\nEnter Book name : ");
            gets(bk[bk_idx].name);

            printf("\nEnter Publisher name : ");
            gets(bk[bk_idx].publisher);

            printf("\nEnter Publisher Date : ");
            gets(bk[bk_idx].date);

            printf("\nEnter Author name : ");
            gets(bk[bk_idx].author);

            printf("\nEnter Author e-mail address : ");
            gets(bk[bk_idx].address);

            printf("\nEnter Publisher Phone Number : ");
            gets(bk[bk_idx].p_num);

            printf("\nRecord saved\n");
        }
        else if (*flag == 1)
        {
            printf("\nThis ID already exists!\n");
        }
        else if (temp < 0)
        {
            printf("\nThis ID's value is invalid\n'");
        }
    }
}

void Search_Book(struct Books *bk,int *idx)
{
    char name[40];
    printf("\nEnter name of book to find : ");
    getchar();
    scanf("%[^\n]s", name);
    int i=0;
    for (i = 0; i < *idx; i++)
    {
        if (!strcmp(name, bk[i].name))
        {
            printf("\n\nName : %s", bk[i].name);
            printf("\nID : %d", bk[i].ID);
            printf("\nPublication date : %s", bk[i].date);
            printf("\nAuthor name : %s", bk[i].author);
            printf("\nAuthor E-mail Address : %s", bk[i].address);
            printf("\nPublisher : %s", bk[i].publisher);
            printf("\nPublisher Phone Number : %s", bk[i].p_num);
        }
    }
    if (i == *idx)
    {
        printf("\nThere is no book by that author's name!\n");
    }
}
void Show_author(struct Books *bk,int *idx)
{
    char author[40];
    printf("\nEnter author's name of book to find : ");
    getchar();
    scanf("%[^\n]s", author);
    int i=0;
    for (i = 0; i < *idx; i++)
    {
        if (!strcmp(author, bk[i].author))
        {
            printf("\n\nName : %s", bk[i].name);
            printf("\nID : %d", bk[i].ID);
            printf("\nPublication date : %s", bk[i].date);
            printf("\nAuthor name : %s", bk[i].author);
            printf("\nAuthor E-mail Address : %s", bk[i].address);
            printf("\nPublisher : %s", bk[i].publisher);
            printf("\nPublisher Phone Number : %s", bk[i].p_num);
        }
    }
    if (i == *idx)
    {
        printf("\nThere is no book by that author's name!\n");
    }
}

void Show_publisher(struct Books *bk,int *idx)
{
    char publisher[40];
    printf("\nEnter Publisher's name of book to find : ");
            getchar();
            scanf("%[^\n]s", publisher);
        int i=0;
            for (i = 0; i < *idx; i++)
            {
                if (!strcmp(publisher, bk[i].publisher))
                {
                    printf("\n\nName : %s", bk[i].name);
                    printf("\nID : %d", bk[i].ID);
                    printf("\nPublication date : %s", bk[i].date);
                    printf("\nAuthor name : %s", bk[i].author);
                    printf("\nAuthor E-mail Address : %s", bk[i].address);
                    printf("\nPublisher : %s", bk[i].publisher);
                    printf("\nPublisher Phone Number : %s", bk[i].p_num);
                }
            }

            if (i == *idx)
            {
                printf("\nThere is no book by that author's name!\n");
            }
}
void Show_all(struct Books *bk,int *idx)
{
     for (int i = 0; i < *idx; i++)
            {
                printf("\n\nName : %s", bk[i].name);
                printf("\nID : %d", bk[i].ID);
                printf("\nPublication date : %s", bk[i].date);
                printf("\nAuthor name : %s", bk[i].author);
                printf("\nAuthor E-mail Address : %s", bk[i].address);
                printf("\nPublisher : %s", bk[i].publisher);
                printf("\nPublisher Phone Number : %s", bk[i].p_num);
            }
}

void MENU()
{
    printf("\n\n<< Library Management Program >>\n");
        printf("1. Add Book Information\n");
        printf("2. Delete Book Information\n");
        printf("3. Update Book Information\n");
        printf("4. Search by Book Name\n");
        printf("5. Display a list of book(s) published by an author a\n");
        printf("6. Display a list of book(s) published by a publisher p\n");
        printf("7. Display list of all book\n");
        printf("8. Exit\n\n");
}

int main(void)
{
    int cmd, next = 1, flag, bk_id, del_id = 0, bk_up_id, bk_idx, temp, i, idx = 0;
    struct Books bk[20];
    do
    {
        MENU();
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 1:
            Add_Book(&bk,&idx,&flag);
            break;
        case 2:
            Delete_Book(&bk,&idx,&flag);
            break;
        case 3:
            Update_Book(&bk,&idx,&flag);
            break;
        case 4:
            Search_Book (&bk,&idx);
            break;

        case 5:
            Show_author(&bk,&idx);
            break;
        case 6:
            Show_publisher(&bk,&idx);
            break;
        case 7:
           Show_all(&bk,&idx);
            break;
        default:
            printf("Invalid choice: \n");
            break;
        }
    }
    while (cmd != 8);

    return 0;
}
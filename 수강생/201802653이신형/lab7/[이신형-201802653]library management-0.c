#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define EMPTY  NULL  
#define MAX_LAN 128 
#pragma warning(disable:4996)

struct stack {
    char Bid[MAX_LAN];
    int date, Pnumber;
    struct stack* link;
    char adr[MAX_LAN];
    char name[MAX_LAN];
    char Pname[MAX_LAN];
    char Aname[MAX_LAN];
    char Aemail[MAX_LAN];
};
 
typedef struct stack linklist;
char player[MAX_LAN];
 
linklist* get_node() {
    linklist* tmp;
    tmp = (linklist*)malloc(sizeof(linklist));
    tmp->link = EMPTY;
    return tmp;
}

void insert(linklist** head) {
    if (*head == NULL)
    {
        *head = get_node();
        printf("Book Name>>");
        scanf("%s", (*head)->name);
        printf("Book ID>>");
        scanf("%s", (*head)->Bid);
        printf("Publication Date>>");
        scanf("%d", &(*head)->date);
        printf("Publisher Name>>");
        scanf("%s", (*head)->Pname);
        printf("Publisher Phone number>>");
        scanf("%d", &(*head)->Pnumber);
        printf("Author Name>>");
        scanf("%s", (*head)->Aname);
        printf("Author Email Address>>");
        scanf("%s", (*head)->Aemail);

        printf("Complete\n");
        system("pause");
        return;
    }
    insert(&(*head)->link);
}

void print(linklist* head)
{
    linklist* p = head;
    while (p != EMPTY)
    {
        printf("Book Name %s\tPublisher %s\n", p->name, p->Pname);
        p = p->link;
    }
    printf("\n");
    system("pause");
}

linklist* del(linklist* head)
{ 
    linklist* prev = head; 
    linklist* del = head;
    
    if (head == EMPTY)
    {
        return head;
    }
    
    printf("Search for a book to delete : ");
    scanf_s("%s", player, MAX_LAN);
     
    if (!strcmp(del->name, player))
    {
        head = head->link;
        free(del); 
        return head;
    }
    
    del = del->link;
      
    while (del != EMPTY)
    { 
        if (!strcmp(del->name, player))
        {
            prev->link = del->link; 
            free(del); 
            return head;
        }
   
        prev = prev->link;
        del = del->link;
    }
    return head;
}
 
void main() {
    int num;
    linklist* head = EMPTY;
    while (1) {
        system("cls");
        printf("        MENU       \n");
        printf("1. Add book information\n");
        printf("2. Search book information\n");
        printf("3. Display a list of all books\n");
        printf("4. Update book information\n");
        printf("5. Delete book information\n");
        printf("6. Display a list of book(s) published by an author a\n");
        printf("7. Display a list of book(s) published by a publisher p\n");
        printf("8. Exit\n");
        printf("Choose number :\n");
        scanf("%d", &num);
        switch (num) {
        case 1: {
            insert(&head);
            break;
        }
        case 2: {
            linklist* tmp;
            tmp = head;
            printf("Enter Book Name");
            scanf("%s", player);
            while (tmp != NULL) {
                strcmp(player, tmp->name);
                if (strcmp(player, tmp->name) == 0) {
                    printf("Book ID %s\n", tmp->Bid);
                    printf("Publication Date %d\n", tmp->date);
                    printf("Publisher Name %s\n", tmp->Pname);
                    printf("Publisher Phone Number %d\n", tmp->Pnumber);
                    printf("Author Name %s\n", tmp->Aname);
                    printf("Author Email Address %d\n", tmp->Aemail);
                    system("pause");
                }
                tmp = tmp->link;
            }
            break;
        }
        case 3: {
            printf("Book List \n");
            print(head);
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            printf("Delete book information \n");
            head = del(head);
            break;
        }
        case 6: {
            linklist* tmp;
            tmp = head;
            printf("Enter Author");
            scanf("%s", player);
            while (tmp != NULL) {
                strcmp(player, tmp->Aname);
                if (strcmp(player, tmp->Aname) == 0) {
                    printf("Book Name %s\n", tmp->name);
                    system("pause");
                }
                tmp = tmp->link;
            }
            break;
        }
        case 7: {
            linklist* tmp;
            tmp = head;
            printf("Enter Publisher");
            scanf("%s", player);
            while (tmp != NULL) {
                strcmp(player, tmp->Pname); 
                if (strcmp(player, tmp->Aname) == 0) {
                    printf("Book Name %s\n", tmp->name);
                    system("pause");
                }
                tmp = tmp->link;
            }
            break;
        }

        case 8: {
            exit(1);
            break;
        }
        }
    }
}
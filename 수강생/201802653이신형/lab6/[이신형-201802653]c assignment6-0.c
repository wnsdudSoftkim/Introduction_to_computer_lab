#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#define EMPTY  NULL 
#define MAX_ID 100
#pragma warning(disable:4996)

struct stack {
    int age;
    struct stack* link;
    char adr[MAX_ID];
    char name[MAX_ID];
};

typedef struct stack linklist;
 
char player[MAX_ID];

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
        printf("Student name :");
        scanf("%s", (*head)->name);
        printf("%s Student age :", (*head)->name);
        scanf("%d", &(*head)->age);
        printf("%s Student address :", (*head)->name);
        scanf("%s", (*head)->adr);
        printf("complete\n");
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
        printf("name : %s\tage : %d\naddress : %s", p->name, p->age,p->adr);
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
     
    printf("Enter ID to delete : ");
    scanf_s("%s", player, MAX_ID);
    
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
        printf("1. Add student ID\n");
        printf("2. Search student ID\n");
        printf("3. Student ID List\n");
        printf("4. Update student ID\n");
        printf("5. Delete student ID\n");
        printf("6. End\n");
        printf("Select a number :\n");
        scanf("%d", &num);
        switch (num) {
        case 1: {
            insert(&head);
            break;
        }
        case 2: {
            linklist* tmp;
            tmp = head;
            printf("Enter student ID");
            scanf("%s", player);
            while (tmp != NULL) {
                strcmp(player, tmp->name);
                if (strcmp(player, tmp->name) == 0) {
                    printf("name %s\n", tmp->name);
                    printf("age %d\n", tmp->age);
                    printf("address %s\n", tmp->adr);
                    system("pause");
                }
                tmp = tmp->link;
            }
            break;
        }
        case 3: {
            printf("Student List \n");
            print(head);
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            printf("Delete student ID \n");
            head = del(head);
            break;
        }
        case 6: {
            exit(1);
            break;
        }
        }
    }
}
#include <stdio.h>
#include <string.h>

int add_id(int length, char* student_id);
int display_ids(int length, char student_id[]);
int delete_id(int length, char student_id[]);

int main() {
    char student_id[10][20];
    int index = 0;
    int choice = 0;
    char id_comp[20];
    while (1)
    {
        printf("0 : exit program.\n1: add student Id.\n2: delete student Id.\n3: insert student Id.\n4: search student Id. \n5: update student Id.\n6: display list of Ids.\nChoose one of the menu.");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Exitting the Program.");
                return;
            case 1:
                index = add_id(index, student_id);
                break;
            case 2:
                delete_id(index, student_id);
                break;
            case 3:
                //insert_id();
                break;
            case 4:
                //search_id();
            case 5:
                //update_id();
                break;
            case 6:
                display_ids(index, student_id);
                break;
        }

    }

}

int add_id(int length, char* student_id) {
    printf("\nEnter new student id: ");
    scanf("%s", &student_id[length]);
    length++;
    printf("\n");
    return length;
}

int delete_id(int length, char* student_id) {
    char id[20];
    printf("\Enter the id to delete.");
    scanf("%s", id);
    for (int i = 0; i < length; i++) {
        if (strcmp(&student_id[i], id) == 0) {
            printf(student_id[i]);
            student_id[i] = '\0';
        }
    }

}

int display_ids(int length, char student_id[]) {
    printf("\nList of student ids: ");
    for (int i = 0; i < length; i++)
    {
        printf("\n%s", &student_id[i]);
    }
    printf("\n");
    return 0;
}
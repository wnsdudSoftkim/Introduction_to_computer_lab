#include <stdio.h>

int main(void)
{
    int opt, studID[100], index=0, overlap_checker, flag;

    while (1)
    {
        printf("This program operates the option you choose.\n");
        printf("1. Add Stud_ID, 2. Delete Stud_ID, 3. Insert Stud_ID, 4. Search Stud_ID, 5. Update Stud_ID, 6. Display Stud_ID\n");
        printf("*******If you want to Exit, Enter 0*******\n");
        printf("Enter the option : ");
        scanf("%d", &opt);
        printf("\n");

        switch (opt)
        {
        case 1:
        {
            flag = 0;
            int ID;
            printf("================ADD STUDENT ID================\n\n");
            printf("Enter the ID you want to add. (20XXXXXXX)\n------>");
            scanf("%d", &ID);

            if (index > 0)
            {
                for (int i = 0; i < index; i++)
                {
                    if (studID[i] == ID)
                        flag = 1;
                }
            }
            if (flag == 0)
            {
                studID[index] = ID;
                index++;
                printf("\nCOMPLETE!\n\n");
            }
            else
                printf("\nDUPLICATE ID WAS ENTERED.\n\n");
        }
            break;

        case 2:
        {
            int del_ID, stack;
            printf("================DELETE STUDENT ID================\n\n");
            printf("Enter the ID you want to delete. (20XXXXXXX)\n------>");
            scanf("%d", &del_ID);

            for (int i = 0; i < index; i++)
                if (studID[i] == del_ID)
                    stack = i;

            for (int i = stack; i < index-1; i++)
                studID[i] = studID[i+1];

            studID[index-1] = 0;
            index--;
        }
            break;

        case 3:
        {
            flag = 0;
            int position, insert_ID;
            printf("================INSERT STUDENT ID================\n\n");
            printf("Enter the position and ID you want to insert. (position/20XXXXXXX)\n------>");
            scanf("%d/%d", &position, &insert_ID);

            for (int i = 0; i < index; i++)
            {
                if (studID[i] == insert_ID)
                    flag = 1;
            }
            
            if (flag == 0)
            {
                index++;
                for (int i = index-1; i > position; i--)
                    studID[i] = studID[i-1];
                studID[position] = insert_ID;
                printf("\nCOMPLETE!\n\n");
            }
            else
                printf("\nDUPLICATE ID WAS ENTERED.\n\n");
        }
            break;

        case 4:
        {
            int search_ID, temp;
            printf("================SEARCH STUDENT ID================\n\n");
            printf("Enter the ID you want to search. (20XXXXXXX)\n------>");
            scanf("%d", &search_ID);

            for (int i = 0; i < index; i++)
                if (studID[i] == search_ID)
                    temp = i;
            printf("\n%d ID is in position %d in list.\n\n", search_ID, temp);
        }
            break;

        case 5:
        {
            flag = 0;
            int before_ID, update_ID;
            printf("================UPDATE STUDENT ID================\n\n");
            printf("Enter the ID you want to change, and ID you want to update. (20XXXXXXX-20XXXXXXX)\n------>");
            scanf("%d-%d",&before_ID , &update_ID);

            for (int i = 0; i < index; i++)
            {
                if (studID[i] == update_ID)
                    flag = 1;
            }
            
            if (flag == 0)
            {
                for (int i = 0; i < index; i++)
                    if (studID[i] == before_ID)
                        studID[i] = update_ID;
                printf("\nCOMPLETE!\n\n");
            }
            else
                printf("\nDUPLICATE ID WAS ENTERED.\n\n");
        }
            break;

        case 6:
            printf("================DISPLAY STUDENT ID================\n\n");
            printf("The List is..\n");

            for (int i = 0; i < index; i++)
                printf("%d\n", studID[i]);

            printf("\nCOMPLETE!\n\n");
            break;

        default:
            printf("\nYou entered wrong option!\n");
            break;

        case 0:
            printf("\nGOOD BYE!\n");
            return 0;
        }
    }
}
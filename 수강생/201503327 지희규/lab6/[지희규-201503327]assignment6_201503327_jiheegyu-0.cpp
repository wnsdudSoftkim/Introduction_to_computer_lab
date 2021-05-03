#include<stdio.h>
#define k 100

int main()
{
	int arr[k] = { 0 };
	int sel, ID, i;
	int a = 0, b = 0, c = 0;

	printf("1 : Add Student ID\n");
	printf("2 : Delete Student ID\n");
	printf("3 : Insert Student ID at a given position or index\n");
	printf("4 : Search Student ID\n");
	printf("5 : Update Student ID\n");
	printf("6 : Display Student IDs\n");
	printf("7 : End\n\n");

	while (1)
	{
		printf("Select operation number : ");
		scanf("%d", &sel);
		printf("\n");

		a = 0;

		if (sel == 1)
		{
			if (b >= 6)
				printf("There are no place to add ID\n\n");

			else
			{
				printf("Enter the Student ID : ");
				scanf("%d", &ID);
				printf("\n");

				for (i = 0; i < 6; i++)
				{
					if (arr[i] == ID)
					{
						printf("You enter the same ID already\n\n");
						a = 1;
						break;
					}
				}
			}

			if (a == 0)
			{
				arr[b] = ID;
				ID = 0;
				b++;
			}
		}

		else if (sel == 2)
		{
			c = 0;
			printf("Enter the Student ID to delete : ");
			scanf("%d", &ID);
			printf("\n");

			for (i = 0; i < 6; i++)
			{
				if (arr[i] == ID)
				{
					arr[i] = { 0 };
					printf("Delete the ID\n\n");
					break;
				}
				c++;
			}

			if (c == 6)
			{
				a = 1;
			}

			if (a == 1)
			{
				printf("You enter the wrong ID\n\n");
			}

			ID = 0;
		}

		else if (sel == 3)
		{
			c = 0;
			printf("Enter the number of position and Student ID : ");
			scanf("%d %d", &c, &ID);
			printf("\n");

			for (i = 0; i < 6; i++)
			{
				if (arr[i] == ID)
				{
					printf("You enter the same ID already\n\n");
					a = 1;
					break;
				}
			}

			if (a == 0)
			{
				arr[c - 1] = ID;
				ID = 0;
			}
		}

		else if (sel == 4)
		{
			printf("Enter the the Student ID to search : ");
			scanf("%d", &ID);
			printf("\n");

			for (i = 0; i < 6; i++)
			{
				if (arr[i] == ID)
				{
					printf("This ID exist\n\n");
					a = 1;
					break;
				}
			}

			if (a == 0)
			{
				printf("This ID don't exist\n\n");
			}
			ID = 0;
		}

		else if (sel == 5)
		{
			for (i = 0; i < 6; i++)
			{
				printf("%d.  %d\n", i + 1, arr[i]);
			}
			printf("\n\n");
		}

		else if (sel == 6)
		{
			for (i = 0; i < 6; i++)
			{
				printf("%d.  %d\n", i + 1, arr[i]);
			}
			printf("\n\n");
		}

		else if (sel == 7)
		{
			printf("End\n");
			break;
		}
	}
}
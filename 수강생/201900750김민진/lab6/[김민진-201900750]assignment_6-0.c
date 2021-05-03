#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
	long stdID[MAX_SIZE] = { 0, }, index[MAX_SIZE] = { 0, }, insertSID[MAX_SIZE];
	int idx = 1, opt = 1;
	int id, insertIdx, result= 1;

	while (1)
	{
		printf("\n");
		printf("---------- Student ID Management Program ----------\n\n");
		printf("1. Add Student ID\n");
		printf("2. Delete Student ID\n");
		printf("3. Insert Student ID at a given position or index\n");
		printf("4. Search Student ID\n");
		printf("5. Update Student ID\n");
		printf("6. Display Student IDs\n");
		printf("7. Quit the program\n\n");
		printf("---------------------------------------------------\n");
		printf("\n");

		printf("Select the option: ");
		scanf("%d", &opt);
		printf("\n");

		switch (opt)
		{
		case 1:
			result = 100;

			printf("Enter Student ID you want to add: ");
			scanf("%d", &id);
			printf("\n");

			for (int i = 0; i < idx; i++)
			{
				if (stdID[i] == id)
				{
					printf("Duplicate ID.\n");
					printf("\n");
					result = 0;
					break;
				}
			}
			if (result != 0)
			{
				for (int i = 0; i < idx; i++)
				{
					if (index[i] == 2)
					{
						result = 2;
						break;
					}
				}
			}
			
			if (result == 0) break;
			else if (result == 2)
			{
				for (int i = 0; i < idx; i++)
				{
					if (index[i] == 2)
					{
						stdID[i] = id;
						index[i] = 1;
						break;
					}
				}
			}
			else
			{
				for (int i = 0; i < idx; i++)
				{
					stdID[idx] = id;
					index[idx] = 1;
					idx++;
					break;
				}
			}
			printf("\n\n");
			break;

		case 2:
			// print stdID
			for (int i = 0; i < idx; i++)
			{
				if (stdID[i] < 0 || stdID[i] == 0)
					continue;
				printf("%d ", stdID[i]);
			}
			printf("\n\n");

			printf("Enter Student ID you want to delete: ");
			scanf("%d", &id);
			printf("\n");

			result = 0;

			for (int i = 0; i < MAX_SIZE; i++)
			{
				if (id == stdID[i])
				{
					index[i] = 2;
					stdID[i] = 0;
					result = 1;
					break;
				}
			}
			if (result != 1)
			{
				printf("No such ID.\n");
				printf("\n");
			}
			printf("\n\n");
			break;

		case 3:
			result = 10;

			// print stdID
			for (int i = 0; i < idx; i++)
			{
				if (stdID[i] < 0 || stdID[i] == 0)
					continue;
				printf("%d ", stdID[i]);
			}
			printf("\n\n");

			while (1)
			{
				printf("Enter the index you want to add Student ID: ");
				scanf("%d", &insertIdx);
				printf("\n");

				if (insertIdx < 0 || insertIdx > idx)
				{
					printf("Index out of range.\n");
					printf("\n");
				}
				else break;
			}

			printf("Enter Student ID: ");
			scanf("%d", &id);
			printf("\n");

			for (int i = 0; i <= idx; i++)
			{
				if (stdID[i] == id)
				{
					printf("Duplicate ID.\n");
					printf("\n");
					result = 0;
					break;
				}
			}

			if (result != 0)
			{
				for (int i = idx; i >= insertIdx; i--)
				{
					result = 1;
					stdID[i] = stdID[i - 1];

					if (stdID[i] != 0)
					{
						index[i] = 1;
					}
					else
						index[i] = 2;
				}

				stdID[insertIdx] = id;
				index[insertIdx] = 1;
				idx++;
			}
			else break;
			printf("\n\n");
			break;

		case 4:
			printf("Search Student ID: ");
			scanf("%d", &id);

			for (int i = 0; i < idx; i++)
			{
				if (id == stdID[i])
				{
					result = i;
					break;
				}
				else
					result = -1;
			}

			printf("\n");

			if (result != -1)
				printf("%d exists.\n", id);
			else
				printf("%d does not exists.\n", id);

			printf("\n\n");
			break;

		case 5:
			// print stdID
			for (int i = 0; i < idx; i++)
			{
				if (stdID[i] < 0 || stdID[i] == 0)
					continue;
				printf("%d ", stdID[i]);
			}
			printf("\n\n");

			while (1)
			{
				printf("Enter Student ID you want to update: ");
				scanf("%d", &id);
				printf("\n");

				for (int i = 0; i < idx; i++)
				{
					if (id == stdID[i])
					{
						printf("Enter new Student ID: ");
						scanf("%d", &id);

						stdID[i] = id;
						result = 1;
						break;
					}
				}

				if (result == 1)
					break;
				else
					printf("No such ID.\n");
			}
			printf("\n\n");
			break;


		case 6:
			for (int i = 0; i < idx; i++)
			{
				if (stdID[i] < 0 || stdID[i] == 0)
					continue;
				printf("%d ", stdID[i]);
			}
			printf("\n");

			// print index
			//for (int i = 0; i < MAX_SIZE; i++)
			//{
			//	if (index[i] == 2 || index[i] == 1)
			//		printf("%d ", index[i]);
			//}
			//printf("\n\n");
			break;

		case 7:
			printf("Program terminated.\n");
			break;

		default:
			printf("Wrong input.\n\n");
			break;
		}

		if (opt == 7)
			break;
	}
}
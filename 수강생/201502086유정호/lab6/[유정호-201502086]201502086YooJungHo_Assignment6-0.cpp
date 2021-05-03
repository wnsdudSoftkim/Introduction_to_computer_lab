#include<stdio.h>
int main()
{
	int arr[6] = { 0 };

	printf("1. Add Student ID\n");
	printf("2. Delete Student ID\n");
	printf("3. Insert Student ID at a given position or index\n");
	printf("4. Search Student ID\n");
	printf("5. Update Student ID\n");
	printf("6. Display Student IDs\n");
	printf("7. Exit\n");
	printf("\nPlease enter the operation number : ");
	int op_num;
	int ID_num;
	int cnt = 0, m = 0;
	while (1)
	{
		cnt = 0;
		scanf("%d", &op_num);

		printf("\n====================================\n");
		if (op_num == 1)
		{
			if (m == 5)
				printf("\n ERROR :: The space to enter the ID is full.");
			else
			{
				printf("\nEnter Student ID : ");
				scanf("%d", &ID_num);
				for (int a = 0; a < 5; a++)
				{
					if (arr[a] == ID_num)
					{
						printf("\n ERROR :: The same ID already exists.\n");
						cnt = 1;
						break;
					}
				}
			}
			if (cnt == 0)
			{
				arr[m] = ID_num;
				ID_num = 0;
				m++;
			}
			if (m == 6)
				m = 5;
		}
		else if (op_num == 2)
		{
			int count = 0;
			printf("\nEnter the Student ID to delete : ");
			scanf("%d", &ID_num);
			for (int a = 0; a < 5; a++)
			{
				if (arr[a] == ID_num)
				{
					int j = a;
					for (int u = j; u < 5; u++)
						arr[u] = arr[u + 1];
					break;
				}
				count++;
			}
			if (count == 5)
				cnt = 1;
			if (cnt == 1)
				printf("\n ERROR :: Not correct Student ID\n");
			ID_num = 0;
			m = m - 1;
			cnt = 0;
		}
		else if (op_num == 3)
		{
			int num = 0;
			printf("\nPlease enter the position and Student ID to insert. : ");
			scanf("\n%d", &num);
			scanf("\n%d", &ID_num);
			for (int a = 0; a < 5; a++)
			{
				if (arr[a] == ID_num)
				{
					printf("\n ERROR :: The same ID already exists.\n");
					cnt = 1;
					break;
				}
			}
			if (cnt == 0)
			{
				arr[num - 1] = ID_num;
				ID_num = 0;
			}
			if (m == 0)
				m++;
		}
		else if (op_num == 4)
		{
			printf("\nEnter the number want to search : ");
			scanf("%d", &ID_num);
			for (int a = 0; a < 5; a++)
			{
				if (arr[a] == ID_num)
				{
					printf("\nThat ID is already in book");
					break;
				}
				if (a == 4)
					cnt++;
			}
			if (cnt == 1)
				printf("\n ERROR :: That ID can't find\n");
			ID_num = 0;
		}
		else if (op_num == 6)
		{
			for (int a = 0; a < 5; a++)
				printf("\n%d.  %d", a + 1, arr[a]);
			printf("\n");
		}
		else if (op_num == 5)
		{
			printf("The student ID has been updated for this program.\n");
			for (int a = 0; a < 5; a++)
			{
				printf("\n%d.  %d", a + 1, arr[a]);
				cnt = 0;
			}
			printf("\n");
		}
		else if (op_num == 7)
		{
			printf("\nExit the program. ");
			break;
		}
		if (cnt == 0)
			printf("\n Great !! Enter the Next Work : ");
		else
			printf("\n Sorry .. Enter the Next Work : ");
	}
}
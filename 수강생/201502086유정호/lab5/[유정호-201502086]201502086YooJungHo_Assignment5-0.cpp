#include<stdio.h>
#define n 100
void main()
{
	int op_num, i, j;
	int a[5] = { 0 };
	int b[5] = { 0 };
	int pik[n] = { 0 };
	int count = 0;
	printf("1. Find intersection of two sets \n");
	printf("2. Find union of two sets \n");
	printf("3. Find largest element in a list \n");
	printf("4. Find smallest element in a list \n");
	printf("5. Exit the program. \n");
	while (1)
	{
		printf("\n===========================================\n");
		printf("\nPlease enter the operation number : ");
		scanf_s("%d", &op_num);
		if (op_num == 1)
		{
			printf("Enter the FIrst set (Input up to 5) :");
			for (i = 0; i < 5; i++)
			{
				scanf_s("%d", &a[i]);
			}
			printf("Enter the Second set (Input up to 5) :");
			for (i = 1; i < 5; i++)
			{
				scanf_s("%d", &b[i]);
			}
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (a[i] == b[j])
					{
						pik[count] = b[j];
						count++;
						break;
					}
				}
			}
			printf("Intersection of Two Sets :");
			for (i = 0; i < count; i++)
				printf("%3d", pik[i]);
			printf("\n");
			count = 0;
		}
		else if (op_num == 2)
		{
			printf("Enter the First set (Input up to 5) :");
			for (i = 0; i < 5; i++)
			{
				scanf_s("%d", &a[i]);
			}
			printf("Enter the Second set (Input up to 5) :");
			for (i = 0; i < 5; i++)
			{
				scanf_s("%d", &b[i]);
			}
			printf("Union of two sets : ");
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (a[i] == b[j])
					{
						break;
					}
				}
				if (j == 5)
				{
					pik[count] = a[i];
					count++;
				}
			}
			for (i = 0; i < count; i++)
				printf("%3d", pik[i]);
			for (i = 0; i < 5; i++)
				printf(" %d ", b[i]);
			printf("\n");
		}
		else if (op_num == 3)
		{
			printf("Enter the First set (Input up to 5) :");
			for (i = 0; i < 5; i++)
			{
				scanf_s("%d", &a[i]);
			}
			int Max = 0;
			for (i = 0; i < 5; i++)
			{
				if (Max <= a[i])
				{
					Max = a[i];
				}
			}
			printf(" \n %3d largest element in a A sets \n", Max);
		}
		else if (op_num == 4)
		{
			printf("Enter the First set (Input up to 5) :");
			for (i = 0; i < 5; i++)
			{
				scanf_s("%d", &a[i]);
			}
			int Min = a[0];
			for (i = 0; i < 5; i++)
			{
				if (Min >= a[i])
					Min = a[i];
			}
			printf(" \n %3d smallest in a A sets \n", Min);
		}
		else if (op_num == 5)
		{
			printf("This program exit");
			break;
		}
		else
		{
			printf("Please enter an operation number from 1 to 5.");
		 }
	}
}
#include<stdio.h>
#define k 100

int main()
{
	while (1)
	{
		int sel, i, j;
		int a[3] = { 0 };
		int b[3] = { 0 };
		int ans[k] = { 0 };
		int c = 0, d = 3;

		printf("1 : Find intersection of two sets \n");
		printf("2 : Find union of two sets \n");
		printf("3 : Find largest element in a list \n");
		printf("4 : Find smallest element in a list \n");
		printf("5 : End\n\n");
		printf("Select number : ");
		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1)
		{
			printf("enter the 3 number of first set :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &a[i]);
			}

			printf("enter the 3 number of  second set :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &b[i]);
			}

			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (a[i] == b[j])
					{
						ans[c] = b[j];
						c++;
						break;
					}
				}
			}

			printf("result :");
			for (i = 0; i < c; i++)
			{
				printf("%3d", ans[i]);
			}

			printf("\n\n");
		}
			
		else if (sel== 2)
		{
			printf("enter the 3 number of  first set :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &a[i]);
			}

			printf("enter the 3 number of second set :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &b[i]);
			}
			
			for (i = 0; i < 3; i++)
			{
				ans[i] = a[i];
			}

			for (j = 0; j < 3; j++)
			{
				for (i = 0; i < 3; i++)
				{
					if (b[j] == a[i])
						break;
					
					if (i == 2)
					{
						ans[d] = b[j];
						d++;
					}
				}
			}

			printf("result :");
			for (i = 0; i < d; i++)
			{
				printf("%3d", ans[i]);
			}

			printf("\n\n");
		}
		
		else if (sel == 3)
		{
			printf("enter the 3 number of list :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &a[i]);
			}

			int max = 0;

			for (i = 0; i < 3; i++)
			{
				if (max <= a[i])
				{
					max = a[i];
				}
			}

			printf("The largest element in a list : %d\n\n", max);
		}
	
		else if (sel == 4)
		{
			printf("enter the 3 number of list :");
			for (i = 0; i < 3; i++)
			{
				scanf_s("%d", &a[i]);
			}

			int min = a[0];

			for (i = 0; i < 3; i++)
			{
				if (min > a[i])
					min = a[i];
			}

			printf("The smallest element in a list : %d\n\n", min);
		}

		else if (sel == 5)
		{
			printf("End\n");
			break;
		}
	}
}
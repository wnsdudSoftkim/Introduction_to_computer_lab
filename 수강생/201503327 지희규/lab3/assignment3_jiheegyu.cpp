#include<stdio.h>
#define k 100
int main()
{
	while (1)
	{
		int sel;
		int n = 0, m = 0, p = 0, i = 0, j = 0;
		int a = 0, b = 0, c = 0;
		int num[k] = { 0 };

		printf("1: Display a list of even numbers.\n");
		printf("2: Display a list of odd numbers.\n");
		printf("3: For a given number n check if n is a prime number.\n");
		printf("4: Display a list of prime numbers between numbers n and m.\n");
		printf("5: Display a factorial of a given number n.\n");
		printf("6: Find factorial of all numbers between numbers n and m.\n");
		printf("7: Generate the Fibonacci sequence up to a number n.\n");
		printf("8: End\n\n");
		printf("Select number : ");
		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1)
		{
			printf("Display a list of even numbers.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);
			printf("\n");

			for (i = 1; i <= n; i++)
			{
				if (i % 2 == 0)
				{
					printf("%2d", i);
				}
			}
			printf("\n\n");
		}
		else if (sel == 2)
		{
			printf("Display a list of odd numbers.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);
			printf("\n");

			for (i = 1; i <= n; i++)
			{
				if (i % 2 == 1)
				{
					printf("%2d", i);
				}
			}
			printf("\n\n");
		}
		else if (sel == 3)
		{
			printf("For a given number n check if n is a prime number.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);
			printf("\n");

			i = n - 1;
			j = 2;

			while (1)
			{
				if (j <= i)
				{
					if (n % j == 0)
					{
						printf("Not prime number\n");
						break;
					}
					else
					{
						j++;
					}
				}
				else
				{
					printf("Prime number\n");
					break;
				}
			}
			printf("\n\n");
		}
		else if (sel == 4)
		{
			printf("Display a list of prime numbers between numbers n and m.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);
			printf("Enter the value of m : ");
			scanf_s("%d", &m);

			for (n=n; n <= m; n++)
			{
				for (p = 2; p <= n; p++) 
				{
					if (n % p == 0) 
					break; 
				}
				if (n == p)
				{
					printf("%2d", n);
				}
			}
			printf("\n\n");
		}			
		else if (sel == 5)
		{
			printf("Display a factorial of a given number n.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);

			m = 1;

			for (i = n; i > 0; i--)
			{
				m = m * i;
			}
			printf("%d! = %d", n, m);
			printf("\n\n");
		}
		else if (sel == 6)
		{
			printf("Find factorial of all numbers between numbers n and m.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);
			printf("Enter the value of m : ");
			scanf_s("%d", &m);

			for (i = n; i <= m; i++)
			{
				num[a] = 1;

				for (j = i; j > 0; j--)
				{
					num[a] = num[a] * j;
				}
				printf("%2d! = %2d\n", i, num[a]);
				a++;
			}
			printf("\n\n");
		}
		else if (sel == 7)
		{
			printf("Generate the Fibonacci sequence up to a number n.\n");
			printf("Enter the value of n : ");
			scanf_s("%d", &n);

			for (i = 1; i <= n; i++)
			{
				if (i == 0 || i == 1)
				{
					num[i] = 1;
				}
				else
				{
					num[i] = num[i - 1] + num[i - 2];
				}
				printf("%2d ", num[i]);
			}
			printf("\n\n");
		}
		else if (sel == 8)
		{
			printf("End\n");
			break;
		}
	}
}
#include<stdio.h>
#define arr 100
void main()
{
	printf("This program operates according to the manual from 1 to 7.\n");
	printf("Enter 0 to exit the program.\n");
	while (1)
	{
		int op_num;
		int n = 0, m = 0, i = 0, j = 2, a = 0;
		int pik[arr] = { 0 };
		printf("Enter a operation number : ");
		scanf_s("%d", &op_num);

		if (op_num == 1) // 1: Display a list of even numbers.
		{
			printf("Displays an even list. Please enter a number: ");
			scanf_s("%d", &a);

			for (i = 1; i <= a; i++)
			{
				if (i % 2 == 0)
				{
					printf(" %3d", i);
				}
			}
			printf("\n");
			a = 0;
		}
		else if (op_num == 2) // 2: Display a list of odd numbers.
		{
			printf("Displays an odd list. Please enter a number: ");
			scanf_s("%d", &a);

			for (i = 1; i <= a; i++)
			{
				if (i % 2 == 1)
				{
					printf("%3d", i);
				}
			}
			printf("\n");
			a = 0;
		}
		else if (op_num == 3) // 3: For a given number n check if n  is a prime number.
		{
			printf("Enter a number :");
			scanf_s("%d", &a);
			if (a == 1)
			{
				printf("1 is neither a minority nor a composite.");
			}
			else
			{
				i = a - 1;
				while (1)
				{
					if (j <= i)
					{
						if (a % j == 0)
						{
							printf("Not prime number\n");
							break;
						}
						else
							j++;
					}
					else
					{
						printf("This number is prime number\n");
						break;
					}
				}
			}
			a = 0;
		}
		else if (op_num == 4) // 4: Display a list of prime numbers between numbers n and m.
		{
			printf("Please enter value of n : ");
			scanf_s("%d", &n);
			printf("Please enter value of m : ");
			scanf_s("%d", &m);
			printf("Prime numbers between %d and %d are :", n, m);

			while (n < m)
			{
				a = 0;
				if (n <= 1)
				{
					++n;
					continue;
				}
				for (i = 2; i <= n / 2; ++i)
				{
					if (n % i == 0)
					{
						a = 1;
						break;
					}
				}
				if (a == 0)
					printf("%d ", n);

				++n;
			}
			printf("\n");
		}
		else if (op_num == 5) // 5: Display a factorial of a given number n.
		{
			printf("Please enter value of n : ");
			scanf_s("%d", &n);
			m = 1;
			for (i = n; i > 0; i--)
			{
				m = m * i;
			}
			printf("%2d! = %3d", n, m);
			printf("\n");
		}
		else if (op_num == 6) // 6: Find factorial of all numbers between numbers n and m.
		{
			printf("Please enter value of n : ");
			scanf_s("%d", &n);
			printf("Please enter value of m : ");
			scanf_s("%d", &m);
			for (i = n; i <= m; i++)
			{
				pik[a] = 1;
				for (j = i; j > 0; j--)
				{
					pik[a] = pik[a] * j;
				}
				printf("%3d! = %5d\n", i, pik[a]);
				a++;
			}
			printf("\n");
		}
		else if (op_num == 7) // 7: Generate the Fibonacci sequence up to a number n.
		{
			int f[arr] = { 0 };
			printf("Pleas enter value of n : ");
			scanf_s("%d", &n);
			for (i = 1; i <= n; i++)
			{
				if (i == 1 || i == 2)
				{
					f[i] = 1;
				}
				else
					f[i] = f[i - 2] + f[i - 1];
				printf("%3d ", f[i]);
			}
			printf("\n");
		}
	}
}
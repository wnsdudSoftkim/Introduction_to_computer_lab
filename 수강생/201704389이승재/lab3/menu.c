#include<stdio.h>
int main(void)
{
	int number;
	int a, b, i;
	a = 0;
	b = 0;
	i = 0;


	printf("1. Display a list of even numbers: \n");
	printf("2. Display list of odd numbers: \n");
	printf("3. For a given number n check if n is a prime number. \n");
	printf("4. Display a list of prime numbers between numbers n and m. \n");
	printf("5. Display a factorial of a given number n. \n");
	printf("6. Find factorial of all numbers between numbers n and m. \n");
	printf("6. Generate the Fibonacci sequence up to a number n. \n");

	for (;;) {
		printf("choose a number: ");
		scanf_s("%d", &number);

		switch (number) {
		case 1:
			printf("1. Display a list of even numbers: \n");
			scanf_s("%d", &a);
			for (a = 2; a <= 1000; a = a + 2)
			{
				printf("%d \n", a);
			}
			break;

		case 2:
			printf("2. Display list of odd numbers: \n");
			scanf_s("%d", &a);
			for (a = 1; a <= 1000; a = a + 2)
			{
				printf("%d \n", a);
			}
			break;

		case 3:
			printf("3. For a given number n check if n is a prime number. \n");
			scanf_s("%d", &a);
			for (i = 1; i <= 1000; i++)
			{
				printf("%d", i);
			}
			break;

		case 4:
			printf("4. Display a list of prime numbers between numbers n and m: \n");
			scanf_s("%d,%d", &a,&a);
			for (a = 2; a <= 1000; a++)
			{
				if (b % a == 0)
					break;
			}
			if (b == a)
				printf("%d is PrimeNumber", b);
			else
				printf("%d is not primeNumber", b);

			break;

		case 5:
			printf("5. Display a factorial of a given number n: \n");
			scanf_s("%d", &a);

			for (a = 1; a <= b; a += 2)
				printf("%d\n", a);
			break;

		case 6:
			printf("6. Find factorial of all number between numbers n and m: \n");
			scanf_s("%d", &a);
			for (a = 1; a <= b; a += 2)
				printf("%d\n", a);
			break;

		case 7:
			printf("7. Generate the Fibonacci sequence up to a number n: \n");
			scanf_s("%d", &a);

			for (a = 1; a <= b; a += 2)
				printf("%d\n", a);
			break;
		}
	}
}
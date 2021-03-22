#include <stdio.h>

int main(void)
{

	int a, b, c, d;
	printf("Enter four integers :");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	if (a > b && a > c && a > d)
	{
		printf("Largest : %d\n", a);
		if (b < c && b < d)
		{
			printf("Smallest : %d", b);

		}
		else if (c < b && c < d)
		{
			printf("Smallest : %d", c);
		}
		else
		{
			printf("Smallest : %d", d);
		}


	}

	if (b > c && b > a && b > d)
	{
		printf("Largest : %d\n", b);
		if (a < c && a < d)
		{
			printf("Smallest : %d", a);

		}
		else if (c < a && c < d)
		{
			printf("Smallest : %d", c);
		}
		else
		{
			printf("Smallest : %d", d);
		}


	}

	if (c > b && c > a && c > d)
	{
		printf("Largest : %d\n", c);
		if (a < b && a < d)
		{
			printf("Smallest : %d", a);

		}
		else if (b < a && b < d)
		{
			printf("Smallest : %d", b);
		}
		else
		{
			printf("Smallest : %d", d);
		}

	}

	if (d > b && d > c && d > a)
	{
		printf("Largest : %d\n", d);
		if (a < c && a < b)
		{
			printf("Smallest : %d", a);

		}
		else if (b < c && b < a)
		{
			printf("Smallest : %d", b);
		}
		else
		{
			printf("Smallest : %d", c);
		}

		return 0;



	}



}
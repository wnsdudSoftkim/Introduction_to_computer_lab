#include <stdio.h>

int main(void)
{
	int i;
	int a, b;

	printf("Enter a two-digit number : ");
	scanf_s("%d", &i);

	a = i / 10;
	b = i % 10;

	if (a == 1)
	{
		if (b == 1)
		{
			printf("You entered the number eleven");
		}
		if (b == 2)
		{
			printf("You entered the number twelve");
		}
		if (b == 3)
		{
			printf("You entered the number thirteen");
		}
		if (b == 4)
		{
			printf("You entered the number fourteen");
		}
		if (b == 5)
		{
			printf("You entered the number fifteen");
		}
		if (b == 6)
		{
			printf("You entered the number sixteen");
		}
		if (b == 7)
		{
			printf("You entered the number seventeen");
		}
		if (b == 8)
		{
			printf("You entered the number eightteen");
		}
		if (b == 9)
		{
			printf("You entered the number nineteen");
		}
	}
	switch (a)
	{
	case 2:
		printf("You entered the number twenty ");
		break;
	case 3:
		printf("You entered the number thirty");
		break;
	case 4:
		printf("You entered the number forty");
		break;
	case 5:
		printf("You entered the number fifty");
		break;
	case 6:
		printf("You entered the number sixty");
		break;
	case 7:
		printf("You entered the number seventy");
		break;
	case 8:
		printf("You entered the number eighty");
		break;
	case 9:
		printf("You entered the number ninety");
		break;
	}


	switch (b)
	{
	case 1:
		printf("-one");
		break;
	case 2:
		printf("-two");
		break;
	case 3:
		printf("-three");
		break;
	case 4:
		printf("-four");
		break;
	case 5:
		printf("-five");
		break;
	case 6:
		printf("-six");
		break;
	case 7:
		printf("-seven");
		break;
	case 8:
		printf("-eight");
		break;
	case 9:
		printf("-nine");
		break;
	}

	return 0;
}
// Write a program that finds the largest and smallest of four integers entered by the user

#include <stdio.h>

int main_5_7()
{
	int i1, i2, i3, i4;

	printf("Enter four integers: ");
	scanf_s("%d %d %d %d", &i1, &i2, &i3, &i4);

	int min = i1, max = i1;

	if (min > i2)
	{
		min = i2;

		if (min > i3)
		{
			min = i3;

			if (min > i4)
				min = i4;
		}
		else
			if (min > i4)
				min = i4;
	}
	else
	{
		if (min > i3)
		{
			min = i3;

			if (min > i4)
				min = i4;
		}
		else
			if (min > i4)
				min = i4;
	}
	
	if (max < i2)
	{
		max = i2;

		if (max < i3)
		{
			max = i3;

			if (max < i4)
				max = i4;
		}
		else
			if (max < i4)
				max = i4;
	}
	else
	{
		if (max < i3)
		{
			max = i3;

			if (max < i4)
				max = i4;
		}
		else
			if (max < i4)
				max = i4;
	}

	printf("Largest: %d\n", max);
	printf("Smallest: %d\n", min);

	return 0;
}
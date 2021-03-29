// Write a program tha asks the user to enter two integers,
// then calculates and displays their greatest common divisor(GCD)

#include <stdio.h>

int main_6_2()
{
	int n1, n2, temp;

	printf("Enter two integers: ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 < n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	while (1)
	{
		if (n2 == 0) break;

		temp = n1 % n2;

		n1 = n2;
		n2 = temp;
	}

	printf("Greatest common divisor: %d\n", n1);


	return 0;
}
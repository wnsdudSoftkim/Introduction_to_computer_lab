// Write a program that takes a first name and last name entered by the user
// and displays the last name, a comma, and the first initial, followed by a period.

#include <stdio.h>

int main(void)
{
	char c, initial;

	printf("Enter a first and last name: ");
	initial = getchar();
	c = initial;

	while (c != ' ')
		c = getchar();

	while (c != '\n')
	{
		c = getchar();

		if (c == '\n') break;

		printf("%c", c);
	}

	printf(", %c\n", initial);

	return 0;
}
// Write a program that counts the number of vowels(a, e, i, o, u) in a sentence.

#include <stdio.h>

int main(void)
{
	int cnt = 0;
	char c;

	printf("Enter a sentence: ");
	c = getchar();

	while (c != '\n')
	{
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			cnt++;

		c = getchar();
	}

	printf("Your sentence contains %d vowels.\n", cnt);

	return 0;
}
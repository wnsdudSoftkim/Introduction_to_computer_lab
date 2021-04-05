#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;

	printf("Enter a sentence: ");

	do
	{
		ch = toupper(getchar());
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			count = count + 1;
	} 
	while (ch != '\n');
	printf("Your sentence contains %d vowels \n", count);
	return 0;
}
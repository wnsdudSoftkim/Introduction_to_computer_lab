#include <stdio.h>
#include <string.h>

int main(void)
{
	char ch, last = ' ';
	int count1 = 0, count2 = 0;
	printf("Enter first and last name: ");
	do
	{
		ch = getchar();
		
		if (count1 == 0)
		{
			last = ch;
			count1++;
		}
		if (ch == ' ')
			count2 = 1;
		if (count2 == 1 && ch != ' ' && ch != '\n')
			printf("%c", ch);
	} 	while (ch != '\n');
	printf(", %c.\n", last);
	return 0;
}
#include <stdio.h>

int main(void)
{
	char str[30];
	int i = 0;
	printf("Enter a first and last name : ");
	gets(str);

	while(str[i] != '\0')
	{
		
		if (str[i] == ' ')
		{
			while (str[i] != '\0')
			{
				printf("%c", str[i]);
				i++;

			}
			break;
		}
		i++;
	}

	printf(", %c", str[0]);

	return 0;
}

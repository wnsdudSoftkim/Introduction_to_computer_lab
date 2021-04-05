#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	
	char str[100];
	printf("Enter a sentence : ");
	fgets(str, 100, stdin);

	int count = 0;
	
	for (int i = 0; str[i]; ++i)
	{
		switch (str[i])
		{
		case 'a': case 'e': case 'i': case 'o': case 'u':
		case 'A': case 'E': case 'I': case 'O': case 'U':
			++count;
		}
	}

	printf("Your sentence contains %d vowels", count);


	return 0;


}

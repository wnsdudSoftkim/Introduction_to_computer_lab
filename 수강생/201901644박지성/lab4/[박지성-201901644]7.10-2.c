#include <stdio.h>
int main(void)
{
	char ch;
	int len = 1;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n') {
		ch = getchar();
		if (ch == 'a') {
			len++;
		}
		else if (ch == 'e') {
			len++;
		}
		else if (ch == 'i') {
			len++;
		}
		else if (ch == 'o') {
			len++;
		}
		else if (ch == 'u') {
			len++;
		}
		else if (ch == '\n')
			break;
	}
	printf("Your sentence contains %d vowels.", len);
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {

	char s[256];
	printf("Enter a sentence: ");
	scanf_s("%[^\n]s", s, 256);
	int count = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			count++;
	}
	printf("Your sentence contains %d vowels.", count);
}
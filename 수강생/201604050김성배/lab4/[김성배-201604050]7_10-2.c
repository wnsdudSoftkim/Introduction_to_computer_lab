#include <stdio.h>

int main() {
	char ch;
	int vowel = 0;

	printf("Enter a sentence: ");
	ch = getchar();
	while (ch != '\n') {

		if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
			vowel++;
		}
		
		ch = getchar();
	}
	printf("Your sentence contains %d vowels", vowel);
}
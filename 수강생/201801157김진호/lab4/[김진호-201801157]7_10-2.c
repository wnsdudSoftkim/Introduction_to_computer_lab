#include <stdio.h>

int main() {
	char c;
	int idx = 0;
	printf("Enter a sentence : ");
	while (1) {

		scanf_s("%c", &c);

		if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			idx++;
		}
		else if(c == '\n') {

			break;

		}
		
	}
	printf("Your sentence contains %d vowels.",idx);
	
}
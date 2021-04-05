#include <stdio.h>
#include <ctype.h>

int main() {

	char sentence;
	int count = 0;

	printf("Enter a sentence: ");

	while ((sentence = getchar()) != '\n') {
		switch (toupper(sentence)) {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':

			count++;
			break;
		}
	}
	printf("Your sentence contains %d vowels.\n", count);
}
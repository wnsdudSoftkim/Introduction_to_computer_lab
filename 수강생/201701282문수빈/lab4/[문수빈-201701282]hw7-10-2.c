#include <stdio.h>

int main(void) {
	
	char input;
	int count=0;
	
	printf("Enter a sentence: ");
	while((input = getchar()) != '\n') {
		switch(input) {
			case 'a': case 'A':
			case 'e': case 'E':
			case 'i': case 'I':
			case 'o': case 'O':
			case 'u': case 'U':
				count++;
				break;
		}
	}
	
	printf("Your sentence contains %d vowels.\n",count);
	
	return 0;
}

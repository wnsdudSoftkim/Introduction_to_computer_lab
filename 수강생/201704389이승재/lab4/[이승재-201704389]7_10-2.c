#include<stdio.h>

int main(void)
{
	char sentence;
	int count = 0;

	printf("Enter a sentence: \n");

	sentence = getchar();

	switch (sentence) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		count++;
		
		
		printf("your sentence contains %d vowels.",count);

		
	}
	return 0;
}
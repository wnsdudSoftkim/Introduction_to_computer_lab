# include <stdio.h>
# include <stdlib.h>

int main(void) {

	char upc[12];
	int first_sum = 0;
	int second_sum = 0;
	printf("Enter the first 11 digits of a upc.\n");

	int c = EOF;
	int i = 0;
	while ((c = getchar()) != '\n' && c != EOF)
	{
		upc[i++] = (char)c;
	}
	upc[i] = '\0'; // it tells the end position of string.

	if (strlen(upc) != 11) {
		printf("The length of the code should be 12. The length of the input: %d.", strlen(upc));
		return;
	}

	for (int i = 0; i <= 10; i++) {
		if (i % 2 == 0)
			first_sum += (int)upc[i] - 48; // char to ascii value ?
		else
			second_sum += (int)upc[i] - 48;
	}

	first_sum *= 3;
	int total = second_sum + first_sum - 1;
	int remainder = total % 10;
	int check_digit = 9 - remainder;

	printf("Check digit: %d", check_digit);
}
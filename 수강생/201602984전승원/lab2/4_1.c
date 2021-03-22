# include <stdio.h>
# include <string.h>

int main(void) {

	char c[3];
	char* swap_c = malloc(sizeof(char) *3);
	int num;
	printf("Enter a two-digit number: ");
	scanf_s("%s", c, 3);
	num = atoi(c);
	
	if (num < 10 || num >= 100) {
		printf("Please enter only two-digit number. Exit program.");
		return;
	}
	swap_c[0] = c[1];
	swap_c[1] = c[0];
	swap_c[2] = '\0';

	printf("The reversal is: %s", swap_c);
	return 0;
}
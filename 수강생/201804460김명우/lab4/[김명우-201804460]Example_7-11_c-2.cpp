#include <stdio.h>

int main() {

	char first_initial, last_name;

	printf("Enter a first and last name: ");
	scanf_s("%c", &first_initial);

	while (getchar() != ' ') {

	}

	while ((last_name = getchar()) != '\n') {
		if (last_name == ' ')
		else
			printf("%c", last_name);
	}
	printf(", %c.\n\n", first_initial);
}

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char grade[4];

	printf("Enter numerical grade: ");
	scanf_s("%s", grade, 4);

	int g = atoi(grade);
	if (g > 100 || g < 0) {
		printf("Invalid grade number. Exit Program.");
		return;
	}
	if (g == 100) {
		printf("Letter Grade: A");
		return;
	}

	switch (grade[0])
	{
		case '9':
			printf("Letter Grade: A");
			break;
		case '8':
			printf("Letter Grade: B");
			break;
		case '7':
			printf("Letter Grade: C");
			break;
		case '6':
			printf("Letter Grade: D");
			break;
		default:
			printf("Letter Grade: F");
			break;
	}

}
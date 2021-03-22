#include <stdio.h>

int main() {

	int grade;

	printf("Enter numerical grade :");
	scanf_s("%d", &grade);

	if (grade < 0 || grade > 100) {
		printf("Error!");
	}

	grade = grade - (grade % 10);

	printf("Letter grade :");

	switch (grade) {

	case 100: case 90:
		printf("A");
		break;

	case 80:
		printf("B");
		break;

	case 70:
		printf("C");
		break;

	case 60:
		printf("D");
		break;

	case 50:
	case 40:
	case 30:
	case 20:
	case 10:
	case 0:
		printf("F");
		break;
	}
}
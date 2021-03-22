// Using the switch statement, write a program that converts a numerical grade into a letter grade.
#include <stdio.h>

int main()
{
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade >= 0 && grade <= 100)
		grade /= 10;

	switch (grade)
	{
	case 10:
	case 9:
		printf("Your grade is A.\n");
		break;
	case 8:
		printf("Your grade is B.\n");
		break;
	case 7:
		printf("Your grade is C.\n");
		break;
	case 6:
		printf("Your grade is A.\n");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		printf("Your grade is F.\n");
		break;
	default:
		printf("Illegal grade.\n");
		break;
	}

	return 0;
}
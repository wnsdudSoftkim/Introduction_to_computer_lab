#include <stdio.h>

int main(void)
{

	int grade;
	int a;

	printf("Enter numerical grade : ");
	scanf_s("%d", &grade);

	a = grade / 10;


	switch (a)
	{

	case 9: case 10:
		printf("Letter grade : A");
		break;
	case 8:
		printf("Letter grade : B");
		break;
	case 7:
		printf("Letter grade : C");
		break;
	case 6:
		printf("Letter grade : D");
		break;
	case 5: case 4: case 3: case 2: case 1: case 0:
		printf("Letter grade : F");
		break;
	default:
		printf("Error");


	}

	return 0;
}
#include<stdio.h>
int main_10(void)
{
	int grade;
	printf("Enter a numeriacl grade: ");
	scanf_s("%d", &grade);

	if (grade < 0 || grade > 100) {
		printf("numerical grade 0 to 100");
		return 0;
	}
	grade = grade - (grade % 10);
	printf("Letter grade: \n");

	switch (grade) {
	case 100: case 90:
		printf("A");
		break;
	case 80:
		printf("B");
		break;
	case70:
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
	return 0;
}
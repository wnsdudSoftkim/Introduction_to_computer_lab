#include <stdio.h>

int main() {
	int n1, n2, m1, m2, a, b;
	char menu,trash;

	printf("Enter two fractions seperated by comma sign(,): ");
	scanf_s("%d/%d,%d/%d", &n1, &n2, &m1, &m2);
	getchar();

	printf("Entering either +,-,* or / between the fractions : ");
	scanf_s("%c", &menu);
	
	switch (menu) {

	case '+':
		a = n1 * m2 + n2 * m1;
		b = n2 * m2;
		printf("Add : %d/%d\n", a, b);
		break;

	case '-':
		a = n1 * m2 - n2 * m1;
		b = n2 * m2;
		printf("Subtract : %d/%d\n", a, b);
		break;

	case '*':
		a = n1 * m1;
		b = n2 * m2;
		printf("Multiply : %d/%d\n", a, b);
		break;

	case '/':
		a = n1 * m2;
		b = n2 * m1;
		printf("Divide : %d/%d\n", a, b);
		break;

	}

	return 0;
}
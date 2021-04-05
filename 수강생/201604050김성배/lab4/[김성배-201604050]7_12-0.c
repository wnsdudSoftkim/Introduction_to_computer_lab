#include <stdio.h>

int main() {
	char ch1, ch2;
	float f1, f2, f3, f4, f5;


	printf("Enter an expression: ");
	scanf_s("%f", &f1);
	scanf_s("%c", &ch1);
	scanf_s("%f", &f2);
	scanf_s("%c", &ch2);
	scanf_s("%f", &f3);

	switch (ch1) {

	case '+': 
		f4 = f1 + f2;
		break;

	case'-':
		f4 = f1 - f2;
		break;

	case'*':
		f4 = f1 * f2;
		break;

	case'/':
		f4 = f1 / f2;
		break;

	}

	switch (ch2) {

	case'+':
		f5 = f4 + f3;
		break;

	case'-':
		f5 = f4 - f3;
		break;

	case'*':
		f5 = f4 * f3;
		break;

	case'/':
		f5 = f4 / f3;
		break;
	}

	printf("value of expression: %.1f", f5);
}
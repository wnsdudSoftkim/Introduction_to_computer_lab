#include <stdio.h>

int main(void) {

	float a; //amount of income
	printf("Enter amount of taxable income: ");
	scanf_s("%f", &a);

	if (a < 750) {
		a = a * 0.01;
		printf("Tax due: %.2f", a);
	}

	else if (a < 2250) {
		a = 7.5 + a * 0.02;
		printf("Tax due: %.2f", a);
	}

	else if (a < 3750) {
		a = 37.50 + a * 0.03;
		printf("Tax due: %.2f", a);
	}

	else if (a < 5250) {
		a = 82.50 + a * 0.04;
		printf("Tax due: %.2f", a);
	}

	else if (a < 7000) {
		a = 142.50 + a * 0.05;
		printf("Tax due: %.2f", a);
	}

	else  {
		a = 230 + a * 0.06;
		printf("Tax due: %.2f", a);
	}
}
#include<stdio.h>
int main(void)
{
	int numerator, denominator, a, b, x;

	printf("Enter a fracion: ");
	scanf_s("%d/%d", &numerator, &denominator);

	a = numerator;
	b = denominator;

	while (b != 0) {
		x = a % b;
		b = x;
	}
	printf("greatest common divisor=%d", a);

	numerator /= a; // �Ҵ翬���� numerator�� a������ ������ �� �ֱ�
	denominator /= a; //// �Ҵ翬���� denomerator�� a������ ������ �� �ֱ�

	printf("ln lowest terms:%d/%d", numerator, denominator);
	
	return 0;
}
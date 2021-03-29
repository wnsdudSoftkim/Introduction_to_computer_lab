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

	numerator /= a; // 할당연산자 numerator를 a값으로 나누어 몫 넣기
	denominator /= a; //// 할당연산자 denomerator를 a값으로 나누어 몫 넣기

	printf("ln lowest terms:%d/%d", numerator, denominator);
	
	return 0;
}
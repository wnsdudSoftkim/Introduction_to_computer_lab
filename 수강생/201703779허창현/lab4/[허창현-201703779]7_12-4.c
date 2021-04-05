#include<stdio.h>

float cal(float x, char op, float y);

int main_12() {
	float n1, n2, n3, r1,r2;
	char op1, op2;
	
	printf("Enter an expression : ");
	
	scanf_s("%f%c%f%c%f", &n1, &op1,1, &n2, &op2,1, &n3);

	r1 = cal(n1, op1, n2);
	r2 = cal(r1, op2, n3);

	printf("Value of expression : %.1f", r2);
}


float cal(float x, char op, float y) {
	float r=0;

	switch (op)
	{
	case '+': r = x + y; break;

	case '-': r = x - y; break;
	case '*': r = x * y; break;

	case '/': r = x / y; break;
	default:
		printf("error");
	}

	return r;
}
#include <stdio.h>

int main() {
	int num1, num2;
	char opt;
	printf("Enter the first integer: ");
	scanf_s("%d", &num1);
	printf("Enter the second integer: ");
	scanf_s("%d", &num2);
	getchar(); //clear buffer!!!
	printf("Enter a operater: ");
	scanf_s("%c", &opt);
	switch (opt) {
	case '+':
		printf("%d+%d=%d",num1,num2, num1 + num2);
		break;
	case '-':
		printf("%d-%d=%d",num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d*%d=%d",num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d+%d=%d",num1, num2, num1 / num2);
		break;
	}
}
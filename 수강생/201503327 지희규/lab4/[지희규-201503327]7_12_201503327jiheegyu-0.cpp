#include <stdio.h>

int main(void)
{
    float num1=0, num2=0, num3=0;
    char operator1, operator2;

    printf("Enter a first num : ");
    scanf_s("%f", &num1);
    printf("Enter a first operation : ");
    scanf_s(" %c", &operator1);
    printf("Enter a second num : ");
    scanf_s("%f", &num2);
    printf("Enter a second operation : ");
    scanf_s(" %c", &operator2);
    printf("Enter a third num : ");
    scanf_s("%f", &num3);

    switch (operator1)
    {
    case '+':
        num1 += num2;
        break;
    case '-':
        num1 -= num2;
        break;
    case '*':
        num1 *= num2;
        break;
    case '/':
        num1 /= num2;
        break;
    }

    switch (operator2)
    {
    case '+':
        num1 += num3;
        break;
    case '-':
        num1 -= num3;
        break;
    case '*':
        num1 *= num3;
        break;
    case '/':
        num1 /= num3;
        break;
    }

    printf("Value of an expression : %.1f", num1);

    return 0;
}
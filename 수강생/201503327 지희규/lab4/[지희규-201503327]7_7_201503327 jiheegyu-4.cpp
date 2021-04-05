#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char a;
    printf("Enter the operation : ");
    scanf_s("%c", &a);
    printf("Enter first fraction : ");
    scanf_s("%d/%d", &num1, &denom1);
    printf("Enter second fraction : ");
    scanf_s("%d/%d", &num2, &denom2);

    switch (a)
    {
    case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("case of add is %d/%d\n\n", result_num, result_denom);
        break;

    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("case of subtract is %d/%d\n\n", result_num, result_denom);
        break;

    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("case of multiply is %d/%d\n\n", result_num, result_denom);
        break;

    case '/':
        result_num = num1 / denom2;
        result_denom = denom1 * num2;
        printf("case of divide is %d/%d\n\n", result_num, result_denom);
        break;
    }

    return 0;
}
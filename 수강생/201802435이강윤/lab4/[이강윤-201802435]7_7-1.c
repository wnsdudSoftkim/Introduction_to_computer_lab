#include <stdio.h>

int main(void)
{
    int num1, num2;
    float divide;
    char operator;

    printf("You'll gonna enter two integers and operator.\n");
    printf("Enter the first Integer : ");
    scanf("%d", &num1);
    getchar();
    printf("Enter the operator you want (+, -, *, /) : ");
    scanf("%c", &operator);
    printf("Enter the second Integer : ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        printf("%d %c %d = %d", num1, operator, num2, (num1 + num2));
        break;
    case '-':
        printf("%d %c %d = %d", num1, operator, num2, (num1 - num2));
        break;
    case '*':
        printf("%d %c %d = %d", num1, operator, num2, (num1 * num2));
        break;
    case '/':
        printf("%d %c %d = %d", num1, operator, num2, (num1 / num2));
        break;
    default:
        printf("Enter an operator between '+'/'-'/'*'/");
        break;
    }

    return 0;
}
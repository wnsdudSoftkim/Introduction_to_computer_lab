#include <stdio.h>

int main(void)
{
    float a, b, c;
    char op1, op2;

    a = b = c = 0;

    printf("\nEnter an expression: ");
    scanf_s(" %f %c %f %c %f", &a, &op1, sizeof(op1), &b, &op2, sizeof(op2), &c);

    switch (op1)
    {
    case '+':
        a += b;
        break;
    case '-':
        a -= b;
        break;
    case '*':
        a *= b;
        break;
    case '/':
        a /= b;
        break;
    default:
        printf("Invalid operator\n");
        return 0;
    }

    switch (op2)
    {
    case '+':
        a += c;
        break;
    case '-':
        a -= c;
        break;
    case '*':
        a *= c;
        break;
    case '/':
        a /= c;
        break;
    default:
        printf("Invalid operator\n");
        return 0;
    }
    printf("Value of an expression: %.1f\n\n", a);

    return 0;
}
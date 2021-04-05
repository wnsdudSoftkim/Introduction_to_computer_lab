#include <stdio.h>

int main(void)
{
    int n1, dn1, n2, dn2, result_n, result_dn;
    char sign;

    printf("\nEnter two fractions separated by a +, -, *, or /: ");
    scanf_s("%d/%d %c %d/%d", &n1, &dn1, &sign, sizeof(sign), &n2, &dn2);

    switch (sign)
    {
    case '+':
        result_n = n1 * dn2 + n2 * dn1;
        result_dn = dn1 * dn2;
        printf("The sum is ");
        break;

    case '-':
        result_n = n1 * dn2 - n2 * dn1;
        result_dn = dn1 * dn2;
        printf("The difference is ");
        break;

    case '*':
        result_n = n1 * n2;
        result_dn = dn1 * dn2;
        printf("The quotient is ");
        break;

    case '/':
        result_n = n1 * dn2;
        result_dn = dn1 * n2;
        printf("The dividend is ");
        break;

    default:
        printf("Invalid input\n");
        return 0;
    }
    printf("%d/%d\n\n", result_n, result_dn);

    return 0;
}
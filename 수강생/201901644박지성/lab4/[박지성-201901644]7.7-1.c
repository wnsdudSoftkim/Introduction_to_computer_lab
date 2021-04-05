#include <stdio.h>
int main(void)
{
    int num1, num2, denom1, denom2, opt;
    printf("Enter the first numerator:");
    scanf_s("%d", &num1);
    printf("Enter the first denominator:");
    scanf_s("%d", &denom1);
    printf("Enter the second numerator:");
    scanf_s("%d", &num2);
    printf("Enter the second denominator:");
    scanf_s("%d", &denom2);

    printf("\nInput your option :\n");
    printf("1:Addition.\n2:Substraction.\n3:Multiplication.\n4:Division.\n5:Exit.\n");
    scanf_s("%d", &opt);
    switch (opt) {
    case 1:
        printf("The Addition of  %d/%d and %d/%d is: %d/%d\n", num1, denom1, num2, denom2, (num1*denom2)+(num2*denom1), denom1*denom2 ); break;
    case 2:
        printf("The Subtraction of %d/%d and %d/%d is: %d/%d\n", num1, denom1, num2, denom2, (num1*denom2)-(num2*denom1), denom1*denom2); break;
    case 3:
        printf("The Multiplication of %d/%d and %d/%d is: %d/%d\n", num1, denom1, num2, denom2, (num1 * num2), (denom1 * denom2)); break;
    case 4:
        if (denom1 == 0 || denom2 == 0)
            printf("Result doesn't exist.\n");
        else
            printf("The Division of %d/%d and %d/%d is : %d/%d\n", num1, denom1, num2, denom2, num1*denom2, denom1*num2);
        break;
    case 5: break;
    default:
        printf("Input correct option\n");
        break;
    }
}
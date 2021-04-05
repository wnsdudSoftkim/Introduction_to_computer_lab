#include <stdio.h>
int main(void)
{
    int num1, num2;
    char opt;
    printf("Enter numerical expression. ");
    scanf_s("%d %c %d", &num1, &opt, 1, &num2);

    if (opt == '+')
        printf("The Addition of  %d and %d is: %d\n", num1, num2, num1 + num2);
    else if (opt == '-')
        printf("The Subtraction of %d  and %d is: %d\n", num1, num2, num1 - num2);
    else if (opt == '*')
        printf("The Multiplication of %d  and %d is: %d\n", num1, num2, num1 * num2);
    else if (opt == '/')
        if (num2 == 0)
            printf("The second integer is zero. Divide by zero.\n");
        else
            printf("The division of %d, and %d is: %d\n", num1, num2, num1 / num2);
    else
        printf("Input correct option. ");
}

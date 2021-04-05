#include <stdio.h>
void main()
{
    int num1, num2=0; 
    char opt;
    printf("Enter :");
    scanf_s("%d", &num1);
    getchar(); 
    scanf_s("%c", &opt);
    scanf_s("%d", &num2);
    
    switch (opt) {
    case '+': 
        printf("The Addition of  %d and %d is: %d\n", num1, num2, num1 + num2); break;
    case '-':
        printf("The Subtraction of %d  and %d is: %d\n", num1, num2, num1 - num2); break;
    case '*':
        printf("The Multiplication of %d  and %d is: %d\n", num1, num2, num1 * num2); break;
    case '/':
        if (num2 == 0)
            printf("The second integer is zero. Divide by zero.\n");
        else
            printf("The Division of %d  and %d is : %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Input correct option\n");
        break;
    }
    return 0;
}
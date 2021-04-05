/* Mathematical operations on fractions */
#include <stdio.h>
void main()
{
    int num1a, num1b, num2a, num2b, opt;
    printf("Enter the first fraction :");
    scanf("%d/%d", &num1a, &num1b);
    printf("Enter the second fraction :");
    scanf("%d/%d", &num2a, &num2b);

    printf("\nInput your option :\n");
    printf("1:Addition.\n2:Substraction.\n3:Multiplication.\n4:Division.\n5:Exit.\n");
    scanf("%d", &opt);
    float res1 = (float)num1a / num1b;
    float res2 = (float)num2a / num2b;
     switch (opt) {
    case 1:
        printf("The Addition of %d/%d and %d/%d is: %f\n", num1a, num1b, num2a, num2b, res1 + res2); break;
    case 2:
        printf("The Subtraction of %d/%d and %d/%d is: %f\n", num1a, num1b, num2a, num2b, res1 - res2); break;
    case 3:
        printf("The Multiplication of %d/%d and %d/%d is: %f\n", num1a, num1b, num2a, num2b, res1 * res2); break;
    case 4:
        if (num1b == 0 || num2b == 0)
            printf("One fraction containz a zero in the denominator. Divide by zero.\n");
        else
            printf("The Division of %d/%d and %d/%d is: %f\n", num1a, num1b, num2a, num2b, res1 * res2); break;
    case 5: break;
    default:
        printf("Input correct option\n");
        break;
    }

}

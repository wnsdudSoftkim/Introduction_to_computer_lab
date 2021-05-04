#include <stdio.h>

int main()
{
    int number;
    //while문을 위한 변수
    int flag = 1;
    int factorial = 1;

    while (flag)
    {
        printf("\nEnter a number: \n");
        scanf("%d", &number);
        int check_Prime = 1;

        if (number <= 1)
        {
            printf("%d is not a prime number", number);
        }

        else
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    printf("%d is not a prime number", number);
                    check_Prime = 0;
                    break;
                }
            }
            if (check_Prime == 1)
            {
                for (int i = 1; i <= number; i++)
                {
                    factorial *= i;
                }
                printf("Factorial of %d is %d", number, factorial);
                flag = 0;
            }
        }
    }
}
#include <stdio.h>

int main(void)
{
    float n, sum;
    char operator;
    printf("Enter an expression: ");
    scanf("%f", &sum);

    while ((operator = getchar()) != '\n')
    {
        switch (operator)
        {
        case '+':
            scanf("%f", &n);
            sum += n;
            break;
        case '-':
            scanf("%f", &n);
            sum -= n;
            break;
        case '*':
            scanf("%f", &n);
            sum *= n;
            break;
        case '/':
            scanf("%f", &n);
            sum /= n;
            break;
        default:
            break;
        }
    }
    printf("Value of expression: %.1f", sum);
    

    return 0;
}
#include <stdio.h>

    int main()
    {
        
        float n1, n2, n3, result=0;

        printf("Enter an expression: ");
        scanf_s("%f+%f*%f", &n1, &n2, &n3);

        result = n1 + n2 * n3;
        printf("Value of expressioqn: %.2f", result);
    }


#include <stdio.h>


int main(void)
{

    int num = 0;
    int nfactorial = 1;

    printf("Enter a number :");
    scanf_s("%d", &num);

    for (int i = num; i > 0; i--)
    {
        nfactorial *= i;
    }

    printf("\n%d factorial is %d\n", num, nfactorial);

    return 0;
}


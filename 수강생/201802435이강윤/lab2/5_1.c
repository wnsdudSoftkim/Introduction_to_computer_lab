#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num / 1000 != 0) 
    {
        printf("The number %d has 4 digits", num);
    }
    else if (num / 100 != 0)
    {
        printf("The number %d has 3 digits", num);
    }
    else if (num / 10 != 0)
    {
        printf("The number %d has 2 digits", num);
    }
    else if (num / 1 != 0)
    {
        printf("The number %d has 1 digits", num);
    }
    

    return 0;
}
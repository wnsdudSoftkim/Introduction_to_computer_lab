#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    if (0<=num && num<=32767)
    {
        printf("%1d", num/(8*8*8*8) %8);
        printf("%1d", num/(8*8*8) %8);
        printf("%1d", num/(8*8) %8);
        printf("%1d", num/8 %8);
        printf("%1d", num %8);
    }
    else
    {
        printf("Your number is out of range.");
    }

    return 0;
}
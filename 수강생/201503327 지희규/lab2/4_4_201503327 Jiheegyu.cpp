#include <stdio.h>

int main(void)
{
    int number, oct1, oct2, oct3, oct4, oct5;

    printf("Enter a number between 0 and 32767 : ");
    scanf_s("%d", &number);

    oct5 = number % 8;
    number /= 8;
    oct4 = number % 8;
    number /= 8;
    oct3 = number % 8;
    number /= 8;
    oct2 = number % 8;
    number /= 8;
    oct1 = number % 8;

    printf("In octal, your number is %d%d%d%d%d", oct1, oct2, oct3, oct4, oct5);

    return 0;
}
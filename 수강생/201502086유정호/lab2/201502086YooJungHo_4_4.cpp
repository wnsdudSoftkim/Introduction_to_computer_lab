
#include <stdio.h>

int main(void)
{
    int decimal, o1, o2, o3, o4, o5;
    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    o5 = decimal % 8;
    decimal /= 8;
    o4 = decimal % 8;
    decimal /= 8;
    o3 = decimal % 8;
    decimal /= 8;
    o2 = decimal % 8;
    decimal /= 8;
    o1 = decimal % 8;

    printf("In octal, your number is %d%d%d%d%d\n\n", o1, o2, o3, o4, o5);
    return 0;
}


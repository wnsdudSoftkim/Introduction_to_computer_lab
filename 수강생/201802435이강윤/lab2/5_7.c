#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int largest, smallest;

    if (num1>=num2 && num1>=num3 && num1 >= num4)
        largest = num1;
    else if (num2>=num1 && num2>=num3 && num2 >= num4)
        largest = num2;
    else if (num3>=num1 && num3>=num2 && num3 >= num4)
        largest = num3;
    else if (num4>=num1 && num4>=num2 && num4 >= num3)
        largest = num4;
    printf("Largest: %d\n", largest);

    if (num1<=num2 && num1<=num3 && num1 <= num4)
        smallest = num1;
    else if (num2<=num1 && num2<=num3 && num2 <= num4)
        smallest = num2;
    else if (num3<=num1 && num3<=num2 && num3 <= num4)
        smallest = num3;
    else if (num4<=num1 && num4<=num3 && num4 <= num2)
        smallest = num4;
    printf("Smallest: %d\n", smallest);

    return 0;
}
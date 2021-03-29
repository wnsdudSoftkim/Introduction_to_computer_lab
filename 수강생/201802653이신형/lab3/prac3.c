#include <stdio.h>

int main(void)

{
    int a, i, j = 2;

    printf("Enter a number:");
    scanf_s("%d", &a);
    i = a - 1;
    while (1) {
        if (j <= i) {
            if (a % j == 0) {
                printf("This is not a prime number");
                break;
            }
            else {
                j++;
            }
        }
        else {
            printf("This is a prime number");
            break;
        }
    }
}
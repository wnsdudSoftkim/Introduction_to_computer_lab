#include <stdio.h>
int main(void) {
    float number, fac = 1.00;
    float result = 1;
    printf("Enter a number : ");
    scanf_s("%f", &number);

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            fac *= j;
        }
        result += 1 / fac;
    }

    printf("%f\n", result);
    return 0;
}
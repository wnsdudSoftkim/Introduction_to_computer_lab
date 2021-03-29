#include <stdio.h>

int main() {
    int den, num, gdc, m, n, g;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    if (den == num) {
        gdc = den;
    }
    else {
        if (num > den) {
            m = num;
            n = den;
        }
        else {
            m = den;
            n = num;
        }
        while(n != 0) {
            g = m % n;
            m = n;
            n = g;
        }
        gdc = m;
    }
    printf("In lowest terms: %d/%d", num / gdc, den / gdc);
}
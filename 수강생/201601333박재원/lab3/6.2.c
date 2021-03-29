#include <stdio.h>

int main() {
    int a, b, m, n, g;

    printf("Enter two numbers: ");
    scanf("%d,%d", &a, &b);
    if (a == b) {
        printf("Greatest common divisor: %d", a);
    }
    else {
        if (a > b) {
            m = a;
            n = b;
        }
        else {
            m = b;
            n = a;
        }
        while(n != 0) {
            g = m % n;
            m = n;
            n = g;
        }
        printf("Greatest common divisor: %d", m);
    }
}
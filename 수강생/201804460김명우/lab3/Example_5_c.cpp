#include <stdio.h>

int main() {

    int n, i;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error!");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d", n, fact);
    }
}
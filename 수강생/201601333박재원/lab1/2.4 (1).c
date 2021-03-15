#include <stdio.h>

int main() {
    float amount = 0.0;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    float withtax = amount * 1.05;
    printf("With tax added: %.2lf", withtax);
}
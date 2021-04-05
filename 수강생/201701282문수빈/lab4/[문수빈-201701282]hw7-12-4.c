#include <stdio.h>

int main(void)
{
    char opt1, opt2;
    float x1, x2, x3, value; 
   
    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", &x1, &opt1, &x2, &opt2, &x3);

    value = x1;

    switch (opt1) {
        case '+':
            value += x2;
            break;
        case '-':
            value -= x2;
            break;
        case '*':
            value *= x2;
            break;
        case '/':
            value /= x2;
            break;
    }

    switch (opt2) {
        case '+':
            value += x3;
            break;
        case '-':
            value -= x3;
            break;
        case '*':
            value *= x3;
            break;
        case '/':
            value /= x3;
            break;
    }

    printf("Value of expression: %.1f\n", value);

    return 0;
} 

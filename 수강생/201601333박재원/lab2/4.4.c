#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    if (num < 0 || num > 32767)
       printf("illegal input: Input should be between 0 and 32767.");

    else {
       int first = num % 8;
       int second = num / 8 % 8;
       int third = num / 8 / 8 % 8;
       int fourth = num / 8 / 8 /8 % 8;
       int fifth = num / 8 / 8 / 8 / 8;
       printf("In octal, your number is: %d%d%d%d%d", fifth, fourth, third, second, first);
    }
}
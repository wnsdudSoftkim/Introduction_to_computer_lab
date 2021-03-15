#include <stdio.h>

int main() {
    int dollar = 0;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    int twenty = dollar / 20;
    int ten = (dollar % 20) / 10;
    int five = (dollar % 20 % 10) / 5;
    int one = (dollar % 20 % 10 % 5) / 1;

    printf("20 bills: %d\n", twenty);
    printf("10 bills: %d\n", ten);
    printf("5 bills: %d\n", five);
    printf("1 bills, %d", one);
}
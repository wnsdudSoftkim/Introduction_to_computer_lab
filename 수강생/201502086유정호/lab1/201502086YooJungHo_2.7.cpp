#include <stdio.h> ////////////////////// Chapter2 Question 2.7

int main(void)
{
    int dollars, twenties, tens, fives;

    printf("\nEnter a dollar amount: ");
    scanf_s("%d", &dollars);

    twenties = dollars / 20;
    dollars = dollars - (twenties * 20);
    tens = dollars / 10;
    dollars = dollars - (tens * 10);
    fives = dollars / 5;
    dollars = dollars - (fives * 5);

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n $5 bills: %d", fives);
    printf("\n $1 bills: %d\n\n", dollars);

    return 0;
}
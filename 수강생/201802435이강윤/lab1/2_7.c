#include <stdio.h>

int main()
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int a, b, c, d;

    a = amount / 20;
    amount -= 20*a;
    b = amount / 10;
    amount -= 10*b;
    c = amount / 5;
    amount -= 5*c;
    d = amount / 1;

    printf("&20 bills: %d\n", a);
    printf("&10 bills: %d\n", b);
    printf("&5 bills: %d\n", c);
    printf("&1 bills: %d\n", d);

    return 0;

}
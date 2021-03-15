#include <stdio.h>
int main_e(void)
{
    int dollar, bills;

    printf("Enter a dollar amount: \n");
    scanf_s("%d", &dollar);

    bills = dollar / 20;
    printf("$20 bills: %d\n", bills);

    dollar = dollar - (bills * 20);
    bills = dollar / 10;
    printf("$10 bills: %d\n", bills);

    dollar = dollar - (bills * 10);
    bills = dollar / 5;
    printf("$5 bills: %d\n", bills);

    dollar = dollar - (bills * 5);
    bills = dollar / 1;
    printf(" $1 bills: %d", bills);

    return 0;
}
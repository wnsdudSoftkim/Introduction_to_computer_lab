/*
#include <stdio.h>

int main(void)
{
    int d, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, f_sum, s_sum, total;

    printf("\nEnter the first 11 digits of a UPC: ");
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d, &a1, &a2, &a3, &a4, &a5, &b1, &b2, &b3, &b4, &b5);

    f_sum = d + a2 + a4 + b1 + b3 + b5;
    s_sum = a1 + a3 + a5 + b2 + b4;
    total = 3 * f_sum + s_sum;

    printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));

    return 0;
}
*/
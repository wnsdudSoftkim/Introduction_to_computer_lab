/*
#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, f_sum, s_sum, total;

    printf("\nEnter the first 12 digits of an EAN: ");
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12);

    f_sum = a2 + a4 + a6 + a8 + a10 + a12;
    s_sum = a1 + a3 + a5 + a7 + a9 + a11;
    total = 3 * f_sum + s_sum;

    printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));
    return 0;
}
*/
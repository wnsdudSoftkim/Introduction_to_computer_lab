#include <stdio.h>

int main(void)
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b, c, total;

    printf("Enter the first 11 digits of a UPC : ");
    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11);

    b = a1 + a3 + a5 + a7 + a9 + a11;
    c = a2 + a4 + a6 + a8 + a10;
    total = 3 * b + c;

    printf("Check digit : %d", 9 - ((total - 1) % 10));

    return 0;
}


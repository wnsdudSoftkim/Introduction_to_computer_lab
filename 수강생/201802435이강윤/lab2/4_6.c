#include <stdio.h>

int main(void)
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12);

    int sum, remainder;
    sum = a2 + a4 + a6 + a8 + a10 + a12; // odd_number_sum
    sum *= 3;                           // odd_number_sum * 3
    sum += a1 + a3 + a5 + a7 + a9 + a11;     // 3*odd_number + even_number
    sum -= 1;                           // sum - 1
    
    remainder = sum % 10;

    int check_point;
    check_point = 9 - remainder;

    printf("Check digit: %d", check_point);
    

    return 0;
}
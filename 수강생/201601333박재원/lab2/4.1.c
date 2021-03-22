#include <stdio.h>

int main() {
    int num = 10;
    printf("Enter a two-digit number: ");
    scanf("%2d", &num);

    int s_num = num % 10;
    int f_num = num / 10;

    printf("The reversal is: %d%d", s_num, f_num);
}
#include <stdio.h>

int main(void) {
    int n, num1, denom1, num2, denom2, result_num, result_denom;

    printf("1: add\n2: subtract\n3: multiply\n4: divide\n");
    printf("Choice what you want to calculate with fraction: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter two fractions connected by +: ");
            scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;

        case 2:
            printf("Enter two fractions connected by -: ");
            scanf("%d/%d - %d/%d", &num1, &denom1, &num2, &denom2);

            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        
        case 3:
            printf("Enter two fractions connected by *: ");
            scanf("%d/%d * %d/%d", &num1, &denom1, &num2, &denom2);

            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;

        case 4:
            printf("Enter two fractions connected by /: ");
            scanf("%d/%d / %d/%d", &num1, &denom1, &num2, &denom2);

            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
    }

    printf("The sum is %d/%d\n", result_num, result_denom);
}
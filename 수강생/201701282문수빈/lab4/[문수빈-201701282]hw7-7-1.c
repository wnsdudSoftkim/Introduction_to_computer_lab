#include <stdio.h>

int main(void)
{
    int n1, y1, n2, y2, result_n, result_y, x, y, remainder;
    char opt;

    printf("Enter two fractions\n");
    printf("plus (+), minus (-), multiply (*), or divide (/): ");

    scanf("%d/%d%c%d/%d", &n1, &y1, &opt, &n2, &y2);

    switch (opt) {
        case '+': 
            result_n = n1 * y2 + n2 * y1;
            result_y = y1 * y2;
            printf("The sum is \n");    
            break;
        case '-':
            result_n = n1 * y2 - n2 * y1;
            result_y = y1 * y2;
            printf("The difference is \n");    
            break;
        case '*':
            result_n = n1 * n2;
            result_y = y1 * y2;
            printf("The product is \n");    
            break;
        case '/':
            result_n = n1 * y2;
            result_y = y1 * n2;
            printf("The quotient is \n");    
            break;
        default:
            printf("\nInvalid operator\n");
            return 0;
        }

    x = result_n;
    y = result_y;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }       

    printf("%d/%d\n", result_n /= x, result_y /= x);

    return 0;
}

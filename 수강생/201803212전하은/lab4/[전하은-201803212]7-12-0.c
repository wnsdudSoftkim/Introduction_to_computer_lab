#include <stdio.h>

int main(void)
{
    char ch;
    double current, num;
    printf("Enter an expression: ");
    scanf_s("%lf", &current);
    ch = getchar();
    
    do {
        
        if (ch == '+') {
            scanf_s("%lf", &num);
            current = current+ num;
            
        }
        else if (ch == '-') {
            scanf_s("%lf", &num);
            current -= num;
            
        }
        else if (ch == '*') {
            scanf_s("%lf", &num);
            current *= num;
            
        }
        else if (ch == '/') {
            scanf_s("%lf", &num);
            current /= num;
            
        }
        
        ch = getchar();
        
    } while (ch != '\n');

    printf("Value of expression: %.1lf", current);


    return 0;
}
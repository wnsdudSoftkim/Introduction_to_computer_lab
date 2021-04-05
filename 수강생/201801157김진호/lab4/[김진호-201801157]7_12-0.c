#include <stdio.h>

int main() {
	
    float first,second;
	char opt;
    
    printf("Enter an expression: ");
    scanf_s("%f", &first);
    
    while ((opt=getchar()) != '\n') {
        switch (opt)
        {
        case '+':
            scanf_s("%f", &second);
            first = first + second;
            break;
        case '-':
            scanf_s("%f", &second);
            first = first - second;
            break;
        case '*':
            scanf_s("%f", &second);
            first = first * second;
            break;
        case '/':
            scanf_s("%f", &second);
            first = first / second;
            break;
        default:
            break;
        }
	}
    printf("Value of expression: %.1f", first);

}
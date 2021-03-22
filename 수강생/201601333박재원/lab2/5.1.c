#include <stdio.h>

int main() {
    int num = 0;
    int dig = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 <= num && num <= 9) {
        dig = 1;
    }

    else if (10 <= num && num <= 99) {
        dig = 2;
    }

    else if (100 <= num && num <= 999) {
        dig = 3;
    }

    else {
        dig = 0;
        printf("Error: The input should have less than 4 digits.");
    }

    printf("The number %d has %d digits", num, dig);
}
#include <stdio.h>

int main() {
    float num;
    float m = 0;

    while(1) {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num == 0) {
            printf("The largest number entered was %f", m);
            break;
        }
        if (m < num) m = num;

    }
}
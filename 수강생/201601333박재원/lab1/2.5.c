#include <stdio.h>

int main() {
    int x = 0;
    scanf("%d", &x);
    int val_1 = 3 * x * x * x * x * x;
    int val_2 = val_1 + (2 * x * x * x * x);
    int val_3 = val_2 - (5 * x * x * x);
    int val_4 = val_3 - (x * x);
    int val_5 = val_4 + (7 * x) - 6;
    printf("%d", val_5);
}
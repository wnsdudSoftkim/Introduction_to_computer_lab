#include <stdio.h>

int main() {
    int x, y, z, c = 0;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &x, &y, &z, &c);

    if (x > y && x > z && x > c) {
        if (y < z && y < c) printf("Largest: %d \nSmallest: %d", x, y);
        else if (z < c) printf("Largest: %d \nSmallest: %d", x, z);
        else printf("Largest: %d \nSmallest: %d", x, c);
    }
    else if (y > z && y > c) {
        if (x < z && x < c) printf("Largest: %d \nSmallest: %d", y, x);
        else if (z < c) printf("Largest: %d \nSmallest: %d", y, z);
        else printf("Largest: %d \nSmallest: %d", y, c);
    }
    else if (z > c){
        if (x < y && x < c) printf("Largest: %d \nSmallest: %d", z, x);
        else if (y < c) printf("Largest: %d \nSmallest: %d", z, y);
        else printf("Largest: %d \nSmallest: %d", z, c);
    }
    else {
        if (x < y && x < z) printf("Largest: %d \nSmallest: %d", c, x);
        else if (y < z) printf("Largest: %d \nSmallest: %d", c, y);
        else printf("Largest: %d \nSmallest: %d", c, z);
    }
}
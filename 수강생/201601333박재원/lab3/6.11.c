#include <stdio.h>

int main() {
    float n, m, x, z = 0;
    float y = 1;

    printf("Enter a integer: ");
    scanf("%f", &n);

    while (m < n) {
        m++;

        if (m > n)
            break;
        else {
            x = m;
            z = x;
            while (x != 1) {

                if (x == 1) break;

                z = z * (x - 1);
                x--;
            }
 
        }
        y = y + 1 / z;
    }

    printf("The answer is: %f", y);

}
#include <stdio.h>

int main() {
    int size[6];
    int i;
    size[0] = sizeof(int);
    size[1] = sizeof(short);
    size[2] = sizeof(long);
    size[3] = sizeof(float);
    size[4] = sizeof(double);
    size[5] = sizeof(long double);

    for (i = 0; i < 6; i++) {
        printf("%d\n", size[i]);
    }
}
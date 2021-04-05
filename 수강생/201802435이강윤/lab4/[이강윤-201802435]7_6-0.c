#include <stdio.h>

int main(void)
{
    short a;
    int b;
    long c;
    
    float d;
    double e;
    long double f;

    printf("sizeof(short): %d\n", sizeof(a));
    printf("sizeof(int): %d\n", sizeof(b));
    printf("sizeof(long): %d\n", sizeof(c));
    printf("sizeof(float): %d\n", sizeof(d));
    printf("sizeof(double): %d\n", sizeof(e));
    printf("sizeof(long dou-ble): %d\n", sizeof(f));

    return 0;
}

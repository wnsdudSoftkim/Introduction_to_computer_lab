#include <stdio.h>

int main(void)
{
    printf("int : %d\n", sizeof(int));
    printf("short : %d\n", sizeof(short));
    printf("long : %d\n", sizeof(long));
    printf("float : %d\n", sizeof(float));
    printf("double : %d\n", sizeof(double));
    printf("long double : %ld", sizeof(long double));

    return 0;
}

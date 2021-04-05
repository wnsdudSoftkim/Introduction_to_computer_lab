#include <stdio.h>

int main(void)
{
    printf("\nsizeof:\n");
    printf("int - %ld\n", sizeof(int));
    printf("short - %ld\n", sizeof(short));
    printf("long - %ld\n", sizeof(long));
    printf("float - %ld\n", sizeof(float));
    printf("double - %ldn", sizeof(double));
    printf("long double - %ld\n\n", sizeof(long double));

    return 0;
}
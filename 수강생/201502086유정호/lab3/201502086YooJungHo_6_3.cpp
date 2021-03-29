#include <stdio.h>

int main(void)
{
    int m,n,remain,m1,n2;

    printf("\nEnter a fraction: ");
    scanf_s("%d/%d", &m, &n);
    m1 = m;
    n2 = n;

    do
    {
        remain = m % n;
        m = n;
        n = remain;
    } while (n != 0);

    m1 /= m;
    n2 /= m;

    printf("In lowest terms: %d/%d\n\n", m1, n2);

    return 0;
}
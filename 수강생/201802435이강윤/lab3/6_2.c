#include <stdio.h>
#define min(a,b)  (((a)<(b))?(a):(b))

int main()
{
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    int div_num;
    int stack;

    if (m == 0)
        stack = n;
    else if (n == 0)
        stack = m;
    else { // m과 n 둘 다 0이 아닐 때.
        div_num = 1;
        while (div_num <= min(m,n))
        {
            if (m % div_num == 0 && n % div_num == 0)  // 둘 다 나누어 떨어질 때,
            {
                stack = div_num;
                div_num++;
            }
            else
                div_num++;
        }
    }
    
    printf("Greatest common divisor: %d", stack);
    return 0;
}
#include <stdio.h>
#define min(a,b)  (((a)<(b))?(a):(b))

int main()
{
    int m, n;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    int div_num;
    int stack;
    
    // 최대공약수를 구하는 method
    if (m == 0)
        div_num = n;
    else if (n == 0)
        div_num = m;
    else
    {
        div_num = 1;
        while (div_num <= min(m,n))
        {
            if (m % div_num == 0 && n % div_num == 0)
            {
                stack = div_num;
                div_num++;
            }
            else
                div_num++;
        }
    }
    
    printf("in lowest terms: %d/%d", m/stack, n/stack);
    return 0;
}
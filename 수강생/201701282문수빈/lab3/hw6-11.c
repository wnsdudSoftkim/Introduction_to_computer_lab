#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float e = 1.00f;
    int n, i, j;

 
    printf("n is an integer entered by the user: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for(j = i; j > 0; j--)
        {
        	printf("1/%d + ",j);
            e += (1/(float)j);
        }
        printf("\n");
    }

    printf("e equals %f\n", e);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, large, small;

    printf("Enter four integers : ");
    scanf_s("%d %d %d %d", &i1, &i2, &i3, &i4);

    large = small = i1;

    if (large < i2)
    {
        large = i2;
    }
    if (large < i3)
    {
        large = i3;
    }
    if (large < i4)
    {
        large = i4;
    }
    if (small > i2)
    {
        small = i2;
    }
    if (small > i3)
    {
        small = i3;
    }
    if (small > i4)
    {
        small = i4;
    }

    printf("Largest : %d\nSmallest : %d", large, small);

    return 0;
}
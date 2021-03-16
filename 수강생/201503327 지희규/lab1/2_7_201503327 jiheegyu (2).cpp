# include <stdio.h>

int main(void)
{
    int dollar, a, b, c, d;

    printf("Enter a dollar amount : ");
    scanf("%d", &dollar);

    a = dollar / 20;
    dollar = dollar - a * 20;
    b = dollar / 10;
    dollar = dollar - b * 10;
    c = dollar / 5;
    d = dollar - c * 5;

    printf("$20 bills : %d\n", a);
    printf("$10 bills : %d\n", b);
    printf("$5 bills : %d\n", c);
    printf("$1 bills : %d\n", d);

    return 0;
}







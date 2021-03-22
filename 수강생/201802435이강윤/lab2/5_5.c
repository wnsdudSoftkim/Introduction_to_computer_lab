#include <stdio.h>

int main(void)
{
    int income;
    printf("Enter the amount of taxable income: $");
    scanf("%d", &income);

    // Same with 5_4, There are too many range-set to use 'switch'.
    if (income<750)
    {
        printf("1%% of income");
    }
    else if (income>=750 && income<=2250)
    {
        printf("$%-7.2fplus 2%% of amount over $750", 7.50);
    }
    else if (income>2250 && income<=3750)
    {
        printf("$%-7.2fplus 3%% of amount over $2,250", 37.50);
    }
    else if (income>3750 && income<=5250)
    {
        printf("$%-7.2fplus 4%% of amount over $3,750", 82.50);
    }
    else if (income>5250 && income<=7000)
    {
        printf("$%-7.2fplus 5%% of amount over $5,250", 142.50);
    }
    else
    {
        printf("$%-7.2fplus 6%% of amount over $7,000", 230.00);
    }

    
    return 0;
}
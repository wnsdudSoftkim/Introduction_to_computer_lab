// 한 주에서 독신 거주자는 다음과 같은 소득세가 부과됩니다.
// Income     Amount of tax
// not over $750      1% of income
// $750~#2,250    $7.50 plus 2% of amount over $750
// $2,250~#3,750    $37.50 plus 3% of amount over $2,250
// ~~~
// 사용자에게 과세 소득 금액을 입력하도록
//  요청한 다음 세금을 표시하는 프로그램을 작성합니다.
#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter amount of income : ");
    scanf_s("%f", &income);

    if (income < 750)
    {
        tax = income * 0.01;
    }
    else if (income >= 750 && income <= 2250)
    {
        tax = 7.50 + ((income - 750) * 0.02);
    }
    else if (income >= 2250 && income <= 3750)
    {
        tax = 37.50 + ((income - 2250) * 0.02);
    }
    else if (income >= 3750 && income <= 5250)
    {
        tax = 82.50 + ((income - 3750) * 0.02);
    }
    else if (income >= 5250 && income <= 7000)
    {
        tax = 142.50 + ((income - 5250) * 0.02);
    }
    else if (income > 7000)
    {
        tax = 230.50 + ((income - 7000) * 0.02);
    }

    printf("Tax due : $%.2f", tax);

    return 0;
}


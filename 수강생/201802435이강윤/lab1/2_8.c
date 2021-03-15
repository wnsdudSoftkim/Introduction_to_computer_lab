#include <stdio.h>

int main()
{
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan); // 대출금
    printf("Enter interest rate: ");
    scanf("%f", &rate); // 이자율
    printf("Enter monthly payment: ");
    scanf("%f", &payment); // 결제 금액

    /*
    계산 정리 :
    매월 잔액 = 결제 금액만큼 감소.
    월간 이자율을 찾기 위해서 : 잔액 * 월 이자율로 증가.
    월간 이자율 = 0.06 / 12
    */

   float first_payment, second_payment, third_payment;
   float interest_rate_one, interest_rate_two, interest_rate_three;

   interest_rate_one = loan * 0.005;
   first_payment = loan - payment + interest_rate_one;
   printf("Balance remaining after first payment: $%.2f\n", first_payment);

   interest_rate_two = first_payment * 0.005;
   second_payment = first_payment - payment + interest_rate_two;
   printf("Balance remaining after second payment: $%.2f\n", second_payment);

   interest_rate_three = second_payment * 0.005;
   third_payment = second_payment - payment + interest_rate_three;
   printf("Balance remaining after third payment: $%.2f", third_payment);
   

    return 0;

}
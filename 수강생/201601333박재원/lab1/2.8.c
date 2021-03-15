#include <stdio.h>
 
 
int main()
{
    float amount = 0.00;
    float rate = 0.00;
    float payment = 0.00;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthlyRate = rate * 0.01 / 12;

    float afterFirst = amount + amount * monthlyRate - payment;
    float afterSecond = afterFirst + afterFirst * monthlyRate - payment;
    float afterThird = afterSecond + afterSecond * monthlyRate - payment;

    printf("Balance remaining after first payment: %.2lf\n", afterFirst);
    printf("Balance remaining after second payment: %.2lf\n", afterSecond);
    printf("Balance remaining after third payment: %.2lf", afterThird);
}
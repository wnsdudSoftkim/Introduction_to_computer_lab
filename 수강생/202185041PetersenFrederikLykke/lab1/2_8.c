/* Remaining balance calculator */

#include <stdio.h>

int main(void)
{
  float loan, interest, payment;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  interest = 1 + (interest/100/12);

  float first, second, third;
  first = (loan - payment)*interest;
  second = (first - payment)*interest;
  third = (second - payment)*interest;

  printf("Balance remaining after first payment: $%.2f\n", first);
  printf("Balance remaining after second payment: $%.2f\n", second);
  printf("Balance remaining after third payment: $%.2f\n",third);

  return 0;
}

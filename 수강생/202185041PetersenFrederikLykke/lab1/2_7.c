/* Dollar bills calculator */

#include <stdio.h>

int main(void)
{
  int amount;
  printf("Enter amount in whole dollars: ");
  scanf("%d", &amount);
  int twenties = amount / 20;
  amount -= 20*twenties;
  int tens = amount / 10;
  amount -= 10*tens;
  int fives = amount / 5;
  amount -= 5*fives;
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", amount);

  return 0;
}

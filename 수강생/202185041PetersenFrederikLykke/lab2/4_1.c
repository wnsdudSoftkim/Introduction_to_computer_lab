/* Digit reverser */

#include <stdio.h>

int main(void)
{
  int x, n1, n2;
  printf("Enter a two-digit number: ");
  scanf("%d", &x);
  n1 = x / 10;
  n2 = x % 10;
  printf("The reversal is %d%d\n", n2, n1);
  return 0;
}

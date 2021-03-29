/* The program reduces inputted fraction to the lowest terms */

#include <stdio.h>

int main(void)
{
  //Computing the GCD
  int a, b, m, n, n_new, gcd;
  printf("Enter a fraction: ");
  scanf("%d/%d", &a, &b);
  n = a;
  m = b;
  while(n != 0){
    n_new = m % n;
    m = n;
    n = n_new;
  }
  gcd = m;

  printf("In lowest terms: %d/%d\n", a/gcd, b/gcd);

  return 0;
}

/* GCD (Greatest common divisor) finder */
#include <stdio.h>

int main(void)
{
  int m, n, n_new;
  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);
  while(n != 0){
    n_new = m % n;
    m = n;
    n = n_new;
  }
  printf("Greatest common divisor %d\n", m);
  return 0;
}

/* sizeof different types is printed  */
#include <stdio.h>

int main(void)
{
  int i = 0;
  short j = 0;
  long k = 0;
  float l = 0;
  double m = 'a';
  long double n = 0;
  printf("Size of int: %ld\n", sizeof(i));
  printf("Size of short: %ld\n", sizeof(j));
  printf("Size of long: %ld\n", sizeof(k));
  printf("Size of float: %ld\n", sizeof(l));
  printf("Size of double: %ld\n", sizeof(m));
  printf("Size of long double: %ld\n", sizeof(n));

  return 0;
}

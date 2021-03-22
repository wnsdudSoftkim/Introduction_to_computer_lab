#include <stdio.h>
 
int main(void)
{
  long long int digits = 0;
  printf("Enter the first 11 digits of a UPC: ");
  scanf("%11lld", &digits);
  
  int d = digits / 10000000000;

  int i1 = digits % 10000000000 / 1000000000;
  int i2 = digits % 10000000000 % 1000000000 / 100000000;
  int i3 = digits % 10000000000 % 1000000000 % 100000000 / 10000000;
  int i4 = digits % 10000000000 % 1000000000 % 100000000 % 10000000 / 1000000;
  int i5 = digits % 10000000000 % 1000000000 % 100000000 % 10000000 % 1000000 / 100000;

  int v = digits % 10000000000 % 1000000000 % 100000000 % 10000000 % 1000000 % 100000;

  int j1 = v / 10000;
  int j2 = v % 10000 / 1000;
  int j3 = v % 10000 % 1000 / 100;
  int j4 = v % 10000 % 1000 % 100 / 10;
  int j5 = v % 10000 % 1000 % 100 % 10;
  
  int first_sum = d + i2 + i4 + j1 + j3 + j5;
  int second_sum = i1 + i3 + i5 + j2 + j4;
  int total = 3 * first_sum + second_sum;

 
  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
 
  return 0;
}
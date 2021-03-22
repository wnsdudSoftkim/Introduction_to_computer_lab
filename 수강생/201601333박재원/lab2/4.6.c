# include <stdio.h>

int main(void)
{
  long long digits = 0;
  printf("Enter the first 12 digits of a EAN: ");
  scanf("%12lld", &digits);
  
  int i1 = digits / 100000000000;
  int i2 = digits % 100000000000 / 10000000000;
  int i3 = digits % 100000000000 % 10000000000 / 1000000000;
  int i4 = digits % 100000000000 % 10000000000 % 1000000000 / 100000000;
  int i5 = digits % 100000000000 % 10000000000 % 1000000000 % 100000000 / 10000000;
  int i6 = digits % 100000000000 % 10000000000 % 1000000000 % 100000000 % 10000000 / 1000000;

  int v = digits % 100000000000 % 10000000000 % 1000000000 % 100000000 % 10000000 % 1000000;

  int i7 = v / 100000;
  int i8 = v % 100000 / 10000;
  int i9 = v % 100000 % 10000 / 1000;
  int i10 = v % 100000 % 10000 % 1000 / 100;
  int i11 = v % 100000 % 10000 % 1000 % 100 / 10;
  int i12 = v % 100000 % 10000 % 1000 % 100 % 10;
  
  int first_sum = i2 + i4 + i6 + i8 + i10 + i12;
  int second_sum = i1 + i3 + i5 + i7 + i9 + i11;
  int total = 3 * first_sum + second_sum;

 
  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
 
  return 0;
}
/* Octal converter */

#include <stdio.h>

int main(void)
{
  int base10, base81, base82, base83, base84, base85;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &base10);
  base81 = base10/8/8/8/8;
  base82 = (base10 - base81*8*8*8*8)/8/8/8;
  base83 = (base10 - base81*8*8*8*8 - base82*8*8*8)/8/8;
  base84 = (base10 - base81*8*8*8*8 - base82*8*8*8 - base83*8*8)/8;
  base85 = (base10 - base81*8*8*8*8 - base82*8*8*8 - base83*8*8 - base84*8);

  printf("In octal, your number is: %d%d%d%d%d", base81, base82, base83, base84, base85);
  return 0;
}

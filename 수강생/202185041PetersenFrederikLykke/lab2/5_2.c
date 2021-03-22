/* Displaying time in 12-hour format */

#include <stdio.h>

int main(void)
{
  int h, m, h12, x;
  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d",&h,&m);
  if(h < 12 || h == 24)
    x = 0;
  else if(h >= 12)
    x = 1;

  if(x == 0)
    printf("Equivalent 12-hour time: %d:%d AM",h+12,m);
  else if(x == 1 && h != 12)
    printf("Equivalent 12-hour time: %d:%d PM",h-12,m);
  else
    printf("Equivalent 12-hour time: %d:%d PM",h,m);

  return 0;
}

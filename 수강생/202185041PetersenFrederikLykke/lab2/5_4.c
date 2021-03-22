/* Interpreting the Beaufort scale" */
#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter wind speed in knots: ");
  scanf("%d", &x);
  printf("The Beaufort scale describes the wind as ");
  if(x < 1)
    printf("calm\n");
  else if(x < 4)
    printf("light air\n");
  else if(x < 28)
    printf("a breeze\n");
  else if(x < 48)
    printf("a gale\n");
  else if(x >= 48)
    printf("a hurricane\n");


  return 0;
}

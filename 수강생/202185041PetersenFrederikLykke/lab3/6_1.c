/* Largest number finder */
#include <stdio.h>

int main(void)
{
  float current, largest;
  current = 0;
  while(1){
    printf("Enter a number: ");
    scanf("%f", &current);
    if(current <= 0)
      break;
    else if(current > largest)
      largest = current;
  }
  printf("The largest number enteres was %f", largest);
  return 0;
}

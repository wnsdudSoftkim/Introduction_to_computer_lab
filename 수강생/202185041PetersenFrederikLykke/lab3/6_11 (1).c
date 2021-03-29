/* Calculation of the constant e */
#include <stdio.h>

int main(void)
{
  float e = 1.0;
  int n;
  printf("Enter the number of fracions of the infinite series\n");
  printf("you wish to summarize in approximating e: ");
  scanf("%d", &n);
  int i, j, fact;
  for(i = 1; i <= n; i++){
    fact = 1;
    for(j = i; j>0; j--){
      fact *= j;
    }
    e = e + 1.0/fact;
  }
  printf("The approximated e is: %f\n", e);

  return 0;
}

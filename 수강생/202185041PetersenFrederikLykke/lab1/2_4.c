/* Tax addition calculator */

#include <stdio.h>

int main(void){

  float amount;

  printf("Enter amount to be taxed: ");
  scanf("%f", &amount);
  float tax_add = amount * 1.05;
  printf("5 tax added: %.2f", tax_add);

  return 0;
}

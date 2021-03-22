/* Tax due calculator" */
#include <stdio.h>

int main(void)
{
  float x, due, plus;
  printf("Enter amount of taxable income: ");
  scanf("%f", &x);
  printf("The tax due is: ");
  if(x <= 750){
    due = x * 0.01;
    printf("$%.2f\n", due);
  }
  else if(x < 2250){
    due = 7.5 + (x - 750)*0.02;
    printf("$%.2f\n", due);
  }
  else if(x < 3750){
    due = 37.5 + (x - 2250)*0.03;
    printf("$%.2f\n", due);
  }
  else if(x < 5250){
    due = 82.5 + (x - 3750)*0.04;
    printf("$%.2f\n", due);
  }
  else if(x < 7000){
    due = 142.5 + (x - 5250)*0.05;
    printf("$%.2f\n", due);
  }
  else if(x >= 7000){
    due = 230 + (x - 7000)*0.06;
    printf("$%.2f\n", due);
  }




  return 0;
}

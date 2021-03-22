/* Largest and smallest integer finder */
#include <stdio.h>

int main(void)
{
  int a, b, c, d, smallest1, largest1, smallest2, largest2, smallest, largest;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a,&b,&c,&d);
  printf("%d %d %d %d\n",a,b,c,d);

  if(a > b){
    smallest1 = b;
    largest1 = a;
  }
  else{
    smallest1 = a;
    largest1 = b;
  }
  if(c > d){
    smallest2 = d;
    largest2 = c;
  }
  else{
    smallest2 = c;
    smallest2 = d;
  }
  if(smallest1 < smallest2){
    smallest = smallest1;
  }
  else{
    smallest = smallest2;
  }
  if(largest1 > largest2){
    largest = largest1;
  }
  else{
    largest = largest2;
  }
  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}

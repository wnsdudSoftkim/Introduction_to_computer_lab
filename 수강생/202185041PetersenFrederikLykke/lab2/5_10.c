/* Grade converter from numerical to letter */
#include <stdio.h>

int main(void)
{
  int i, tens;
  char grade;
  printf("Enter numerical grade: ");
  scanf("%d", &i);
  if(i < 0 || i > 100){
    printf("Input out of bounds");
  }
  else{
    tens = i / 10;
    switch (tens){
      case 10: grade = 'A'; break;
      case 9: grade = 'A'; break;
      case 8: grade = 'B'; break;
      case 7: grade = 'C'; break;
      case 6: grade = 'D'; break;
      default: grade = 'F'; break;
    }

    printf("Letter grade: %c\n", grade);
  }
  return 0;
}

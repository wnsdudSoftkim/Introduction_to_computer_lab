/* Mathematical expression evaluator "without precedence"  */
#include <stdio.h>

int main(void)
{
float b, res;
char op;
printf("Enter an expression: ");
scanf("%f",&res);
while(1){
  op = getchar();
  if(op == '\n'){
    break;
  }
  scanf("%f",&b);
  if(op == '+'){
    res = res + b;
  }else if(op == '-'){
    res = res - b;
  }else if(op == '*'){
    res = res * b;
  }else if(op == '/'){
    res = res / b;

  }else{
    printf("Illegal operator");
  }
}
printf("Value of expression: %f\n", res);

  return 0;
}

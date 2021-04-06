//TEST 1
//곱셈 및 나눗셈이 존재할 때
//TEST 2
//더하기 빼기 만 존재할 때


float calculate(float num1, float num2,char oper) {
    printf("\n%f,%f,%c\n",num1,num2,oper);
    if(oper=='*') return num1*num2;
    else if(oper=='/') return num1/num2;
    else if(oper=='+') return num1+num2;
    else if(oper=='-') return num1 - num2;
}
int main() {
    float num[3];
    char oper[2];
    float answer=0.0;
    printf("Enter an expression : ");
    scanf("%f%c%f%c%f",&num[0],&oper[0],&num[1],&oper[1],&num[2]);
    int count =  sizeof(oper)/sizeof(char);
    //1. 곱/나눗셈 이 존재 : 곱셈과 나눗셈을 탐색하는 for문
    for(int i=0; i<count; i++) {
        if(oper[i]=='*' || oper[i]=='/'){
            //answer값이 비어있을때 num값들이 인자로 들어감
            if(answer==0.0) {
                answer = calculate(num[i],num[i+1],oper[i]);
                num[i] = num[i+1] = 0;
            }else {
                answer = calculate(answer,num[i+1],oper[i]);
                num[i+1]=0;
            }
        }
    }
    //2. 곱/나눗셈 이 존재 x: 곱하기와 나누기를 완료하고 남은 식
    for(int i=0; i<count; i++) {
        if(num[i]!=0) {
            answer = calculate(num[i],answer,oper[i]);
        }
    }
    //항상 num요소는 oper요소보다 1개 많으니
    //마지막 덧셈 or 뺄셈 에 걸린 num요소가 남은 경우
    if(num[count]!=0) {
        answer=calculate(num[count],answer,oper[count-1]);
    }
    printf("%f",answer);
}

// int main(void)
// {
//   float value, operand;
//   char operator;

//   printf("Enter an expression: ");

//   /* Read first operand */
//   scanf("%f ", &value);

//   /* Read successive operators and operands */
//   while ((operator = getchar()) != '\n') {
//     if (operator == ' ')
//       continue;
//     scanf("%f", &operand);
//     switch (operator) {
//       case '+': value += operand; break;
//       case '-': value -= operand; break;

//       case '*': value *= operand; break;
//       case '/': value /= operand; break;
//     }
//   }

//   /* Print result */
//   printf("Value of expression: %g\n", value);

//   return 0;
// }
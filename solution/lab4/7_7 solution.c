#include <stdio.h>

int main() {
	int numerator1,denominator1, numerator2,denominator2;
    char oper;
	printf("Enter a fraction : ");
	scanf("%d/%d", &numerator1, &denominator1);
	printf("Enter a fraction2 : ");
	scanf("%d/%d", &numerator2, &denominator2);
    printf("Enter operator(+,-,*,/) : ");
    scanf("%c",&oper);
    if(oper=='+') {
        numerator1 = numerator1*denominator2 + numerator2*denominator1;
        denominator1 = denominator1*denominator2;
    }else if(oper=='-') {
        numerator1 = numerator1*denominator2 - numerator2*denominator1;
        denominator1 = denominator1*denominator2;
    }else if(oper=='*') {
        numerator1 = numerator1*numerator2;
        denominator1 = denominator1*denominator1;
    }else if(oper=="/") {
        numerator1 = numerator1 * denominator2;
        denominator1 = numerator2 * denominator1;
    }else {
        return;
    }
    int answer =GCD(numerator1,denominator1);
    printf("The sum is %d/%d\n", numerator1/answer, denominator1/answer);
}
int GCD(int n1, int n2) {
    int i;
    int gcd = 1;
    for(i = 1; i <= n2; i++){
        if(n2 % i == 0 && n1%i==0){
            gcd = i;
        }
    }
    return gcd;
}

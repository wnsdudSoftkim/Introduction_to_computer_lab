// 사용자에게 두 개의 정수를 
// 입력하도록 요청한 다음 최대 공약수 (GCD)를 
// 계산하고 표시하는 프로그램을 작성하십시오.
// Enter two integers: 12 28
// Greatest common divisor : 4
int main() {
    int num1,num2;
    printf("Enter two integers:");
    scanf("%d%d",&num1,&num2);
    //num1이 항상 크다.
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int answer = GCD(num1,num2);
    printf("Greatest common divisor: %d",answer);
}
int GCD(int a, int b) {
    if(b==0) return a;
    else return GCD(b,a%b);
}
// 사용자에게 두 자리 숫자를 입력하도록 요청하는 프로그램을
// 작성한 다음 숫자를 반대로 인쇄합니다. 
// 프로그램 세션은 다음과 같은 모습이어야합니다.
// 두 자리 숫자 입력 : 28
// 반전은 : 82
// % d를 사용하여 번호를 읽은 다음 두 자리로 나눕니다. 
// 힌트 : n이 정수이면 n % 10은 n의 마지막 숫자이고 
// n / 10은 마지막 숫자가 제거 된 n입니다.
int main(void) {
    int number;
    printf("Enter a two-digit number : ");
    scanf("%d", &number);
    printf("The reversal is : %d%d",number%10,number/10);
    return 0;
}
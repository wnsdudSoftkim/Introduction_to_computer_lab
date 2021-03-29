
// 사용자가 입력 한 일련의 숫자 중 가장 큰 숫자를 찾는 프
// 로그램을 작성하십시오.
//  프로그램은 사용자가 0 또는 음수를 입력 할 때 숫자를 
//  하나씩 입력하라는 메시지를 표시해야합니다. 
//  프로그램은 입력 된 가장 큰 음이 아닌 숫자를 표시해야합니다.
// Enter a number: 60
// Enter a number :38.3
// Enter a number : 4.89
// Enter a number: 100.62
// Enter a number 75.2295
// Enter a number: 0
// The largest number entered was 100.62
int main() {
    int count = 6;
    float before = 0;
    float answer = 0;
    while(count) {
        printf("Enter a number : ");
        scanf("%f",&before);
        if (before > answer) answer = before;
        count--;
    }
    printf("The largest number entered was %.2f",answer);

}

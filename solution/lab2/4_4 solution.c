// 사용자가 입력 한 정수를 읽고 oetal (base 8)에 
// 표시하는 프로그램을 작성합니다.
// 0에서 32767 사이의 숫자를 입력하세요 : 1953 
// Octal에서 번호는 03641입니다.
// 더 적은 숫자로도 충분하더라도 출력 shold는 5 자리를 사용하여 표시됩니다. 힌트:
// 숫자를 8 진수로 변환하려면 먼저 8로 나눕니다. 
// 나머지는 8 진수 number의 마지막 숫자입니다 
// (이 경우 1). 그런 다음 원래 숫자를 8로 나누고 
// 이 과정을 반복하여 마지막 자리에 도달합니다.
// (printf는 7 장에서 볼 수 있듯이 base8로 숫자를 
// 표시 할 수 있습니다. 
// 따라서 이 프로그램 을실제로 더 쉽게 쓰는 방법이 있습니다. 
//8진수 변환
int main(void) {
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&number);
    int last_number = number%8;
    number/=8;
    int fourth_number = number%8;
    number/=8;
    int third_number = number%8;
    number/=8;
    int second_number = number%8;
    number/=8;
    int first_number = number%8;
    number/=8;
    printf("In octal , your number is :%d%d%d%d%d",
        first_number,
        second_number,
        third_number,
        fourth_number,
        last_number);
    return 0;
}
//#4-4
// int main() {
// 	int num;

// 	printf("Enter a number between 0 and 32767 : ");

// 	scanf("%d", &num);
// 	printf("In octal, your number is: :%#o", num);

// }

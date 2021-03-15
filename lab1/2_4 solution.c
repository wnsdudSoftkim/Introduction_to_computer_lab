# include <stdio.h>
// 사용자에게 달러 및 센트 금액을 입력하도록 요청한 
// 다음 5 % 세금이 추가 된 금액을 표시하는 프로그램을 작성합니다.
// 금액 입력 : 100.00
// 세금 추가 : $ 105.00
int main(){
	float amount;
	
	printf("Enter an amount : ");
	scanf_s("%f", &amount);
	printf("With tax added : $%.2f", 1.05*amount);
	
	return 0;
}

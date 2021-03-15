# include <stdio.h>

// 첫 번째, 두 번째 및 세 번째 월별 지불 후 대출 잔액을 계산하는 프로그램을 작성하십시오.
// 대출 금액 입력 : 20000.00
// 금리 입력 : 6.0
// 월별 결제 입력 : 386.66
// 첫 결제 후 남은 잔액 : $ 19713.34
// 두 번째 결제 후 잔액 : $ 19425.25
// 세 번째 결제 후 남은 잔액 : $ 19135.71
// 소수점 뒤에 두 자리로 각 잔액을 표시합니다. 힌트 : 
// 매월 잔액은 지불 금액만큼 감소하지만 잔액 x 월 이자율만큼 증가합니다. 
// 월 이자율을 찾으려면 사용자가 입력 한 이율을 백분율로 변환하고 12로 나눕니다.
int main(){
	float loan, rate, payment, first_payment, second_payment, third_payment;
	
	printf("Enter amount of loan : ");
	scanf_s("%f", &loan);
	printf("Enter interest rate : ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment : ");
	scanf_s("%f", &payment);
	//월 이자율 - (rate/100) / 12
	first_payment = (loan*(1 + rate/12/100))-payment;
	second_payment = (first_payment*(1 + rate/12/100))-payment;
	third_payment = (second_payment*(1 + rate/12/100))-payment;
	
	printf("Balance remaining after first payment : $%.2f\n", first_payment);
	printf("Balance remaining after second payment : $%.2f\n", second_payment);
	printf("Balance remaining after third payement : $%.2f\n", third_payment);
		
	return 0;
}

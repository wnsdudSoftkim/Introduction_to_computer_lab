# include <stdio.h>

int main(){
	float loan, rate, payment, first_payment, second_payment, third_payment;
	
	printf("Enter amount of loan : ");
	scanf_s("%f", &loan);
	printf("Enter interest rate : ");
	scanf_s("%f", &rate);
	printf("Enter monthly payment : ");
	scanf_s("%f", &payment);
	
	first_payment = (loan*(1 + rate/12/100))-payment;
	second_payment = (first_payment*(1 + rate/12/100))-payment;
	third_payment = (second_payment*(1 + rate/12/100))-payment;
	
	printf("Balance remaining after first payment : $%.2f\n", first_payment);
	printf("Balance remaining after second payment : $%.2f\n", second_payment);
	printf("Balance remaining after third payement : $%.2f\n", third_payment);
		
	return 0;
}

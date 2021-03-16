#include <stdio.h>
int main(void)
{
	float loan, rate, payment, monthly; //�ܾ�, �ݸ�, ���Ա�, �Ŵ�

	printf("Enter amount of loan: \n");
	scanf("%f", &loan);

	printf("Enter interest rate: \n");
	scanf("%f", &rate);

	printf("Enter monthly payment: \n");
	scanf("%f", &payment);

	monthly = (rate / 100) / 12;

	loan = (loan - payment) + (loan * monthly);
	printf("Balance remaining after first payment: $%.2f \n", loan);
	loan = (loan - payment) + (loan * monthly);
    printf("Balance remaining after second payment: $%.2f \n", loan);
	loan = (loan - payment) + (loan * monthly);
	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}
#include<stdio.h>


int main(void) {

	int money, m_20, m_10, m_5, m_1;

	printf("Enter a dollar amount : ");
	scanf_s("%d",&money);

	m_20 = money / 20;
	money = money % 20;
	printf("$20 bills : %d\n",m_20);

	m_10 = money / 10;
	money = money % 10;
	printf("$10 bills : %d\n", m_10);

	m_5 = money / 5;
	money = money % 5;
	printf(" $5 bills : %d\n", m_5);

	m_1 = money / 1;
	money = money % 20;
	printf(" $1 bills : %d\n", m_1);

}
#include<stdio.h>
int main(void)
{
	float commission, value;

	printf("Enter value of trade :");
	scanf_s("%f", &value);

	if (commission < 0 || commission >= 24)
		printf("Enter 24-hour time");
	else if (commission == 0)
		printf("12-hour time is 12:%.2d", value);
	else if (commission < 12)
		printf("12-hour time is %d:%d", commission, value);
	else if (commission == 12)
		printf("12-hour time is %d:%.2d", commission, value);
	else
		printf("12-hour time is %d:%2d", commission - 12, value);

	return 0;
}
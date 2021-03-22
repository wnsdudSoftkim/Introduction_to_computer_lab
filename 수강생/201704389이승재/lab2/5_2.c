#include<stdio.h>
int main_2(void)
{
	int hour, minute;

	printf("Enter a 24-hour time: \n");
	scanf_s("%d:%d", &hour, &minute);

	if (hour < 0 || hour >= 24)
		printf("Enter 24-hour time");
	else if (hour == 0)
		printf("12-hour time is 12:%.2d", minute);
	else if (hour < 12)
		printf("12-hour time is %d:%d", hour, minute);
	else if (hour == 12)
		printf("12-hour time is %d:%.2d", hour, minute);
	else
		printf("12-hour time is %d:%2d", hour - 12, minute);

	return 0;
}
// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form

#include <stdio.h>

int main_5_2()
{
	int hour, minute;

	printf("Enter a 24-hour time(hh:mm): ");
	scanf_s("%d:%d", &hour, &minute);


	if (hour == 24)
		printf("Equivalent 12-hour time: 00:%d AM\n", minute);

	else if (hour > 12)
		printf("Equivalent 12-hour time: %d:%d PM\n", hour - 12, minute);

	else
		printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);

	return 0;
}
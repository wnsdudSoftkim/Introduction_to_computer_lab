#include <stdio.h>
int main(void)
{
	int twenty_four_hour, minute,
		tweleve_hour;
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &twenty_four_hour, &minute);
	tweleve_hour = twenty_four_hour - 12;
	if (twenty_four_hour < 12) {
		printf("Equivalnet 12-hour time: %d:%d AM", twenty_four_hour, minute);
	}
	else {
		printf("Equivalnet 12-hour time: %d:%d PM", tweleve_hour, minute);
	}
	return 0;
}

#include <stdio.h>

int main() {

	int hour, minute;

	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &hour, &minute);

	if (hour > 12) {
		hour -= 12;
		printf("Equivalent 12-hour time: %d:%02d ", hour, minute);
		if (hour == 12) {
			printf("AM");
		}
		else {
			printf("PM");
		}

	}
	else {
		printf("Equivalent 12-hour time: %d:%02d ", hour, minute);
		if (hour == 12) {
			printf("PM");
		}
		else {
			printf("AM");
		}
	}

	return 0;

}
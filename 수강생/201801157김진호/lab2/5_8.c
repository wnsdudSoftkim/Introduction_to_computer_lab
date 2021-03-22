#include <stdio.h>
int main(void) {
	
	int h; // hour
	int m; // minute
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d",&h, &m);
	int sum;
	sum = h * 60 + m;
	
	if (sum <531.5) {
		printf("Closest departure time is 8:00 am., arriving at 10:16 am.");
	}
	else if (sum < 631) {
		printf("Closest departure time is 9:43 am., arriving at 11:52 am.");
	}
	else if (sum <723) {
		printf("Closest departure time is 11:19 am., arriving at 1:31 pm.");
	}
	else if (sum < 803.5) {
		printf("Closest departure time is 12:47 pm., arriving at 3:00 pm.");
	}
	else if (sum < 892.5) {
		printf("Closest departure time is 2:00 pm., arriving at 4:08 pm.");
	}
	else if (sum < 1042.5) {
		printf("Closest departure time is 3:45 pm., arriving at 5:55 pm.");
	}
	else if (sum < 1222.5) {
		printf("Closest departure time is 7:00 pm., arriving at 9:20 pm.");
	}
	else {
		printf("Closest departure time is 9:45 pm., arriving at 11:58 pm.");
	}

}
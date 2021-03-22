#include <stdio.h>


main() {


	int hour;
	int min;

	printf("Enter a 24-hour time:");
	scanf_s("%d:%d", &hour, &min);



	if (24 > hour && hour > 12)
		printf("Equivalent 12-hour time: %d:%d PM", hour - 12, min);

	else if (hour = 24)
		printf("%d:%d AM", hour - 12, min);

	else 
		printf("%d:%d AM", hour, min);


	
	return 0;

	}







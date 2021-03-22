#include <stdio.h>
int main(void) {
	int hours, minits;
	
	printf("Enter a 24 -hours time : ");
	scanf_s("%d:%d", &hours, &minits);
	
	if (hours <= 12 && hours >=0 && minits <60)
	{
		printf("Equivalent 12-hour time: %d:%d AM\n", hours, minits);
	}
	else if (hours > 12 && hours <24 && minits < 60)
	{
		hours -= 12;
		printf("Equivalent 12-hour time: %d:%d PM\n", hours, minits);
	}
	else
		printf("Worng time");

	return 0;
}
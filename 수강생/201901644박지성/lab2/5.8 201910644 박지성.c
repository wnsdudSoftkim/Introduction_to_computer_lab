#include <stdio.h>
int main(void)
{
	int hour, minute, converted_time;
	printf("Enter a 24-hour time: ");
	scanf_s("%d:%d", &hour, &minute);
	converted_time = hour * 60 + minute;
	if (converted_time < 531.5f)
		printf("Closest departure time is 8:00a.m., arriving at 10:16a.m.");
	else if (converted_time < 631)
		printf("Closest departure time is 9:43a.m., arriving at 11:52a.m.");
	else if (converted_time < 723)
		printf("Closest departure time is 11:19a.m., arriving at 1:31p.m.");
	else if (converted_time < 803)
		printf("Closest departure time is 12:47p.m., arriving at 3:00p.m.");
	else if (converted_time < 892)
		printf("Closest departure time is 2:00p.m., arriving at 4:08p.m.");
	else if (converted_time < 1042)
		printf("Closest departure time is 3:45p.m., arriving at 5:55p.m.");
	else if (converted_time < 1222)
		printf("Closest departure time is 7:00p.m., arriving at 9:20p.m.");
	else 
		printf("Closest departure time is 9:45p.m., arriving at 11:58p.m.");
	
	return 0;
}
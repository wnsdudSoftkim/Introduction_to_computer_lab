#include <stdio.h>

int main(void)
{

	int a, b;
	int total;

	printf("Enter a 24-hour time :");
	scanf_s("%d %d", &a, &b);

	total = a * 60 + b;
	if (total <= 480)
	{
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	}
	else if (total <= 493)
	{
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	}
	else if (total <= 679)
	{
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
	}
	else if (total <= 767)
	{
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	}
	else if (total <= 840)
	{
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	}
	else if (total <= 945)
	{
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	}
	else if (total <= 1140)
	{
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	}
	else if (total <= 1305)
	{
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	}



}

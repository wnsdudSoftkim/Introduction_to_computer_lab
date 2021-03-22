// Write a program that asks user to enter a time using the 24-hour clock.
// The program then displays the departure and arribal times for the flight
// whose departure time is closest to that entered by the user.

#include <stdio.h>

int main()
{
	int hour, minute;

	printf("Enter a 24-hour time(hh:mm): ");
	scanf_s("%d:%d", &hour, &minute);

	int time;

	if (hour == 24)
		time = minute;
	else
		time = (hour * 60) + minute;

	if (time <= (8 * 60) || time > (21 * 60 + 45))
	{
		if (time <= (8 * 60))
		{
			if ((8 * 60)-time < time + 24 * 60 - (21 * 60 + 45))
								// 00:00 ~ time + 21:45 ~ 00:00
				printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
			else
				printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
		}
		else
		{
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
		}
	}
	else if (time > (8 * 60) && time <= (9 * 60 + 43))
	{
		if (time - (8 * 60) < (9 * 60 + 43) - time)
			printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
		else
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
	}
	else if (time > (9 * 60 + 43) && time <= (11 * 60 + 19))
	{
		if (time - (9 * 60 + 43) < (11 * 60 + 19) - time)
			printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
		else
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
	}
	else if (time > (11 * 60 + 19) && time <= (12 * 60 + 47))
	{
		if (time - (11 * 60 + 19) < (12 * 60 + 47) - time)
			printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
		else
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}
	else if (time > (12 * 60 + 47) && time <= (14 * 60))
	{
		if (time - (12 * 60 + 47) < (14 * 60) - time)
			printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
		else
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
	}
	else if (time > (14 * 60) && time <= (15 * 60 + 45))
	{
		if (time - (14 * 60) < (15 * 60 + 45) - time)
			printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
		else
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}
	else if (time > (15 * 60 + 45) && time <= (19 * 60))
	{
		if (time - (15 * 60 + 45) < (19 * 60) - time)
			printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
		else
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}
	else 
	{
		if (time - (19 * 60) < (21 * 60 + 45) - time)
			printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
		else
			printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}

	return 0;
}
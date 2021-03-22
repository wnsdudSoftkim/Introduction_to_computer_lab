#include <stdio.h>
int main(void) {
	int hour, minit, hour1, minit1,time, a3, b3, c3, d3,e3,f3,g3,h3, flight, arrive;
	int a1 = 8 * 60; int a2 = 10 * 60 + 16;
	int b1 = 9 * 60 + 43; int b2 = 11 * 60 + 52;
	int c1 = 11 * 60 + 19; int c2 = 13 * 60 + 31;
	int d1 = 12 * 60 + 47; int d2 = 15 * 60;
	int e1 = 14 * 60; int e2 = 16 * 60 + 8;
	int f1 = 15 * 60 + 45; int f2 = 17 * 60 + 55;
	int g1 = 19 * 60; int g2 = 21 * 60 + 20;
	int h1 = 21 * 60 + 45; int h2 = 23 * 60 + 58;
	char info[10]; 
	char info1[10];


	printf("Enter a 24-hour time : ");
	scanf_s("%d:%d", &hour, &minit);
	time = hour * 60 + minit;
	a3 = time - a1; b3 = time - b1;
	c3 = time - c1; d3 = time - d1;
	e3 = time - e1; f3 = time - f1;
	g3 = time - g1; h3 = time - h1;

	if (a3 <= b3 && a3 <= c3 && a3 <= d3 && a3 <= e3 && a3 <= f3 && a3 <= g3 && a3 <= h3)
	{
		flight = a1; arrive = a2;
	}
	else if (b3 <= a3 && b3 <= c3 && b3 <= d3 && b3 <= e3 && b3 <= f3 && b3 <= g3 && b3 <= h3)
	{
		flight = b1; arrive = b2;
	}
	else if (c3 <= a3 && c3 <= b3 && c3 <= d3 && c3 <= e3 && c3 <= f3 && c3 <= g3 && c3 <= h3)
	{
		flight = c1; arrive = c2;
	}
	else if (d3 <= a3 && d3 <= b3 && d3 <= c3 && d3 <= e3 && d3 <= f3 && d3 <= g3 && d3 <= h3)
	{
		flight = d1; arrive = d2;
	}
	else if (e3 <= b3 && e3 <= c3 && e3 <= d3 && e3 <= a3 && e3 <= f3 && e3 <= g3 && e3 <= h3)
	{
		flight = e1; arrive = e2;
	}
	else if (f3 <= b3 && f3 <= c3 && f3 <= d3 && f3 <= e3 && f3 <= a3 && f3 <= g3 && f3 <= h3)
	{
		flight = f1; arrive = f2;
	}
	else if (g3 <= b3 && g3 <= c3 && g3 <= d3 && g3 <= e3 && g3 <= f3 && g3 <= a3 && g3 <= h3)
	{
		flight = g1; arrive = g2;
	}
	else
	{
		flight = h1; arrive = h2;
	}

	if (flight < 720) {
		hour = flight / 60;
		minit = flight % 60;
		strcpy(info,"a.m.");
	}
	else {
		hour = flight / 60 -12;
		minit = flight % 60;
		strcpy(info, "p.m.");
	}

	if (arrive < 720) {
		hour1 = arrive / 60;
		minit1 = arrive % 60;
		strcpy(info1, "a.m.");
	}
	else {
		hour1 = arrive / 60 - 12;
		minit1 = arrive % 60;
		strcpy(info1, "p.m.");
	}
	
	printf("Closest departure time is %d:%d %s, arrving at %d %d %s", hour,minit,info, hour1, minit1,info1 );

	return 0;
}
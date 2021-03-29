#include <stdio.h>

int main(void)
{
	float i;


	while(i!=0)
	{
		printf("Enter a number: ");
		scanf_s("%f", &i);
	}

}

int gcd(int a, int b)
{
	int swap;
	while (b)
	{
		swap = a % b;
		a = b;
		b = swap;
	}
	return a;
}
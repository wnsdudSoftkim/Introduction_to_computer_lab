#include <stdio.h>

main() {


	int m, n;
	int i = 1;
	int gcd = 1;

	printf("Enter two integers:");
	scanf_s("%d %d", &m, &n);

	for (i; i <= m; i++)
	{

		if (m % i == 0) {
			if (n % i == 0)
			{
				gcd = i;
			}
		}
	}



	printf("Greatest common divisior: %d", gcd);
	

}
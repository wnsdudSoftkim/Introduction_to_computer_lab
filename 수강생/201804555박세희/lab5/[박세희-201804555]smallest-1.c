#include <stdio.h>

main() {

	int a[50];
	int min, n;
	int i;

	printf("How many elements?: ");
	scanf_s("%d", &n);


	printf("Enter %d elements: ", n);


	for (i = 0;i < n;i++) {
		scanf_s("%d", &a[i]);
	}

	min = a[0];

	for (i = 0;i < n;i++) {

		if (min > a[i])
		{
			min = a[i];
		}
	}

	printf("The Smallest is: %d", min);



}
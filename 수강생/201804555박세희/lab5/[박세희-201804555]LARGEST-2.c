#include <stdio.h>

main() {

	int a[50];
	int max, n;
	int i;

	printf("How many elements?: ");
	scanf_s("%d", &n);


	printf("Enter %d elements: ", n);


	for (i = 0;i < n;i++){
			scanf_s("%d", &a[i]);
	}

	max = a[0];
	for (i = 0;i < n;i++) {

		if(max<a[i])
		{
			max = a[i];
		}
	}

	printf("The largest is: %d", max);

	

}
#include <stdio.h>

main() {


	int a[50];
	int b[50];
	int gyo[100];
	int i, j, k,n;
	k = 0;

	printf("How many elements?:");
	scanf_s("%d", &n);


	printf("Enter %d elements of A: ", n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);


	printf("Enter %d elements of B: ",n);
	for (i = 0;i < n;i++)
		scanf_s("%d", &b[i]);


	for (i = 0;i < n;i++) {

		for (j = 0;j < n;j++) {
			if( a[i] == b[j] ) {

				gyo[k] = a[i];
				k++;
			}

		}
	}


	printf("intersection of A and B: ");

	for (i = 0; i < k; i++)
		printf("%d ", gyo[i]);




}
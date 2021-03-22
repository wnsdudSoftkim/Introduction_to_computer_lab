#include <stdio.h>


main() {

	int a, b, c, d ;
	int max, min;


	printf("Enter four itegers: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	if (a >= b && a >= c && a >= d) {

		max = a;

		if (b <= c & b <= d) {

			min = b;
		}

	}

	else if (b >= a && b >= c && b >= d) {

		max = b;
		if (c <= a & c <= d) {

			min = c;
		}

	}

	else if (c >= a && c >= b && c >= d) {

		max = c;
		if (d <= a && d <= b) {

			min = d;
		}

	}

	else {
		max = d;
		if (a <= b && a <= c){

			min = a; }
	}


	printf("Largest: %d", max);
	printf("\nSmallest: %d", min); 



}
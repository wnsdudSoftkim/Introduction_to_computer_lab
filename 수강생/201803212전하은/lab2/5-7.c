#include <stdio.h>
int main(void) {
	int a,b,c,d, max, min;
	
	printf("Enter fours integers : ");
	scanf_s("%d %d %d %d", &a,&b, &c, &d);

	if (a >= b && a >= c && a>=d) {
		max = a;
		if (b <= c && b <= d) {
			min = b;
		}
		else if (c <= d) {
			min = c;
		}
		else{
			min = d;
		}
			
	}
	else if (b >= a && b >= c && b >=d) {
		max = b;
		if (c <= a && c <=d) {
			min = c;
		}
		else if (a<=c && a<=d){
			min = a;
		}
		else {
			min = d;
		}
	}

	else if (c >= a && c >= b && c >= d) {
		max = c;
		if (a <= b && a <= d) {
			min = a;
		}
		else if (b <= a && b <= d) {
			min = b;
		}
		else {
			min = d;
		}
	}

	else {
		max = d;
		if (a <= b && a <= c) {
			min = a;
		}
		else if (b <= a && b <= c) {
			min = b;
		}
		else {
			min = c;
		}
	}


	printf("Largest: %d\nSmallest: %d\n", max, min);

	return 0;
}
#include <stdio.h>
int main(void) {
	int s; //score
	printf("Enter numerical grade: ");
	scanf_s("%d", &s);
	if (s > 100)
		printf("error");
	else if (s<0)
		printf("error");
	printf("Letter grade: ");
		s = s / 10;
		switch (s) {
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("F");
			break;
		}
}
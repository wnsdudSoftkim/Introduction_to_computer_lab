#include <stdio.h>

//Display a list of odd numbers.

int main() {
	int a;
	printf("Enter a integer: ");
	scanf_s("%d", &a);
	a = a / 2 * 2+1;
	for (; a > 0; a -= 2) {
		printf("%d\n", a);
	}
	/*
	for 대신 while 사용할때
	while (a > 0) {
		printf("%d\n", a);
		a-=2;
	}
	*/

}
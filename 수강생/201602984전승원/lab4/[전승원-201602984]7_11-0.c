#include <stdio.h>

int main(void) {
	char f[100], l[100];
	printf("Enter a first name and last name.");
	scanf_s("%s %s", f, 100, l, 100);
	printf("%s, %c.", l, f[0]);
}
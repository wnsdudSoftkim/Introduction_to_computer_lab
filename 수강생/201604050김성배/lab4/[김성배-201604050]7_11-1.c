#include <stdio.h>

int main() {

	char ch1, ch2, first;
	printf("Enter a first and last name: ");
	scanf_s(" %c", &first);
	ch1 = getchar();
	while (ch1 != ' ') {
		ch1 = getchar();
	}
	while ((ch2 = getchar()) != '\n') {
		putchar(ch2);
	}
	printf(", %c.", first);
}
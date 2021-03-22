#include <stdio.h>
int main(void)
{
	int first_digit, second_digit, num;
	printf("Enter a two-digit number: ");
	scanf_s("%d", &num);

	first_digit = num / 10;
	second_digit = num % 10;

	printf("You entered the number ");

	if (first_digit == 1) {
		switch (second_digit) {
		case(0): printf("ten"); break;
		case(1): printf("eleven"); break;
		case(2): printf("twelve"); break;
		case(3): printf("thirteen"); break;
		case(4): printf("fourteen"); break;
		case(5): printf("fifteen"); break;
		case(6): printf("sixteen"); break;
		case(7): printf("seventeen"); break;
		case(8): printf("eighteen"); break;
		case(9): printf("nineteen"); break;
		}
	}
	else {
switch (first_digit) {
case(9): printf("ninety"); break;
case(8): printf("eighty"); break;
case(7): printf("seventy"); break;
case(6): printf("sixty"); break;
case(5): printf("fifty"); break;
case(4): printf("forty"); break;
case(3): printf("thirty"); break;
case(2): printf("twenty"); break;
}
switch (second_digit) {
case(9): printf("nine"); break;
case(8): printf("eight"); break;
case(7): printf("seven"); break;
case(6): printf("six"); break;
case(5): printf("five"); break;
case(4): printf("four"); break;
case(3): printf("three"); break;
case(2): printf("two"); break;
case(1): printf("one"); break;
case(0): printf(""); break;
}
	}
	return 0;
}
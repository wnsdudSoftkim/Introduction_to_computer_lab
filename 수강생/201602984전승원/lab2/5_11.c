#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char num[3];
	printf("Enter a two-digit number: ");
	scanf_s("%s", num, 3);
	char* f = malloc(sizeof(char) * 10);
	char* s = malloc(sizeof(char) * 10);

	int a = atoi(num);

	if (a >= 100 || a < 10) {
		printf("please enter only two-digit number. Exit program.");
		return;
	}
	switch (a)
	{
		case 10:
			printf("You entered the number ten.");
			return;
		case 11:
			printf("You entered the number eleven.");
			return;
		case 12:
			printf("You entered the number twelve.");
			return;
		case 13:
			printf("You entered the number thirteen.");
			return;
		case 14:
			printf("You entered the number fourteen.");
			return;
		case 15:
			printf("You entered the number fifteen.");
			return;
		case 16:
			printf("You entered the number sixteen.");
			return;
		case 17:
			printf("You entered the number seventeen.");
			return;
		case 18:
			printf("You entered the number eighteen.");
			return;
		case 19:
			printf("You entered the number nineteen.");
			return;
	}

	switch (num[0])
	{
		case '2':
			f = "twenty";
			break;
		case '3':
			f = "thirty";
			break;
		case '4':
			f = "fourty";
			break;
		case '5':
			f = "fifty";
			break;
		case '6':
			f = "sixty";
			break;
		case '7':
			f = "seventy";
			break;
		case '8':
			f = "eighty";
			break;
		case '9':
			f = "ninety";
			break;
	}

	switch (num[1])
	{
		case '0':
			s = "";
			break;
		case '1':
			s = "one";
			break;
		case '2':
			s = "two";
			break;
		case '3':
			s = "three";
			break;
		case '4':
			s = "four";
			break;
		case '5':
			s = "five";
			break;
		case '6':
			s = "six";
			break;
		case '7':
			s = "seven";
			break;
		case '8':
			s = "eight";
			break;
		case '9':
			s = "nine";
			break;
	}

	if (num[1] != '0') {
		printf("You entered the number %s-%s", f, s);
	}
	else {
		printf("You entered the number %s", f);
	}

}
#include <stdio.h>

main() {


	double x, y, z;
	char a, b;

	printf("Eenter a expression:");
	scanf_s("%lf%c%lf%c%lf", &x, &a, sizeof(a), &y, &b,sizeof(b), &z);


	switch (a) {

	case '+':
		if (b == '+') {
			printf("value of expression:%lf",x+y+z);
		}
		else if (b == '-') { printf("value of expression:%lf",x+y-z); }
		else if (b == '*') { printf("value of expression:%lf", x+y*z); }
		else if (b == '%') { printf("value of expression:%lf", x+y/z); }

		break;

	case '-':
		if (b == '+') {
			printf("value of expression:%lf",x-y+z);

		}
		else if (b == '-') { printf("value of expression:%lf", x-y-z); }
		else if (b == '*') { printf("value of expression:%lf", x-y*z); }
		else if (b == '%') { printf("value of expression:%lf", x-y/ z); }

		break;


	case '*':
		if (b == '+') {
			printf("value of expression:%lf",x*y+z);
		}
		else if (b == '-') { printf("value of expression:%lf ", x*y-z); }
		else if (b == '*') { printf("value of expression:%lf ", x*y*z); }
		else if (b == '%') { printf("value of expression:%lf", x*y/z); }

		break;


	case '%':
		if (b == '+') {
			printf("value of expression:%lf", x/y+z);
		}
		else if (b == '-') { printf("value of expression:%lf", x/y-z); }
		else if (b == '*') { printf("value of expression:%lf", x/y*z); }
		else if (b == '%') { printf("value of expression:%lf", x/y/z); }


		break;

		


	}
	



}
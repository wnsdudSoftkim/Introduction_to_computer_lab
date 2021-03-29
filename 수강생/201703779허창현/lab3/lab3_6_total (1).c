// 201703779 ÇãÃ¢Çö
#include<stdio.h>
#define max(a,b) (((a) > (b)) ? (a) : (b) )
#define min(a,b) (((a) < (b)) ? (a) : (b) )
// 1, 2, 3,4, 11


//# 6 -1
//int main() {
//	int i = 1;
//	float x, y;
//
//	printf("Enter a number : ");
//	scanf_s("%f", &x);
//
//	while (i) {
//		printf("Enter a number : ");
//		scanf_s("%f", &y);
//
//		if (y <= 0) i = 0;
//		else {
//			x = max(x, y);
//		}
//	}
//	printf("The largest number entered was %.2f", x);
//}


//#6-2
//int main() {
//	int x, y;
//	int c = 0, i = 1;
//
//	printf("Enter two integers :");
//	scanf_s("%d %d",&x,&y);
//
//	for (i=1 ; i <= x; i++) {
//		if (x % i == 0 && y % i == 0) {
//			c = i;
//		}
//	}
//	printf("Greatest common divisor : %d",c);
//}


//#6-3
//int main() {
//	int x, y,c,i;
//
//	printf("Enter value of trade : ");
//	scanf_s("%d/%d", &x, &y);
//
//	for (i=1 ; i <= x; i++) {
//		if (x % i == 0 && y % i == 0) {
//				c = i;
//		}
//	}
//	printf("In lowest term : %d/%d", x / c, y / c);
//}

//#6-4
//int main() {
//	float commissoin, value;//commissoin value
//	while (1) {
//		printf("enter value of trade : ");
//		scanf_s("%f", &value);
//		if (value == 0) {
//			break;
//		}
//		else if (value < 2500.00f) {
//			commissoin = 30.00f + 0.017f * value;
//		}
//		else if (value < 6250.00f) {
//			commissoin = 56.00f + 0.0066f * value;
//		}
//		else if (value < 20000.00f) {
//			commissoin = 76.00f + 0.0034f * value;
//		}
//		else if (value < 50000.00f) {
//			commissoin = 100.00f + 0.0022f * value;
//		}
//		else if (value < 500000.00f) {
//			commissoin = 155.00f + 0.0011f * value;
//		}
//		else {
//			commissoin = 255.00f + 0.0009f * value;
//		}
//		if (commissoin < 39.00f) {
//			commissoin = 39.00f;
//		}
//		printf("commissoin :$%.2f\n", commissoin);
//	}
//	return 0;
//}


//#6-11
//double factorial(double a);
//
//int main() {
//	int n, i;
//	double j,e=1;
//
//	printf("Enter the n : ");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		j = 1 / factorial(i);
//		e += j;
//	}
//	printf("approximates e : %f ",e);
//}
//double factorial(double a) {
//	int x, y=1;
//
//	for (x = 1; x <= a; x++) {
//		y *= x;
//	}
//	return y;
//}
//201703779 ��â��

#include<stdio.h>


//#4-1
//int main_1() {
//	int num;
//	printf("Enter a two digit number : ");
//	scanf_s("%d", &num);
//
//	if (num > 100 || num < 9) {
//		printf("Error ");
//		return 0;
//	}
//
//	else {
//		printf("The reversal is :%d%d \n", num % 10, num / 10);
//		return 0;
//	}
//
//}


//#4-4
// int main() {
// 	int num;

// 	printf("Enter a number between 0 and 32767 : ");

// 	scanf("%d", &num);
// 	printf("In octal, your number is: :%#o", num);

// }



//#4-5
//int main()
//{
//    int i, a, b, c, d, e, a2, b2, c2, d2, e2,
//        first_sum, second_sum, total;
//
//    printf("Enter the first 11 digits of a UPC: ");
//    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
//        &i, &a, &b, &c, &d, &e, &a2, &b2, &c2, &d2, &e2);
//
//    first_sum = i + b + d + a2 + c2 + e2;
//    second_sum = a + c + e + b2 + d2;
//    total = 3 * first_sum + second_sum;
//
//    printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));
//}



//#4-6
//int main() {
//
//    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
//        first_sum, second_sum, total;
//
//    printf("Enter the first 12 digits of an EAN: ");
//    scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
//        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);
//
//    first_sum = d2 + d4 + d6 + d8 + d10 + d12;
//    second_sum = d1 + d3 + d5 + d7 + d9 + d11;
//    total = first_sum * 3 + second_sum;
//
//    printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));
//}
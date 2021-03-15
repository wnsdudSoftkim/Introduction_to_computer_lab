# include <stdio.h>
// 사용자에게 미국 달러 금액을 입력하도록 요청한 다음 
// 가장 적은 수의 $ 20, $ 10, $ 5 및 $ 1 청구서를 사용하여 해당 금액을 
// 지불하는 방법을 보여주는 프로그램을 작성합니다.
// 금액 입력 : 93
// $ 20 지폐 : 4
// $ 10 지폐 : 1
// $ 5 지폐 : 0
// $ 1 지폐 : 3
int main(){
	int d_amount;
	printf("Enterr a dollar amount : ");
	scanf_s("%d", &d_amount);
	printf("$20 bills : %d\n", d_amount/20);
	printf("$10 bills : %d\n", (d_amount%20)/10);
	printf("$5 bills : %d\n", (d_amount%10)/5);
	printf("$1 bills : %d\n", (d_amount%5));
	
	return 0;
}
// int main(void)
// {
//     int dollar, a, b, c, d;

//     printf("Enter a dollar amount : ");
//     scanf_s("%d", &dollar);

//     a = dollar / 20;
//     dollar = dollar - a * 20;
//     b = dollar / 10;
//     dollar = dollar - b * 10;
//     c = dollar / 5;
//     d = dollar - c * 5;

//     printf("$20 bills : %d\n", a);
//     printf("$10 bills : %d\n", b);
//     printf("$5 bills : %d\n", c);
//     printf("$1 bills : %d\n", d);

//     return 0;
// }

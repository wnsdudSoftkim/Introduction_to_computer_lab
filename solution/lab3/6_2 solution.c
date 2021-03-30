// 사용자에게 두 개의 정수를 
// 입력하도록 요청한 다음 최대 공약수 (GCD)를 
// 계산하고 표시하는 프로그램을 작성하십시오.
// Enter two integers: 12 28
// Greatest common divisor : 4
#include <stdio.h>
#include <time.h>
// int main() {
//     int num1,num2;
//     printf("Enter two integers:");
//     scanf("%d%d",&num1,&num2);
//     //num1이 항상 크다.
//     if (num1 < num2) {
//         int temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }
//     int answer = GCD(num1,num2);
//     printf("Greatest common divisor: %d",answer);
// }
// int GCD(int a, int b) {
//     // printf("a의 값 : %d",a);
//     // printf("b의 값 : %d",b);
//     return (b==0) ? a : GCD(b,a%b);
// }
// //#6-2
int main() {
	int x, y;
	int c = 0, i = 1;

	printf("Enter two integers :");
	scanf("%d %d",&x,&y);
	for (i=1 ; i <= x; i++) {
		if (x % i == 0 && y % i == 0) {
            printf("%d",c);
			c = i;
		}
	}
	printf("Greatest common divisor : %d",c);
}
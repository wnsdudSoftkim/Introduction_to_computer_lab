# include <stdio.h>
// 사용자에게 x 값을 입력하고 다음 다항식 값을 표시하도록 요청하는 프로그램을 작성하십시오.
// 3x^5 + 2x^4 -5x^3 - x^2 + 7x -6
int main(){
	//float 써도 무관
	int x, result;
	
	printf("Enter a value for x : ");
	scanf_s("%d", &x);
	
	result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
	printf("Result value of Polynomial : %d", result);
	
	return 0;
}

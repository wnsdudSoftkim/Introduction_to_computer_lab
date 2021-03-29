#include <stdio.h>

int main(void) {
	int num1,num2,temp;
	printf("Enter two integers: ");
	scanf("%d %d", &num1,&num2);
	
	while(num2!=0) {
		temp = num1%num2;
		num1=num2;
		num2=temp;
	}
	printf("Greatest common divisor:%d\n",num1);
	
	return 0;
}

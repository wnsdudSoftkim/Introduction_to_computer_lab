#include <stdio.h>

int main(void) {
	int num1,num2,temp,n1,n2;
	printf("Enter a fraction: ");
	scanf("%d %d",&num1,&num2);
	n1 = num1;
	n2 = num2;
	while(n2!=0) {
		temp = n1%n2;
		n1=n2;
		n2=temp;
	}
	
	num1 = num1/n1;
	num2 = num2/n1;
	
	
	printf("In lowest terms: %d/%d",num1,num2);
	
	return 0;
}

# include <stdio.h>

int main(){
	float x, result;
	
	printf("Enter a value for x : ");
	scanf_s("%f", &x);
	
	result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
	printf("Result value of Polynomial : %.1f", result);
	
	return 0;
}

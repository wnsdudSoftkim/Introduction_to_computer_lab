#include <stdio.h>

int main() {
	int n1, n2, i;
	int gcd = 1;
	printf("Enter a fraction : ");
	scanf_s("%d/%d", &n1, &n2);
   
	for(i = 1; i <= n2; i++){
		if(n2 % i == 0){
       		if(n1 % i == 0) gcd = i;
		}
	}
	
	printf("In lowest terms : %d/%d\n", n1/gcd, n2/gcd);
   	return 0;  
}


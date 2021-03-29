#include <stdio.h>

int main() {
	int n1, n2, i;
	int gcd = 1;
	printf("Enter a fraction : ");
	scanf("%d/%d", &n1, &n2);
	if(n1==0 || n2==0){
		printf("Error");
	}else {
		for(i = 1; i <= n2; i++){
			if(n2 % i == 0 && n1%i==0){
				gcd = i;
			}
		}
		printf("In lowest terms : %d/%d\n", n1/gcd, n2/gcd);
	}
	
	
	
   	return 0;  
}


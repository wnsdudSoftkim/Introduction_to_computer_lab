# include <stdio.h>
# include <math.h>
# include <time.h>

int i;

void displayEven(int *n){
		
	printf("\n");
	for(i = 1; i < *n; i++){
		if(i%2==0){
			printf("%d ", i);
			if(i%20==0) printf("\n");	
		} 
	}
	printf("\n");
}

void displayOdd(int *n){
	
	printf("\n");
	for(i = 1; i < *n; i++){
		if(i%2==1){
			printf("%d ", i);	
		} 
		else if(i%20==0) printf("\n");
	}
	printf("\n");
}

int checkPrime(int *n){
	int flag = 1;	
	double start,end;
	if(*n==1){
		flag = 0;
		return flag;
	}
	start = clock();
	//소수를 구하는 첫번 째 방법 (worst case)
	// for(int i=2; i<*n; i++){
	// 	if(*n % i == 0) {
	// 		flag = 0;
	// 		end = clock();
	// 		printf("time taken : %f\n",(end-start)/1000);
	// 		return flag;
	// 	}
	// }
	// 자기자신을 제외하고 절반을 초과하는 숫자에서 
	//   나눴을때 나머지가 0이되는 숫자는 나올수가 없다.
	//소수를 구하는 두번째 방법
	// for(int i=2; i<=*n/2; i++){
	//    if(*n % i == 0) {
	// 		flag = 0;
	// 		end = clock();
	// 		printf("time taken : %.6lf\n",end-start);
	// 		return flag;
	// 	}
    // } 
	//세번째 방법 (best case)
	for(i = 2; i <= sqrt(*n); i++){
		if(*n%i == 0){
			flag = 0;
			return flag;
		}
	}
	if(i > sqrt(*n))	return flag;
}

int factorial(int *n){
	
	int fact = 1;
	for(i = 1; i <= *n; i++){
		fact *= i;
	}
	return fact;
}

void fibonacci(int *n){
	int a=1, b=1, c;
	
	if(*n == 1) printf("%d\n", a);
	else if(*n == 2) printf("%d %d\n", a, b);
	else{
		printf("%d %d ", a, b);
		for(i = 3; i <= *n; i++){
			c = a + b;
			a = b;
			b = c;
			printf("%d ", c);
		}
	}
}

// int sequence(int *n){
// 	int result = 0;
	
// 	for(i = 1; i <= 10; i++){
// 		if(i%2 == 1){
// 			result += pow(*n,(2*i - 1));
// 		}
// 		else{
// 			result -= pow(*n,(2*i - 1));
// 		}
// 	}
	
// 	return result;
// }

int main(){
	
	int j, cmd, num, n, m, temp;
	
	do{
		printf("\n");
		printf("1. Display a list of even numbers.\n");
		printf("2. Display a list of odd numbers.\n");
		printf("3. Check prime number.\n");
		printf("4. Display a list of prime numbers.\n");
		printf("5. Display a factorial of a given number.\n");
		printf("6. Factorial of all numbers.\n");
		printf("7. Fibonacci sequence.\n");
		printf("0. Exit\n\n");
		scanf("%d", &cmd);
		switch(cmd){
			case 1:
				printf("Please Enter a number : ");
				scanf("%d", &num);
				//주소값을 반환하기 위해 &연산자를 씀
				displayEven(&num);
				break;
			
			case 2:
				printf("Please Enter a number : ");
				scanf("%d", &num);
				displayOdd(&num);
				break;
			
			case 3:
				printf("Please Enter a number : ");
				scanf("%d", &num);
				if(checkPrime(&num) == 0) printf("%d is not a prime number.\n", num);
				else printf("%d is a prime number.\n", num);
				break;
			
			case 4:
				printf("Please Enter two numbers : ");
				scanf("%d %d", &n, &m);
				if(n > m){
					temp = n;
					n = m;
					m = temp;
				}
				for(j = n; j <= m; j++){
					if(checkPrime(&j) == 1){
						printf("%d ", j);
					}
				}
								
				break;
			
			case 5:
				printf("Please Enter a number : ");
				scanf("%d", &num);
				
				printf("Factorial of %d : %d", num, factorial(&num));
				break;
						
			case 6:
				printf("Please Enter two numbers : ");
				scanf("%d %d", &n, &m);
				if(n > m){
					temp = n;
					n = m;
					m = temp;
				}
				for(j = n; j <= m; j++){
					printf("%d\t", factorial(&j));
				}
				
				break;
				
			case 7:
				printf("Please Enter a number : ");
				scanf("%d", &num);
				
				fibonacci(&num);
				break;
				
				
			default:
				printf("Invalid choice\n");
				break;
		}
	}
	while(cmd != 0);
	
	return 0;
}

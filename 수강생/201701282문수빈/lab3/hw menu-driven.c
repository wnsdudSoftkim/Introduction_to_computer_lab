#include <stdio.h>

int main(void) {
	
	int n, m, opt, i, j, flag, fact=1, count=0;
	int t1=0, t2=1, next;
	
	printf("1.Display a list of even numbers.\n2.Display a list of odd numbers.\n3.For a given number n check if n is a prime number.\n");
	printf("4.Display a list of prime numbers between numbers n and m.\n5.Display a factorial of a given number n.\n");
	printf("6.Find factorial of all numbers between numbers n and m.\n7.Generate the Fibonacci sequence up to a number n.\n\n");
	printf("Input opt: ");
	scanf("%d",&opt);
	
	switch(opt) {
	
	case 1:
		for(i=0;i<=20;i++) {
			if(i%2==0)
				printf("Display a list of even numbers: %d \n",i);
		}
		break;
	case 2:
		for(i=0;i<=20;i++) {
			if(i%2!=0)
				printf("Display a list of odd numbers: %d \n",i);
		}
		break;
	case 3:
		printf("Input n: ");
		scanf("%d",&n);
		for(i=1;i<=n;i++) {
			if (n%i==0)
				count++;
		}
		if(count <= 2)
			printf("%d is a prime number\n",n);
		else
			printf("%d is not a prime number\n",n);
		break;
	case 4:
		printf("Input n, m: ");
		scanf("%d %d",&n, &m);
		for(i=n+1;i<=m;++i) {
			flag = 0;
			for(j=2; j<=i/2;++j) {
				if(i%j==0) {
					flag = 1;
					break;
				}
			}
			if(flag==0)
				printf("%d ",i);
		}
		break;
	
	case 5:
		printf("Input n: ");
		scanf("%d",&n);
		
		if(n==1)
			printf("factorial of a given number: %d\n",n);
		else {
			for(i=1;i<=n;++i) {
				fact*=i;
			}
		}
		printf("factorial of a given number: %d\n",fact);
		break;
	case 6:
		
		printf("Input n, m: ");
		scanf("%d %d",&n,&m);
		
		for(i=n;i<=m;++i) {
			if(i==1)
				printf("Find factorial of all numbers between numbers n and m: %d\n",n);
			else {
				fact = 1;
				for(j=1;j<=i;++j) {
					fact*=j;
				}
				printf("Find factorial of all numbers between numbers n and m: %d\n",fact);
			}
		}
		break;
		
	case 7:
		
		printf("Input n: ");
		scanf("%d",&n);
		
		for(i=0;i<=n;++i) {
			printf("%d, ",t1);
			next = t1+t2;
			t1=t2;
			t2=next;
		}
		break;
	}
}

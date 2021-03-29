#include <stdio.h>

int main() {
	int menu, n, m, i, small, large;
	long int f;
	int count;
	long int f1, f2;
	int check;


	while(1){
		printf("\n");
		printf("------Menu------\n");
		printf("1: Display a list of even numbers.\n");
		printf("2: Display a list of odd numbers.\n");
		printf("3: For a given number n check if n  is a prime number.\n");
		printf("4: Display a list of prime numbers between numbers n and m.\n");
		printf("5: Display a factorial of a given number n.\n");
		printf("6: Find factorial of all numbers between numbers n and m.\n");
		printf("7: Generate the Fibonacci sequence up to a number n.\n\n");
		printf("Input your option : ");
		scanf_s("%d", &menu);
		printf("\n");

		switch (menu) {

		case 1:

			n = 1;
			while (n <= 10) {
				if (n % 2 == 0) {
					printf("%d\n", n);
				}
				n++;
			}
			
			break;


		case 2:

			n = 1;
			while (n <= 10) {
				printf("%d\n", n);
				n += 2;
			}
			break;

		case 3:

			
			printf("Enter a number: ");
			scanf_s("%d", &n);
			count = 0;

			for (m = 2; m < n; m++) {
				if (n % m == 0)
					count++;
			}


			if (count == 0) {
				if (n != 1) {
					printf("%d is prime\n", n);
				}
				else {
					printf("%d is not prime", n);
				}
			}
			else {
				printf("%d is not prime\n", n);
			}
					
				
			break;

		case 4:

			printf("Enter a numner 1: ");
			scanf_s("%d", &n);
			printf("Enter a number 2: ");
			scanf_s("%d", &m);

			count = 0;

			if (n > m) {
				small = m;
				large = n;
			}
			else {
				small = n;
				large = m;
			}

			for (i = small; i <= large; i++) {
				count = 0;
				for (int a = 2; a < i; a++) {
					if (i % a == 0) {
						count++;
					}
				}
				if (count == 0) {
					if(i!=1)
					printf("%d is prime\n", i);
				}
			}

			break;

		case 5:

			printf("Enter a number: ");
			scanf_s("%d", &n);

			f = 1;
			for (m = 1; m <= n; m++) {
				f *= m;
			}
			printf("Factorial of %d is %d", n, f);

			break;


		case 6:

			printf("Enter a numner 1: ");
			scanf_s("%d", &n);
			printf("Enter a number 2: ");
			scanf_s("%d", &m);

			f = 1;

			if (n > m) {
				small = m;
				large = n;
			}
			else {
				small = n;
				large = m;
			}

			for (i = small; i <= large; i++) {
				f = 1;
				for (m = 1; m <= i; m++) {
					f *= m;
				}
				printf("Factorial of %d is %d\n", i, f);
			}
			break;

		case 7:

			printf("Enter a number: ");
			scanf_s("%d", &n);

			f1 = 0;
			f2 = 1;

			for (i = 0; i <= n; i++) {

				printf("%d\n", f1);
				m = f1 + f2;
				f1 = f2;
				f2 = m;

			}
			break;

		default:
			printf("Wrong number! Try again\n");
			break;

		}

		printf("\nDo you want the program to continue running?\nYes = 1 , No = Any number \n");
		scanf_s("%d", &check);
		if (check == 1) {
			continue;
		}
		else  {
			break;
		}
		
	}


}

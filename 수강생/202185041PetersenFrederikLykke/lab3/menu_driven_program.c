/*
A menu-driven C program that performs following tasks.
1: Display a list of even numbers.
2: Display a list of odd numbers.
3: For a given number n check if n  is a prime number.
4: Display a list of prime numbers between numbers n and m.
5: Display a factorial of a given number n.
6: Find factorial of all numbers between numbers n and m.
7: Generate the Fibonacci sequence up to a number n.
*/
#include <stdio.h>

int main(void)
{
  int choice, n, m, prime, factorial;
  printf("Please choose between the following:\n");
  printf("1: Display a list of even numbers.\n");
  printf("2: Display a list of odd numbers.\n");
  printf("3: For a given number n check if n is a prime number.\n");
  printf("4: Display a list of prime numbers between numbers n and m.\n");
  printf("5: Display a factorial of a given number n.\n");
  printf("6: Find factorial of all numbers between numbers n and m.\n");
  printf("7: Generate the Fibonacci sequence up to a number n.\n");
  printf("8: Exit\n");
  printf("Choice: ");
  scanf("%d", &choice);
    switch(choice) {
      case 1:
        printf("Enter number up to which the even numbers\n");
        printf("upto the inputted value should be printed: ");
        scanf("%d", &n);
        for(int i = 0; i <= n; i++){
          if(i % 2 == 0){
            printf("%d ", i);
          }
        }
        break;
      case 2:
        printf("Enter number up to which the odd numbers\n");
        printf("upto the inputted value should be printed: ");
        scanf("%d", &n);
        for(int i = 0; i <= n; i++){
          if(i % 2 == 1){
            printf("%d ", i);
          }
        }
        break;
      case 3:
        printf("Enter number which will be checked if it is prime: ");
        scanf("%d", &n);
        int prime = 1;
        for(int i = 2; i < n; i++){
          if(n % i == 0){
            prime = 0;
          }
        }
        if(prime == 0){
          printf("The number is not prime\n");
        }
        else if(prime == 1){
          printf("The number is prime\n");
        }
        break;
      case 4:
        printf("Enter numbers in between which the prime numbers\n");
        printf("should be displayed. Seperate inputs by space: ");
        scanf("%d %d", &n, &m);
        for(int i = n; i <= m; i++){
          prime = 1;
          for(int j = 2; j < i; j++){
            if(i % j == 0){
              prime = 0;
            }
          }
          if(prime == 1){
            printf("%d ", i);
          }
        }
        break;
      case 5:
        printf("Enter an integer for which the factorial should be calculated: ");
        scanf("%d", &n);
        factorial = n;
        for(int i = n-1; i > 1; i--){
          factorial = factorial*i;
        }
        printf("%d! = %d\n", n, factorial);
        break;
      case 6:
        printf("Enter numbers in between which the factorials\n");
        printf("should be displayed. Seperate inputs by space: ");
        scanf("%d %d", &n, &m);
        for(int i = n; i <= m; i++){
          factorial = i;
          for(int j = i-1; j > 1; j--){
            factorial = factorial * j;
          }
          printf("%d ", factorial);
        }
        break;
      case 7:
        printf("Enter the number up to which the Fibonacci numbers should be displayed: ");
        scanf("%d", &n);
        int a, b, a_new;
        a = 0;
        b = 1;
        a_new = a;
        while(a <= n){
          printf("%d ", a);
          a_new += b;
          b = a;
          a = a_new;
        }
        break;
      case 8: return 0;
      default:
        printf("Please input a valid option\n");
        break;
    }
  return 0;
}

#include <stdio.h>
//3: For a given number n check if n  is a prime number.
int main() {
    int n, i;
    int m = 0;
    
    printf("Enter a number to check if the number is a prime number: ");
    scanf("%d", &n);

    if (n == 1) printf("It's not a prime number.");

    else if (n == 2) printf("It's prime number.");
    
    else {

        for (i = 2; i < n; i++) {
        if (n % i == 0)
                m++;
        }

        if (m == 0) printf("It's prime number.");
        else printf("It's not a prime number.");

    }
}
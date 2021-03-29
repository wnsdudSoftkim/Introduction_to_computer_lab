#include <stdio.h>
//7: Generate the Fibonacci sequence up to a number n.
int main() {
    int n, i;
    int k = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int fib[n];

    for (k = 0; k < n; k++) {
        if (k == 0 || k == 1) {
            fib[k] = 1;
        }
        else {
            fib[k] = fib[k - 1] + fib[k - 2];
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d ", fib[i]);
    }

    
}
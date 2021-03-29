#include <stdio.h>
//6: Find factorial of all numbers between numbers n and m.
int main() {
    int n, m, a, b, i, j, k;

    printf("Enter two numbers: ");
    scanf("%d, %d", &n, &m);
    
    if (n < m) {
        a = n;
        b = m;
    }
    else if (m < n) {
        a = m;
        b = n;
    }

    for (i = a; i < b + 1; i++) {
        k = i;
        for (j = i; j > 1; j--) {
            k = k * (j - 1);
        }
        printf("%d ", k);
    }
}
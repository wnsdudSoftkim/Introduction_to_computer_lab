#include <stdio.h>
//4: Display a list of prime numbers between numbers n and m.
int main() {
    int n, m, a, b, i, j, l;
    int k = 0;
    printf("Enter two numbers to check if the number is a prime number: ");
    scanf("%d, %d", &n, &m);

    if (n < m) {
        a = n;
        b = m;
    }
    else if (m < n) {
        a = m;
        b = n;
    }
    
    if (a == 1) a = 2;

    int arr[b - a];

    for (j = a; j < b + 1; j++) {

        m = 0;

        for (i = 2; i < j; i++) {
            if (j % i == 0)
                m++;
        }
        
        if (m == 0) {
            arr[k] = j;
            k++;
        }


    }
    for (l = 0; l < k; ++l) {
        printf("%d ", arr[l]);
    }


}
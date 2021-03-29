#include <stdio.h>
//2: Display a list of odd numbers.
int main() {
    int n, m, i, j, k, p;

    printf("Enter a number to display a list of odd numbers: ");
    scanf("%d", &n);
    i = 1;
    j = 0;
    
    int a[n / 2 + n % 2];
    while (i < n + 1) {
        if (i % 2 == 1) {
            a[j] = i;
            j++;
        }
        i++;
    }
    for (k = 0; k < j; ++k) {
        printf("%d ", a[k]);
    }

}
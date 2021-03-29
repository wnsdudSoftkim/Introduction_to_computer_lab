#include <stdio.h>
//1: Display a list of even numbers.
int main() {
    int n, m, i, j, k, p;

    printf("Enter a number to display a list of even numbers: ");
    scanf("%d", &n);
    i = 1;
    j = 0;
    
    int a[n / 2];
    while (i < n + 1) {
        if (i % 2 == 0) {
            a[j] = i;
            j++;
        }
        i++;
    }
    for (k = 0; k < j; ++k) {
        printf("%d ", a[k]);
    }

}
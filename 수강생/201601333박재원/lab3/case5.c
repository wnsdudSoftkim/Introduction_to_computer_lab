#include <stdio.h>
//5: Display a factorial of a given number n.
int main() {
    int n, i, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    for (i = n; i > 1; i--) {
        m = m * (i - 1);
    }

    printf("%d", m);


}
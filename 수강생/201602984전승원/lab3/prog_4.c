# include <stdio.h>

int main(void) {
    int n, m;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    printf("The list of prime number between %d and %d is:\n", n, m);
    for (int i = n; i <= m; i++) {
        if (is_prime(i))
            printf("%d\n", i);
    }
}

int is_prime(int num) {
    int count = 0;
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0)
            count++;
    }

    if (count >= 1)
        return 0;
    else
        return 1;
}

#include <stdio.h>

int main(void) {
    int menu, n, m, flag;
    int program = 1;

    printf("Select menu and enter natural number\n\n");
    printf("1. Display a list of even numbers.\n");
    printf("2. Display a list of odd numbers.\n");
    printf("3. For a given number \'n\' check if \'n\' is a prime number.\n");
    printf("4. Display a list of prime numbers between numbers \'n\' and \'m\'.\n");
    printf("5. Display a factorial of a given number \'n\'\n");
    printf("6. Find factorial of all numbers between numbers \'n\' and \'m\'\n");
    printf("7. Generate the Fibonacci sequence up to a number \'n\'");
    printf("\nIf you want to exit program, enter \'0\' when select the menu.\n\n");

    while (program) {
        printf("\nSelect menu : ");
        scanf_s("%d", &menu);

        switch (menu) {
        case 0:
            printf("Bye!");
            program = 0;
            break;

        case 1:
            printf("Enter a number : ");
            scanf_s("%d", &n);

            printf("Result: ");
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    printf("%d", i);
                }
            }
            break;

        case 2:
            printf("Enter a number : ");
            scanf_s("%d", &n);

            printf("Result: ");
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    printf("%d", i);
                }
            }
            break;

        case 3:

            printf("Enter a number : ");
            scanf_s("%d", &n);

            if (n == 2) {
                flag = 1;
            }
            else {
                for (int i = 2; i < n; i++) {
                    if (n % i == 0) {
                        flag = 0;
                        break;
                    }
                    else {
                        flag = 1;
                    }
                }
            }

            if (flag) {
                printf("%d is prime number.", n);
            }
            else {
                printf("%d is not prime number.", n);
            }
            break;

        case 4:
            printf("Enter two numbers : ");
            scanf_s("%d %d", &n, &m);

            printf("Result : ");

            if (n > m) {
                while (n > m) {
                    if (m == 2) {
                        flag = 1;
                    }
                    else {
                        for (int i = 2; i < m; i++) {
                            if (m % i == 0) {
                                flag = 0;
                                break;
                            }
                            else {
                                flag = 1;
                            }
                        }
                    }
                    if (flag) {
                        printf("%d ", m);
                    }
                    m++;
                }
            }
            else if (n == m) {
                for (int i = 2; i < n; i++) {
                    if (n % i == 0) {
                        flag = 0;
                        break;
                    }
                    else {
                        flag = 1;
                    }
                }
                if (flag) {
                    printf("%d ", m);
                }
            }
            else {
                while (m > n) {
                    if (n == 2) {
                        flag = 1;
                    }
                    else {
                        for (int i = 2; i < n; i++) {
                            if (n % i == 0) {
                                flag = 0;
                                break;
                            }
                            else {
                                flag = 1;
                            }
                        }
                    }
                    if (flag) {
                        printf("%d ", n);
                    }
                    n++;
                }
            }
            break;

        case 5:
            printf("Enter a number : ");
            scanf_s("%d", &n);
            m = 1;

            printf("Result : ");
            for (int i = 1; i <= n; i++) {
                m *= i;
            }
            printf("%d\n", m);
            break;

        case 6:
            printf("Enter two numbers : ");
            scanf_s("%d %d", &n, &m);

            if (n < m) {
                n++;

                for (; n < m; n++) {
                    printf("%d factorial : ", n);

                    int fac = 1;

                    for (int i = 1; i <= n; i++) {
                        fac *= i;
                    }
                    printf("%d\n", fac);
                }
            }
            else if (n == m) {
                printf("Same number.");
            }
            else {
                m++;

                for (; m < n; m++) {
                    printf("%d factorial : ", m);

                    int fac = 1;

                    for (int i = 1; i <= m; i++) {
                        fac *= i;
                    }
                    printf("%d\n", fac);
                }
            }
            break;

        case 7:
            printf("Enter a number : ");
            scanf_s("%d", &n);
            int firstBefore = 0;
            int secondBefore = 1;
            int now = 1;

            printf("Result : ");
            for (int i = 0; i < n; i++) {
                printf("%d ", now);
                now = firstBefore + secondBefore;

                firstBefore = secondBefore;
                secondBefore = now;
            }
            break;
        default:
            printf("Error! Invalid menu!\n");
            break;
        }
    }
    return 0;
}
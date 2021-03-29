#include <stdio.h>
#include <stdlib.h>

void even_numbers() {
    int num;
    printf("Enter the number of even numbers :");
    scanf_s("%d", &num);
    for (int idx = 0; idx < num; idx++) {
        printf("%d ", idx * 2);
    }
}
void odd_numbers() {
    int num;
    printf("Enter the number of odd numbers :");
    scanf_s("%d", &num);
    for (int idx = 0; idx < num; idx++) {
        printf("%d ", idx * 2 + 1);
    }
}
int p_or_c(int num) {
    if (num == 1) {
        return 1;
    }
    else {
        int last = num / 2;
        for (int idx = 2; idx <= last; idx++) {
            if (num % idx == 0) {
                return 2;
            }
        }
    }
    return 1;
}
void prime_numbers() {
    int num;
    printf("Enter the number :");
    scanf_s("%d", &num);
    if (p_or_c(num) == 1)
        printf("<<prime number>>");
    else
        printf("<<composite number>>");
}
void list_of_prime_numbers() {
    int num;
    printf("Enter the range(2~n) : ");
    scanf_s("%d", &num);
    for (int i = 2; i <= num; i++) {
        if (p_or_c(i) == 1) {
            printf("%d ", i);
        }
    }
}
int factorial_of_number(int num) {
    if (num == 1)
        return 1;
    return num * factorial_of_number(num - 1);
}
void factorial() {
    int num,result=1;
    printf("Enter the number :");
    scanf_s("%d", &num);
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    printf("%d! = %d", num, result);
}

void factorial_between_two_numbers() {
    int n, m,t,r,j=1;
    printf("Enter the range (n m) :");
    scanf_s("%d %d", &n, &m);

    if (n < 0 || m < 0) {
        printf("error");
        factorial_between_two_numbers();
    }
    else if (n > m) {
        t = n;
        n = m;
        m = t;
    }

    for (j = n; j <= m; j++) {
        r = 1;
        for (int i = 1; i <= j; i++) {
            r *= i;
        }
        printf("%d! = %d\n", j,r);
    }
    
}
int fibo(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibo(num - 1) + fibo(num - 2);
}
void fibonacci() {
    int num;
    printf("Enter the number :");
    scanf_s("%d", &num);
    for (int i = 0; i < num; i++)
        printf("%d ", fibo(i));
}

int main(){
    int num;
    printf("1 :even number\n2 :odd number\n3 :prime num test\n4 :prime num list\n5 :factorial\n6 :factorial_between_2\n7 :fibonacci\n0 :exit\n ");
    printf("*****************\n");
    do {
        printf("Select: ");
        scanf_s("%d", &num);
        switch (num) {
        case 1:
            even_numbers();
            break;
        case 2:
            odd_numbers();
            break;
        case 3:
            prime_numbers();
            break;
        case 4:
            list_of_prime_numbers();
            break;
        case 5:
            factorial();
            break;
        case 6:
            factorial_between_two_numbers();
            break;
        case 7:
            fibonacci();
            break;
        case 0:
            printf("**Program exit**\n\n\n");
            return 0;
        default:
            printf("##Error!##\n\n\n");
            break;
        }
        printf("\n");
    } while (num != 0);
    return 0;
}
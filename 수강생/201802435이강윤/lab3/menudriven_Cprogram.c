#include <stdio.h>
#define min(a,b)  (((a)<(b))?(a):(b))
#define max(a,b)  (((a)>(b))?(a):(b))

int main(void)
{
    int choice;
    printf("1: Display a list of even numbers.\n");
    printf("2: Display a list of odd numbers.\n");
    printf("3: For a given number n check if n is a prime number.\n");
    printf("4: Display a list off prime numbers between numbers n and m.\n");
    printf("5: Display a factorial of a given number n.\n");
    printf("6: Find factorial of all numbers between numbers n and m.\n");
    printf("7: Generate the Filbonacci sequence up to a number n.\n");
    scanf("%d", &choice);

    switch (choice)
    {
/*
* ======================================================= 선택지 1, 2 =======================================================
* 입력된 수가 짝수 -> 짝수 리스트 출력 / 입력된 수가 홀수 -> 홀수 리스트 출력
*/

    case 1:
    case 2: 
    {
        int integer, num;
        printf("Enter an integer: ");
        scanf("%d", &integer);
        printf("\n");

        if (integer % 2 == 0)   // 짝수 처리
        {
            num = 0;
            while (1)
            {
                if (num == 0) {
                    printf("A list of even numbers (0 <= x <= integer) : [%d,", num);
                    num += 2;
                }
                else if (num > 0 && num < integer) {
                    printf(" %d,", num);
                    num += 2;
                }
                else if (num == integer) {
                    printf(" %d]\n", num);
                    break;
                }
            }
        }
        else    // 홀수 처리
        {
            num = 1;
            while (1)
            {
                if (num == 1) {
                    printf("A list of odd numbers (0 <= x <= integer) : [%d,", num);
                    num += 2;
                }
                else if (num > 1 && num < integer) {
                    printf(" %d,", num);
                    num += 2;
                }
                else if (num == integer) {
                    printf(" %d]\n", num);
                    break;
                }
            }
        }
    }
        break;

/*
* ======================================================= 선택지3 =======================================================
* 입력된 숫자가 소수인지 아닌지 확인하는 선택지.
*/

    case 3:
    {
        int num, denominator = 2;
        printf("Enter a number n: ");
        scanf("%d", &num);

        while (denominator < num)
        {
            if (num % denominator == 0) {
                denominator += 1;
                printf("\n%d is not a prime number.\n", num);
                break;
            }
            else {
                denominator += 1;
                if (denominator == num - 1)
                {
                    printf("\n%d is a prime number.\n", num);
                    break;
                }
            }
        }
    }
        break;

/*
* ======================================================= 선택지4 =======================================================
* 입력된 두 숫자 사이에서 소수만을 출력하는 선택지.
*/

    case 4:
    {
        long long n, m, stack;
        printf("Enter a number n = ");
        scanf("%lld", &n); // 10 입력
        printf("Enter a numbe m = ");
        scanf("%lld", &m); // 20 입력
        
        stack = min(n,m); // stack = 10인 상태.

        printf("\nPrime numbers between n, m is..\n");
        while (stack <= max(n,m))   // stack이 20까지만.
        {
            long long denominator = 2;  // denominator = 2.
            while (denominator < stack) // denominator 이 9까지만.
            {
                if (stack % denominator == 0)  break;    // stack은 소수가 아니다. -> 더이상 볼 필요가 없음. -> stack에 1 추가해서 다음 수 보자.
                else {      // stack은 소수다. -> 근데 계속 해서 다른 수들로도 안 나누어떨어지는 지 봐야함.
                    denominator += 1;
                    if (denominator == stack)  printf("%lld ", stack);
                }
            }
            stack++;
        }
        printf("\n");
    }
        break;

/*
* ======================================================= 선택지5 =======================================================
* 입력된 숫자의 팩토리얼을 출력하는 선택지.
*/

    case 5:
    {
        long long num, stack, input_num; // num : 내가 입력할 숫자, stack : factorial을 저장할 숫자, input_num : 나중에 출력 할 때 쓸 것.
        printf("Enter a number: ");
        scanf("%lld", &num);
        printf("\n");
        stack = input_num = num;

        while (input_num > 1)
        {
            stack *= (input_num - 1);
            input_num--;
        }

        printf("%lld! = %lld\n", num, stack);

    }
        break;

/*
* ======================================================= 선택지6 =======================================================
* 입력된 두 숫자 사이의 모든 숫자들의 팩토리얼을 출력하는 선택지.
*/

    case 6:
    {
        long long n, m, stack, factorial, factorial2;
        printf("Enter a number n = ");
        scanf("%lld", &n);
        printf("Enter a number m = ");
        scanf("%lld", &m); 

        stack = min(n,m);
        printf("\nEach number's factorial between n,m is..\n\n");

        while (stack <= max(n,m))
        {
            factorial2 = factorial = stack;
            printf("%lld! = ", stack); 
            while (factorial > 1) 
            {
                factorial2 *= (factorial - 1); 
                factorial--; 
            }
            printf("%lld\n", factorial2);
            stack++;
        }
    }
        break;

/*
* ======================================================= 선택지7 =======================================================
* n까지 피보나치 수열을 출력하는 선택지.
*/

    case 7:
    {
        int input_num;
        printf("Enter the number of elements: ");
        scanf("%d", &input_num);

        int Fib_0 = 0, Fib_1 = 1, Fib, i;
        printf("\nThe Fibonacci sequence is..\n");
        printf("\n1항: %d\n2항: %d\n", Fib_0, Fib_1);

        for (i = 2;i < input_num;++i)
        {
            Fib = Fib_0 + Fib_1;
            printf("%d항: %d\n", i+1, Fib);
            Fib_0 = Fib_1;
            Fib_1 = Fib;
        }
    }
        break;

/*
* ======================================================= 선택지? =======================================================
* 잘못 선택함.
*/

    default:
        printf("\nYou’ve got entered wrong number.\n");
        break;
    }

    return 0;
}
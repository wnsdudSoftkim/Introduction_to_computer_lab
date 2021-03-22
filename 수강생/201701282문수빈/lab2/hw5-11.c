#include <stdio.h>

int main(void)
{
    int number, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("The number did not contain two digits\n");
        return 0;
    }

    d1 = number - (number % 10);
    d2 = number % 10;


    if (d1 == 10) {
        switch (d2) {
            case 0: printf("ten");
                    break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirteen");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
        }
        return 0;
    }

    switch (d1) {
        case 20: printf("twenty");
                 break;
        case 30: printf("thirty");
                 break;
        case 40: printf("forty");
                 break;
        case 50: printf("fifty");
                 break;
        case 60: printf("sixty");
                 break;
        case 70: printf("seventy");
                 break;
        case 80: printf("eighty");
                 break;
        case 90: printf("ninety");
                 break;
    }

    switch (d2) {
        case 1: printf("-one");
                break;
        case 2: printf("-two");
                break;
        case 3: printf("-three");
                break;
        case 4: printf("-four");
                break;
        case 5: printf("-five");
                break;
        case 6: printf("-six");
                break;
        case 7: printf("-seven");
                break;
        case 9: printf("-nine");
                break;
    }


    return 0;
}

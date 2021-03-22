#include <stdio.h>
int main(void) {
    int num;
    printf("Enter a two-digit number : ");
    scanf_s("%d", &num);

    switch (num / 10) {
    case 9:
        printf("You entered the number ninety");
        break;
    case 8:
        printf("You entered the number eighty");
        break;
    case 7:
        printf("You entered the number seventy");
        break;
    case 6:
        printf("You entered the number sixty");
        break;
    case 5:
        printf("You entered the number fifty");
        break;
    case 4:
        printf("You entered the number fourty");
        break;
    case 3:
        printf("You entered the number thirty");
        break;
    case 2:
        printf("You entered the number twenty");
        break;
    default:
        if (num == 11)
        {
            printf("You entered the number eleven."); break;
        }
        else if( num == 12){
            printf("You entered the number twelve.");break;
        }
        else if (num == 13) {
            printf("You entered the number thirteen."); break;
        }
        else if (num == 14) {
            printf("You entered the number fourteen."); break;
        }
        else if (num == 15) {
            printf("You entered the number fifteen."); break;
        }
        else if (num == 16) {
            printf("You entered the number sixteen."); break;
        }
        else if (num == 17) {
            printf("You entered the number seventeen."); break;
        }
        else if (num == 18) {
            printf("You entered the number eighteen."); break;
        }
        else if (num == 19) {
            printf("You entered the number nineteen."); break;
        }
        else {
            break;
        }
    }
    if (num >= 20){
        switch (num % 10) {
        case 9:
            printf("-nine.");
            break;
        case 8:
            printf("-eight.");
            break;
        case 7:
            printf("-seven.");
            break;
        case 6:
            printf("-six.");
            break;
        case 5:
            printf("-five.");
            break;
        case 4:
            printf("-four.");
            break;
        case 3:
            printf("-three.");
            break;
        case 2:
            printf("-two.");
            break;
        case 1:
            printf("-one.");
            break;
        case 0:
            printf(".");
    }
    }
    


    return 0;
}
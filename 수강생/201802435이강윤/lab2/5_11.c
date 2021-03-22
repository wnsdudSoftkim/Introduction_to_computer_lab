#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int first_num;
    first_num = num % 10;   // 일의 자리

    printf("You entered the number ");

    switch (num / 10)
    {
    case 1:
        switch (first_num)      // 십의자리가 1일 때 (특수한 경우)를 처리해주는 코드
        {
            case 0:     printf("ten");          break;
            case 1:     printf("eleven");       break;
            case 2:     printf("twelve");       break;
            case 3:     printf("thirteen");     break;
            case 4:     printf("fourteen");     break;
            case 5:     printf("fiftenn");      break;
            case 6:     printf("sixtenn");      break;
            case 7:     printf("seventeen");    break;
            case 8:     printf("eighteen");     break;
            case 9:     printf("nineteen");     break;
        default:
            break;
        }
        break;
    case 2:     printf("twenty");      break;
    case 3:     printf("thirty");      break;
    case 4:     printf("fourty");      break;
    case 5:     printf("fifty");       break;
    case 6:     printf("sixty");       break;
    case 7:     printf("seventy");     break;
    case 8:     printf("eighty");      break;
    case 9:     printf("ninety");      break;
    default: 
        break;
    }

    if (num/10 != 1)        // 특수한 경우는 제외.
    {
        switch (first_num)
        {
        case 0:
            break;
        case 1:     printf("-one.");      break;
        case 2:     printf("-two.");      break;
        case 3:     printf("-three.");    break;
        case 4:     printf("-four.");     break;
        case 5:     printf("-five.");     break;
        case 6:     printf("-six.");      break;
        case 7:     printf("-seven.");    break;
        case 8:     printf("-eight.");    break;
        case 9:     printf("-nine.");     break;
        default:
            break;
        }
    }
    else        // 십의자리가 1이면 끝에 '.'만 붙임
        printf(".");

    

    return 0;
}
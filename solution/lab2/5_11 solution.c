// 사용자에게 두 자리 숫자를 묻는 프로그램을 작성한 다음 숫자에 해당하는 영어 단어를 인쇄합니다.
// 두 자리 숫자를 입력하세요 : 45
// 45 번을 입력하셨습니다.
// 힌트. 숫자 끊기
#include <stdio.h>

int main() {
	
    int num;
    int ten, one;

    printf("Enter the two-digit number : ");
    scanf_s("%d", &num);
   
    ten = num/10; 
    one = num % 10; 

    if (num == 10) printf("ten");
    else if (num == 11) printf("eleven");
    else if (num == 12) printf("twleve");
    else if (num == 13) printf("thirteen");
    else if (num == 14) printf("fourteen");
    else if (num == 15) printf("fifteen");
    else if (num == 16) printf("sixteen");
    else if (num == 17) printf("seventeen");
    else if (num == 18) printf("eighteen");
    else if (num == 19) printf("nighteen");
    else {
        printf("You entered the number ");
            switch (ten) {
            	
            case 2:
                printf("twenty");
                break;

            case 3:
                printf("thirty");
                break;

            case 4:
                printf("forty");
                break;

            case 5:
                printf("fifty");
                break;

            case 6:
                printf("sixty");
                break;

            case 7:
                printf("seventy");
                break;

            case 8:
                printf("eighty");
                break;

            case 9:
                printf("ninety");
                break;
            }
            switch (one) {
            	
            case 0:
                printf("");
                break;

            case 1:
                printf("-one");
                break;

            case 2:
                printf("-two");
                break;

            case 3:
                printf("-three");
                break;

            case 4:
                printf("-four");
                break;

            case 5:
                printf("-five");
                break;

            case 6:
                printf("-six");
                break;

            case 7:
                printf("-seven");
                break;

            case 8:
                printf("-eight");
                break;

            case 9:
                printf("-nine");
                break;
            }
    }
    return 0;
}

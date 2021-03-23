// switch 문을 사용하여 숫자 등급을 문자 등급으로 변환하는 프로그램을 작성하십시오.
// 숫자 등급 입력 : 84
// 문자 등급 : B
// 다음 채점 sclae를 사용하십시오. A = 90-100
// B = 80-89
// C = 70-79
// D = 60-69
// F = 0-59
// 등급이 100보다 크거나 0보다 작음 인쇄 오류 메시지
//를 출력하세요
int main() {
    int grade;

    printf("Enter numerical grade : ");
    scanf("%d",&grade);
    if(grade < 0 || grade > 100){
        printf("Error");
    }else {
        switch(grade/10) {
            case 10:
            case 9:
                printf("Letter grade : A");
                break;
            case 8:
                printf("Letter grade : B");
                break;
            case 7:
                printf("Letter grade : C");
                break;
            case 6:
                printf("Letter grade : D");
                break;          
            default:
                printf("Letter grade : F");
                break;
        }
    }
    

}
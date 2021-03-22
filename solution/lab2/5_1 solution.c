// 숫자에 포함 된 자릿수를 계산하는 프로그램을 
//작성하십시오.
// 숫자 입력 : 374
// 374 번은 3 자리입니다.
// 번호가 4 자리 아래라고 가정 할 수 있습니다. 
// 힌트 : 숫자를 테스트하려면 if 문을 사용하세요. 
// 예를 들어, 숫자가 0에서 9 사이 인 경우 한 자리가 
// 있습니다.
// 숫자가 10에서 99 사이 인 경우 두 자리 숫자입니다.
int main() {
    char myString[4];
    printf("Enter a number: ");
    //문자열을 집어넣은 경우엔 문자열 자체가
    //(변수가 포인터나 배열일때)
    //주소 이므로 안써도 된다.
    scanf("%s",myString);
    int myStringLength = strlen(myString);
    if(myStringLength>=4) {
        printf("You may Enter more than four digits");
    }else {
        printf("The Number %s has %d digits",myString,myStringLength);
    }
    

}
// int main(){
// 	int num;
	
// 	printf("Enter a number : ");
// 	scanf_s("%d", &num);
	
// 	if(num>0 && num<10) printf("The number %d has 1 digits\n", num);
// 	else if(num>=10 && num < 100) printf("The number %d has 2 digits\n", num);
// 	else if(num>=100 && num < 1000) printf("The number %d has 3 digits\n", num);
// 	else printf("More than 4 digits or enter a negative number\n");
// 	return 0;
// }
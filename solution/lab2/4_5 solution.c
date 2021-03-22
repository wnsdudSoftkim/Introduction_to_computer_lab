// 사용자가 한 자리, 다섯 자리, 또 다른 다섯 자리
// 를 입력하는 대신 한 번에 11 자리를 입력하도록합니다.
// Enter the first 11 digit of a UPC : 01380015173
// Check digit : 5
int main(void)
{
    int num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);

    first_sum =  num0+num2 + num4 + num6 + num8 + num10; //짝수
    second_sum = num1 + num3 + num5 + num7 + num9; // 홀수
    total = (3 * first_sum) + second_sum;
    int answer = 9 - ((total-1)%10);



    printf("Check digit: %d\n",answer);

    return 0;
}

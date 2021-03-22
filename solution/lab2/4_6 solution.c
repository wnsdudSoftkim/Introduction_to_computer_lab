// 유럽 ​​국가에서는 북미에서 사용되는 12 자리 UPC (Universal Product Code) 대신 
// EAN (European Article Number)이라고하는 13 자리 코드를 사용합니다. 각 EAN은 UPC와 마찬가지로 체크 숫자로 끝납니다.
// 체크 디지트를 계산하는 기술도 유사합니다.
// 두 번째, fouth, 여섯 번째, 여덟 번째, 열 번째 및 열두 번째 숫자를 추가하십시오.
// 첫 번째, 세 번째, 다섯 번째, 일곱 번째, 아홉 번째 및 열한 번째 숫자를 추가하십시오.
// 첫 번째 합계에 3을 곱하고 두 번째 합계에 더합니다.
// 전체에서 서브 트랙 1.
// 조정 된 합계를 10으로 나눌 때 나머지를 계산합니다.
// 9에서 나머지를 뺍니다.
// 예를 들어 EAN이 869148426000   8 인 ~~~~를 고려하십시오. 첫 번째 합계는 6 + 1 + 8 + 2 + 0 + 0 = 17입니다.
// , 두 번째 합은 8 + 9 + 4 + 4 + 6 + 0 = 31입니다.
// 첫 번째 합에 3을 곱하고 두 번째를 더하면 82가됩니다
// . 1을 빼면 81이됩니다. 10으로 나눈 나머지는 1입니다. 나머지를 9에서 빼면
// 결과는 원래 코드의 마지막 숫자와 일치하는 8입니다. 
// 귀하의 임무는 섹션 4.1의 upc.c 
// 프로그램을 수정하여 EAN에 대한 체크 디지트를 계산하는 것입니다. 사용자는 EAN의 처음 12 자리를 단일 숫자로 입력합니다.

int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11,num12, first_sum, second_sum, total;

    printf("Enter the First 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10,&num11,&num12);

    first_sum =  num2 + num4 + num6 + num8 + num10+num12; //짝수
    second_sum = num1 + num3 + num5 + num7 + num9+num11; // 홀수
    total = ((3 * first_sum) + second_sum)-1;
    printf("%d",total);
    printf("Check digit: %d\n",9 - (total % 10));
    return 0;
}



#include<stdio.h>
int main(void)
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 3,4,6,8,9};
	int uni[20], in[10];                      //합집합과 교집합 배열
	int max, min,i,j, size_a, size_b;
	int count1 = 0, count2 = 0;

	size_a = sizeof(a) / sizeof(int);          
	size_b = sizeof(b) / sizeof(int);           //집합의 크기 정의
	

	for (i = 0; i < size_a; i++)
		uni[i] = a[i];                         //합집합에 a 배열 입력
	for (i = 0; i < size_b; i++)
		uni[size_a + i] = b[i];                //a 배열 뒤에 b 배열 입력

	for (i = 0; i < size_a; i++)
		for (j = 0; j < size_b; j++)
			if (a[i] == b[j])
			{
				in[count1] = a[i];       //a의 요소와 b의 요소가 같다면 교집합에 입력
				uni[size_a + j] = 0;     // 합집합에서 중복되는 요소는  b의 요소 중 0으로 지정
				count1++;                // 중복된 요소 수 만큼 count
			}

	for (i = 0; i < size_b; i++)
		if (uni[size_a + i] != 0) {
			uni[size_a + count2] = uni[size_a + i];
			count2++;
		}
	        //중복되어 0으로 저장된 부분은 삭제하고 한칸씩 밀어넣기 


	printf("\nunion of two sets = { ");     //완성된 합집합 출력

	for (i = 0; i < size_a + size_b - count1; i++)
		printf("%d ,", uni[i]);
	printf("\b}\n");

	printf("\nin of two sets = { ");       //교집합 출력
	for (i = 0; i < count1; i++)
		printf("%d ,", in[i]);
	printf("\b}\n");
	  
	max = uni[0];                      //합집합 중 최대값 최소값 검사
	min = uni[0];           
	for (i = 0; i < size_a + size_b - count1; i++) {
		if (max < uni[i]) {
			max = uni[i];
		}
		if (uni[i] < min) {
			min = uni[i];
		}
	}

	printf("\nlargest element in a list : %d\n", max);
	printf("\nsmallest element in a list : %d\n\n", min);

	return 0;

}
#include <stdio.h>

int main()
{
	int arr[10];
	int brr[10];
	int ans[10];
	int i, j = 0, k = 10;

	printf("A 집합의 원소를 10개 입력하세요 : ");

	for (i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);

	printf("B 집합의 원소를 10개 입력하세요 : ");

	for (i = 0; i < 10; i++)
		scanf_s("%d", &brr[i]);

	for (i = 0; i < 10; i++)
	{
		ans[i] = arr[i];
	}

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (brr[j] == arr[i])
				break;

			if (i == 9)
			{
				ans[k] = brr[j];
				k++;
			}
		}
	}
	pritf("A와 B의 합집합 : ");

	for (i = 0; i < k; i++)
		printf("%d", ans[i]);

	printf("\n");

	k = 0;
	for (i = 0; i < 10; i++);
	{
		for (j = 0; j < 10; j++)
		{
			if (arr[i] == brr[j])
			{
				ans[k] = arr[i];
				k++;
			}
		}
	}
	printf("A와 B의 교집합 : ");

	for (i = 0; i < k; i++)
		printf("%d", ans[i]);
	printf("\n");
}
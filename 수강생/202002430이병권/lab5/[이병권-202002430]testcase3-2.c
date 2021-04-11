#include <stdio.h>
int main()
{
	int a[10];
	int i, num, largest;

	printf("\n 요소를 입력하세요 : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		scanf_s("%d", &a[i]);

	largest = a[0];
	
	for (i = 0; i < num; i++)
	{
		if (a[i] > largest)
		{
			largest = a[i];
		}
	}

	printf("\n 가장 큰 요소는 : %d", largest);

	return 0;
}
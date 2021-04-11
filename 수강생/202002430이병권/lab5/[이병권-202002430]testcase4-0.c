#include <stdio.h>

int main()
{
	int a[10];
	int i, num, smallest;

	printf("\n 요소를 입력하시요 : ");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++)
		scanf_s("%d", &a[i]);

	smallest = a[0];

	for (i = 0; i < num; i++)
	{
		if (a[i] < smallest)
		{
			smallest = a[i];
		}
	}

	printf("\n 가장 작은 요소 : %d", smallest);
	
	return 0;
}
#include <stdio.h>

int main()
{
	int a[10];
	int i, num, smallest;

	printf("\n ��Ҹ� �Է��Ͻÿ� : ");
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

	printf("\n ���� ���� ��� : %d", smallest);
	
	return 0;
}
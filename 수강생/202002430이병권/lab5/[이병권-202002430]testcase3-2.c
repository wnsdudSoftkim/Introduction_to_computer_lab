#include <stdio.h>
int main()
{
	int a[10];
	int i, num, largest;

	printf("\n ��Ҹ� �Է��ϼ��� : ");
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

	printf("\n ���� ū ��Ҵ� : %d", largest);

	return 0;
}
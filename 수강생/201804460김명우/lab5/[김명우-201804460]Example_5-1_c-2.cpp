#include <stdio.h>

int main() {

	int a[10], b[10], flag = 0, n, m, i, j;
	printf("Enter array1 size : ");
	scanf_s("%d", &n);
	printf("\nEnter array2 size : ");
	scanf_s("%d", &m);
	printf("\nEnter array1 element : ");
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("\nEnter array2 element : ");
	for (i = 0; i < m; i++)
		scanf_s("%d", &b[i]);
	printf("Intersection: ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (b[i] == a[j])
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			printf("%d ", b[i]);
		}
		flag = 0;
	}
}
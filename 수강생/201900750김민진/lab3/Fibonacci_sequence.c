// Write a program that generates the Fibonacci sequence up to a number n.

#include <stdio.h>

int main()
{
	int n, i1 = 0, i2 = 1, i3 = 0;

	printf("Enter a integer: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", i1);

		i3 = i1 + i2;	// i2 += i1�� �ϴ� ��� ��ȭ�� i1�� ���� ���ϴ� ��
		i1 = i2;		// (i1�� ���� �ۼ��� ��� ��ȭ�� i2�� ���� i1�� �����ϴ� ��)�̱� ������ i3�� ���� ����
		i2 = i3;	
	}

	return 0;
}
#include <stdio.h>
//�� ���� �ִ����� ���ϱ�
int main() {
	int m, n, remainder;
	printf("Enter two integers: ");
	scanf_s("%d %d", &m, &n);
	int i;
	if (n > m) {
		i = n;
		n = m;
		m = i;
	}

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d",m);
}
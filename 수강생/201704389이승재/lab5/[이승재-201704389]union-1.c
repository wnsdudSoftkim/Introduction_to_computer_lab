#include<stdio.h>

int main(void)
{
	int A[5];
	int B[5];
	int C[10];
	int num;
	int a, b, c = 0;

	printf("Enter 5 number in A: ");

	for (num = 0; num < 5; num++)
		scanf_s("%d", &A[num]);

	printf("Enter 5 number in B: \n");
	for (num = 0; num < 5; num++)
		scanf_s("%d", &B[num]);


}
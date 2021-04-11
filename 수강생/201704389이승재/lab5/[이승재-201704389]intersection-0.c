#include<stdio.h>

int main(void)
{
	int A[5];
	int B[5];
	int C[10];
	int num;
	int b, c = 0;


	printf("Enter 5 number in A: ");

	for (num = 0; num < 5; num++)
		scanf_s("%d", &A[num]);

	printf("Enter 5 number in B: \n");
	for (num = 0; num < 5; num++)
		scanf_s("%d", &B[num]);

	

	for (num = 0; num < 5; num++)
	{
		for (b = 0; b < 5; b++)
		{
			if (A[num] == B[b])
			{
				C[c] = A[num];
				c++;
			}
		}
	}
	printf("A,B Intersection: ");

	for (num = 0; num < c; num++)
		printf("%d", C[num]);
}
#include <stdio.h>
#define N 7 // how many integer input
int main() {
	int a[N];
	printf("Enter a list of %d integer: ",N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	int menu;
	printf(" 1. Find Largest number in list \n 2. Find smallest number in list \n Enter 1 or 2 : ");
	scanf_s("%d", &menu);
	
	switch (menu) {
	case 1: //largest
	{
		
		int max = a[0];
		for (int i = 1; i < N; i++)
		{
			if (a[i] > max) 
			{
				max = a[i];
			}
		}
		printf("Largest number in list is %d", max);
		break;
	}
	case 2: //Smallest
	{
		
		int small = a[0];
		for (int j = 1; j < N; j++)
		{
			if (a[j] <= small)
			{
				small = a[j];
			}
		}
		printf("Smallest number in list is %d", small);
		break;
	}
	}

}
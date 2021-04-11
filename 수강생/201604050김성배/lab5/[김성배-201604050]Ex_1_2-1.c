#include <stdio.h>

int main() {
	
	int a[100], b[100], c[100], x, y, z, q;
	int count1, count2, menu;

	printf("How many A elements? ");
	scanf_s("%d", &count1);
	printf("Enter elements: ");
	for (x = 0; x < count1; x++) {
		scanf_s("%d", &a[x]);
	}

	printf("How many B elements? ");
	scanf_s("%d", &count2);
	printf("Enter elements: ");
	for (y = 0; y < count2; y++) {
		scanf_s("%d", &b[y]);
	}

	printf("Select the menu you want \n");
	printf("1 - Write a C program to find intersection of two sets.\n");
	printf("2 - Write a C program to find union of two sets.\n");
	scanf_s("%d", &menu);

	switch (menu)
	{
	case 1: 

		z = 0;
		for (x = 0; x < count1; x++) {
			for (y = 0; y < count2; y++) {
				if (a[x] == b[y]) {
					c[z] = a[x];
					z++;
				}
			}
		}
		printf("Intersection: ");

		for (x = 0; x < z; x++) {
			printf("%d ", c[x]);
		}

	case 2:

		z = 0;
		for (x = 0; x < count1; x++) {
			c[z] = a[x];
			z++;
		}
		

		for (y = 0; y < count2; y++) {
			c[z] = b[y];
			z++;
		}

		printf("Union: ");
		for (x = 0; x < count1 + count2; x++) {
			printf("%d ", c[x]);
		}


	default:
		break;
	}


}
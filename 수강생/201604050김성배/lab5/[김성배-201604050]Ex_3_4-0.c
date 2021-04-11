#include <stdio.h>

int main() {

	int a[100], x, y, z, count, menu;
	int small, large;

	printf("How many elements? ");
	scanf_s("%d", &count);
	printf("Enter elements: ");
	for (x = 0; x < count; x++) {
		scanf_s("%d", &a[x]);
	}

	printf("Select the menu you want \n");
	printf("1 - Write a C program to find largest element in a list\n");
	printf("2 - Write a C program to find smallest element in a list.\n");
	scanf_s("%d", &menu);

	switch (menu)
	{
	case 1:

		large = a[0];

		for (x = 0; x < count; x++) {
			if (a[x] > large) {
				large = a[x];
			}
		}

		printf("Largest element is %d", large);
		break;


	case 2:

		small = a[0];

		for (x = 0; x < count; x++) {
			if (a[x] < small) {
				small = a[x];
			}
		}

		printf("Smallest element is %d", small);
		break;


	default:
		break;
	}
}
# include <stdio.h>

int main(void) {
	int *arr = malloc(sizeof(int) *5);
	int l;
	int s;
	printf("Enter four integers: ");
	for (int i = 0; i < 4; i++)
		scanf_s("%d", &arr[i]);
	
	l = arr[0];
	s = arr[0];

	for (int i = 1; i < 4; i++) {
		if (l < arr[i])
			l = arr[i];
		else if (s > arr[i])
			s = arr[i];
	}

	printf("Largest: %d\n", l);
	printf("Smallest: %d\n", s);


}
# include <stdio.h>

int main(void) {

	int d_num;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &d_num);
	if (d_num > 32767 || d_num < 0) {
		printf("please enter a number between 0 and 32767.");
		return;
	}

	int* oct_array = malloc(sizeof(int)*10);
	int length = 0; // variable to save my malloc array's length.

	for (int i = 0; d_num != 0; i++) {
		oct_array[i] = d_num % 8;
		d_num = d_num / 8;
		if (d_num == 0) {\
			oct_array[i + 1] = d_num;
			length = i + 2;
		}
	}

	printf("The oct value is : ");
	for (int i = length-1; i >= 0; i--) { // print the oct array's char by reversed order.
		printf("%d", oct_array[i]);
	}
}
# include <stdio.h>

int main(void) {
	float CM = -99999999.0f;
	float num = 1.0f;
	while (num != 0) {
		printf("Enter a number: ");
		scanf_s("%f", &num);
		if (CM < num) {
			CM = num;
		}
	}

	printf("The largest number entered was %.2f", CM);

}


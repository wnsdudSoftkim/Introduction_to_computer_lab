# include <stdio.h>

int main(void)
{
	float money,tax;
	
	printf("Enter an amount : ");
	scanf_s("%f", &money);

	tax = money * 1.05f;

	printf("With tax added : %.2f", tax);

	return 0;
}







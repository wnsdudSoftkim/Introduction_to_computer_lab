#include <stdio.h>


int main(void)
{

	int i, j;

	printf("Enter a 24-hour time : ");
	scanf_s("%d:%d", &i, &j);

	if (i > 12)
	{
		i -= 12;
	}

	printf("Equivalent 12-hour time : %d:%d", i, j);

	return 0;

}

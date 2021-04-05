#include<stdio.h>

int main(void)
{
	char name = 0;  
	char initial = 0;
	

	printf("Enter the name: \n");
	scanf_s("%c", &name);

	name = getchar();

	while ((name = getchar()) != ' ') {
		if (name == ' ');
		else
			printf("%c", name);

	}
	printf(", %c", initial);

	return 0;
}
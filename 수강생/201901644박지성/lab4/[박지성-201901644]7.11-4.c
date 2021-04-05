#include <stdio.h>
int main(void)
{
	char first_name[20];
	char last_name[20];

	printf("Enter a first and last name: ");
	scanf_s("%c", &first_name);
	scanf_s("%c", &last_name);

	printf("%s, &s.", last_name, first_name[0]);
	return 0;
}
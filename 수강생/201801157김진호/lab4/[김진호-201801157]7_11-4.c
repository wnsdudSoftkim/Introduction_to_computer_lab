#include <stdio.h>

int main() {
	char last[10] = { 0 };
	 
	printf("Enter a first name and last name: ");
	char first = getchar();
	
	while (getchar() != ' ') {

	}// ���� ���ö����� �ƹ��͵� ���ϰ� �Ѿ��
	char c;
	for (int i = 0; (c = getchar()) != '\n'; i++)
	{
		last[i] = c;
	}

	for (int i = 0; last[i] != '\0'; i++)
	{
		printf("%c", last[i]);
	}
	printf(", %c.", first);
   
}



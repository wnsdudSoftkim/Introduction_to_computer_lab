#include <stdio.h>

int main() {
	char last[10] = { 0 };
	 
	printf("Enter a first name and last name: ");
	char first = getchar();
	
	while (getchar() != ' ') {

	}// 띄어쓰기 나올때까지 아무것도 안하고 넘어가기
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



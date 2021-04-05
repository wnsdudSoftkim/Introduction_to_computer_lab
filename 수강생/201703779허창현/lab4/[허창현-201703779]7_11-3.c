#include<stdio.h>
int main_11() {

	char n1[20], n2[20];

	printf("Enter a first and last name : ");
	scanf_s("%s %s", n1,sizeof(n1),n2,sizeof(n2));

	printf("%s. %c", n2,n1[0]);
}
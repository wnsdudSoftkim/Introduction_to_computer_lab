#include <stdio.h>
int main(void) {
	int usr_input, octal_num;
	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &usr_input);
	octal_num = usr_input % 8 + (usr_input / 8) % 8 * 10 
		+ ((usr_input / 8) / 8) % 8 * 100 + (((usr_input / 8) / 8) / 8) % 8 * 1000 
		+ ((((usr_input / 8) / 8) / 8)) / 8 * 10000;
	printf("In octal, your number is: %.5d", octal_num);
	return 0;
}
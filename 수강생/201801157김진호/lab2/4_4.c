/*정수 > 팔진법으로 표현*/
#include <stdio.h>

int main(void) {

	int ten;
	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &ten);
	
	if (ten < 8) {
		printf("0000%d", ten);
	}
	else if (ten < 64) {
		printf("000%d%d", ten / 8, ten % 8);
	}
	else if (ten < 512) {
		printf("00%d%d%d", ten / 64, (ten - (ten / 64) * 64) / 8, ten % 8);
	}
	else if (ten < 4095) {
		printf("0%d%d%d%d", ten / 512, (ten - (ten / 512) * 512) / 64, (ten - (ten / 64) * 64) / 8, ten % 8);
	}
	else if (ten < 32768) {
		printf("%d%d%d%d%d", ten / 4096, (ten - (ten / 4096) * 4096) / 512, (ten - (ten / 512) * 512) / 64, (ten - (ten / 64) * 64) / 8, ten % 8);
	}
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DigitLimit 10

void substring(char s[], char sub_[], int p, int l);

int main(void) { // The code of this program seems quite long, but I wanted to make it valid for general input case.

	float num[100];
	char opt[100];
	char input[256];
	printf("Enter an expression: ");
	scanf_s("%s", input, 256);
	char sub[DigitLimit];
	int prev = 0;
	int num_index = 0;
	int opt_index = 0;
	int char_index = 0;

	for (int i = 0; i < strlen(input); i++) {
		int c = 0;
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
			substring(input, sub, prev, i-prev);
			prev = i+1;
			num[num_index++] = atof(sub);
			printf("test num: %d",num_index);
			opt[opt_index++] = input[i];
			sub[0] = '\0';
		}
		char_index = opt_index;
	}
	int c = 0;
	substring(input, sub, prev, strlen(input)-prev);
	opt[char_index] = '\0';
	num[num_index] = atof(sub);

	float res = 0.00f;
	switch (opt[0]) {
	case '+':
		res = num[0] + num[1];
		break;
	case '-':
		res = num[0] - num[1];
		break;
	case '*':
		res = num[0] * num[1];
		break;
	case '/':
		res = num[0] / num[1];
		break;
	}
	for (int i = 1; i < strlen(opt); i++) {
		printf("\nopt:%c\n",opt[i]);
		printf("\nnum:%f\n",num[i]);
		switch (opt[i]) {
		case '+':
			res += num[i + 1];
			break;
		case '-':
			res -= num[i + 1];
			break;
		case '*':
			res *= num[i + 1];
			break;
		case '/':
			res /= num[i + 1];
			break;
		}
	}

	printf("%.2f", res);
}

void substring(char s[], char sub[], int p, int l) {
	int c = 0;
	while (c < l) {
		sub[c] = s[p + c];
		printf("\nsub:%d\n",p+c);
		c++;
	}
	sub[c] = '\0';
}
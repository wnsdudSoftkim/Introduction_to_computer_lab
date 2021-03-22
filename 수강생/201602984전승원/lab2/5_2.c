# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(void) {

	char time[6];
	int colon_index = 0;
	int h_index = 0;
	int m_index = 0;

	printf("Enter a 24 hour time: ");
	scanf_s("%s", time, 6);

	char s[3];
	char m[3];
	int flag = 0;
	int i = 0;
	while (i < strlen(time)) {
		if (time[i] == ':') {
			colon_index = i + 1;
			flag = 1;
			i++;
		}
		if (!flag) {
			s[h_index] = time[h_index];
			h_index++;
			i++;
		}
		else if (flag) {
			m[m_index] = time[colon_index++];
			m_index++;
			i++;
		}
	}
	s[h_index] = '\0';
	m[m_index] = '\0';

	if (atoi(s) < 12) {
		if (atoi(m) < 10) {
			printf("Equivalent 12-hour time: %d:0%d AM", atoi(s), atoi(m));
		}
		else {
			printf("Equivalent 12-hour time: %d:%d AM", atoi(s), atoi(m));
		}
	}
	else if (atoi(s) == 12) {
		if (atoi(m) < 10) {
			printf("Equivalent 12-hour time: %d:0%d PM", atoi(s), atoi(m));
		}
		else {
			printf("Equivalent 12-hour time: %d:%d PM", atoi(s), atoi(m));
		}
	}
	else {
		if (atoi(m) < 10) {
			printf("Equivalent 12-hour time: %d:0%d PM", atoi(s) - 12, atoi(m));
		}
		else {
			printf("Equivalent 12-hour time: %d:%d PM", atoi(s) - 12, atoi(m));
		}
	}

}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
	char set1[20];
	char set2[20];
	char *res = malloc(sizeof(char) * 20);
	char temp;

	printf("input first set of char elements.");
	int set1_index = 0;
	while ((temp = getchar()) != '\n') {
		if (temp == ' ')
			continue;
		set1[set1_index++] = temp;
	}
	set1[set1_index] = '\0';
	
	printf("input second set of char elements.");
	int set2_index = 0;

	while ((temp = getchar()) != '\n') {
		if (temp == ' ')
			continue;
		set2[set2_index++] = temp;
	}
	set2[set2_index] = '\0';

	int res_index = 0;
	for (int i = 0; i < strlen(set1); i++) {
		bool contain = false;
		for (int j = 0; j < strlen(set2); j++) {
			if (set2[j] == set1[i]) {
				for (int k = 0; k < strlen(res); k++) {
					if (res[k] == set1[i]) {
						contain = true;
					}
				}
				if (contain == false)
					res[res_index++] = set1[i];
			}
		}
	}
	res[res_index] = '\0';
	

	for (int i = 0; i < strlen(res); i++) {
		printf("%c ", res[i]);
	}

}
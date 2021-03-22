#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	int arr_d[9] = {480, 583, 679, 767, 840, 945, 1140, 1305};
	int arr_a[9] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
	int index = 0;
	int h_index = 0;
	int m_index = 0;
	int colon_index = 0;
	int t_min;
	int closest = 2400;

	char time[6];
	char h[3];
	char m[3];

	int h_out_dep;
	int m_out_dep;
	int h_out_arrive;
	int m_out_arrive;

	printf("Enter a 24-hour time: ");
	scanf_s("%s", time, 6);
	
	int i = 0;
	int flag = 0;
	while (i < strlen(time)) {
		if (time[i] == ':') {
			colon_index = i + 1;
			flag = 1;
			i++;
		}
		if (!flag) {
			h[h_index] = time[h_index];
			h_index++;
			i++;
		}
		else if (flag) {
			m[m_index] = time[colon_index++];
			m_index++;
			i++;
		}
	}
	h[h_index] = '\0';
	m[m_index] = '\0';

	t_min = 60 * atoi(h) + atoi(m);
	for (int i = 0; i < 8; i++) { // compare the closest time to the input time.
		if (closest > abs(t_min - arr_d[i])) {
			closest = abs(t_min - arr_d[i]);
			index = i;
		}
	}
	h_out_dep = arr_d[index] / 60;
	m_out_dep = arr_d[index] % 60;
	h_out_arrive = arr_a[index] / 60;
	m_out_arrive = arr_a[index] % 60;

	if (h_out_dep < 12) {
		if (m_out_dep < 10) {
			printf("Equivalent 12-hour time: %d:0%d AM ", h_out_dep, m_out_dep);
		}
		else {
			printf("Equivalent 12-hour time: %d:%d AM ", h_out_dep, m_out_dep);
		}
	}
	else if (h_out_dep == 12) {
		if (m_out_dep < 10) {
			printf("Equivalent 12-hour time: %d:0%d PM ", h_out_dep, m_out_dep);
		}
		else {
			printf("Equivalent 12-hour time: %d:%d PM ", h_out_dep, m_out_dep);
		}
	}
	else {
		if (m_out_dep < 10) {
			printf("Equivalent 12-hour time: %d:0%d PM ", h_out_dep - 12, m_out_dep);
		}
		else {
			printf("Equivalent 12-hour time: %d:%d PM ", h_out_dep - 12, m_out_dep);
		}
	}

	if (h_out_arrive < 12) {
		if (m_out_arrive < 10) {
			printf("arriving at %d:0%d AM", h_out_arrive, m_out_arrive);
		}
		else {
			printf("arriving at %d:%d AM", h_out_arrive, m_out_arrive);
		}
	}
	else if (h_out_arrive == 12) {
		if (m_out_arrive < 10) {
			printf("arriving at %d:0%d PM", h_out_arrive, m_out_arrive);
		}
		else {
			printf("arriving at %d:%d PM", h_out_arrive, m_out_arrive);
		}
	}
	else {
		if (m_out_arrive < 10) {
			printf("arriving at %d:0%d PM", h_out_arrive - 12, m_out_arrive);
		}
		else {
			printf("arriving at %d:%d PM", h_out_arrive - 12, m_out_arrive);
		}
	}

}
#include <stdio.h>

int main(void) {
	/*
	����!!!
	06:04�� ���� �ð��� ���� ���ڸ��� 0�϶� ��°��� 6:4 PM ���� ���ͼ� 
	�ð��� ���� 10 �̸��϶� �տ� 0�� ���̴� ���ǹ��� ����߽��ϴ�.
	�̷��� ǥ���ϴ� ��� �ܿ� �����ϰ� 06:04 PM ���� ����ϴ� ����� ���� �������??
	
	*/

	
	int hour;
	int min;
	printf("Enter a 24-hour time: ");
	scanf_s("%d : %d",&hour, &min);
	if (hour < 12) {
		if (hour < 10) {
			if (min < 10) {
				printf("Equivalent 12-hour time: 0%d:0%d AM", hour, min);
			}
			else {
				printf("Equivalent 12-hour time: 0%d:%d AM", hour, min);
			}
			
		}
		else {
			if (min < 10) {
				printf("Equivalent 12-hour time: %d:0%d AM", hour, min);
			}
			else {
				printf("Equivalent 12-hour time: %d:%d AM", hour, min);
			}
		}
	}
	else if (hour == 12) {
		if (min < 10) {
			printf("Equivalent 12-hour time: 12:0%d PM", min);
		}
		else {
			printf("Equivalent 12-hour time: 12:%d PM", min);
		}
	}
	else {
		if (hour - 12 > 9) {
			if (min < 10) {
				printf("Equivalent 12-hour time: %d:0%d PM", hour - 12, min);
			}
			else {
				printf("Equivalent 12-hour time: %d:%d PM", hour - 12, min);
			}
		}
		else {
			if (min < 10) {
				printf("Equivalent 12-hour time: 0%d:0%d PM", hour - 12, min);
			}
			else {
				printf("Equivalent 12-hour time: 0%d:%d PM", hour - 12, min);
			}
		}
	}
	
}

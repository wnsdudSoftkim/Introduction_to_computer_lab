#include <stdio.h>

int main(void) {
	/*
	질문!!!
	06:04와 같이 시간과 분의 앞자리가 0일때 출력값이 6:4 PM 으로 나와서 
	시간과 분이 10 미만일때 앞에 0을 붙이는 조건문을 사용했습니다.
	이렇게 표현하는 방법 외에 간단하게 06:04 PM 으로 출력하는 방법이 따로 있을까요??
	
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

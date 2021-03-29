#include <stdio.h>

int main(void) {
	float number = 0, largest, temp = 0;
	
	while(1) {
		temp = number;
		printf("Enter a number: ");
		scanf("%f",&number);
		if(number <= 0)
			break;
		if(temp > number)
			largest = temp;
		else
			largest = number;
	}
	printf("The largest number entered was %.2f\n",largest);
	
	return 0;
}

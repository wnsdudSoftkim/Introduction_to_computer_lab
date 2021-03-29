#include <stdio.h>

main(){


	float num[100];
	int i = 0;
	float max;
	max = 0;


	
	for(i=1; i<100; i++){

		printf("Enter a number:");
		scanf_s("%f", &num[i]);

		if (num[i] == 0 || num[i] < 0) break;
	}

	
	for (i = 0; i < 100; i++) {

		if (num[i] > max)
			max = num[i];

	}

	printf("The largest number entered was %f", max);

	return 0;


}




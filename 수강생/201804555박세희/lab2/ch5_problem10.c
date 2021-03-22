#include <stdio.h>


main() {

	int num;

	printf("Enter numerical grade:");
	scanf_s("%d", &num);

	switch(num/10) {

	


	case 10: printf("\nLetter grade: A");
		break;
	case 9: printf("\nLetter grade: A");
		break;
	case 8: printf("\nLetter grade: B");
		break;
	case 7: printf("\nLetter grade: C");
		break;
	case 6: printf("\nLetter grade: D");
		break;
	case 5: printf("\nLetter grade: F");
		break;
	case 4: printf("\nLetter grade: F");
		break;
	case 3: printf("\nLetter grade: F");
		break;
	case 2: printf("\nLetter grade: F");
		break;
	case 1: printf("\nLetter grade: F");
		break;
	case 0: printf("\nLetter grade: F");
		break;

		return 0; 


	}



}
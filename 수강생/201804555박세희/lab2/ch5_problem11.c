#include <stdio.h>

main() {


	int a;


	printf("Enter a two-digit number:");
	scanf_s("%d", &a);




	



	switch (a/10) {




	case 9: printf("You entered the number: ninety-"); 
		break; 
	case 8: printf("You entered the number: eighty-");
		break;
	case 7: printf("You entered the number: seventy-");
		break;
	case 6: printf("You entered the number: sixty-");
		break;
	case 5: printf("You entered the number: fifhty-");
		break;
	case 4: printf("You entered the number: fourty-");
		break;
	case 3: printf("You entered the number: thirty-");
		break;
	case 2: printf("You entered the number: twenty-");
		break;

	
		



	}

	switch (a % 10) {

	case 9: if (a / 10 == 1) { printf("nineteen"); }
		  else { printf("nine"); }
		break;
	case 8: if (a / 10 == 1) { printf("eighteen"); }
		  else { printf("eight"); }
		break;
	case 7: if (a / 10 == 1) { printf("seventeen"); }
		  else { printf("seven"); }
		break;
	case 6: if (a / 10 == 1) { printf("sixteen"); }
		  else { printf("six"); }
		break;
	case 5: if (a / 10 == 1) { printf("fifteen"); }
		  else { printf("five"); }
		break;
	case 4: if (a / 10 == 1) { printf("fourhteen"); }
		  else { printf("four"); }
		break;
	case 3: if (a / 10 == 1) { printf("thirteen"); }
		  else { printf("three"); }
		break;
	case 2: if (a / 10 == 1) { printf("twelve"); }
		  else { printf("two"); }
		break;
	case 1: if (a / 10 == 1) { printf("eleven"); }
		  else { printf("one"); }
		break;

	}


	


	return 0;
}
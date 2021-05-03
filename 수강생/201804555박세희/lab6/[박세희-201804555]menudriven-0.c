#include <stdio.h>


main() {

	int ID[50], n, i, value, num, del;




	while (1) {

		printf("\n1.Add ID \n2.Search ID \n3.Display IDs \n4.Delete ID \n\n");
		scanf_s("%d", &num);


		switch (num) {


		case 1:
			printf("How many elements?:");
			scanf_s("%d", &n);

			printf("Enter ID:\n");
			for (int i = 0; i < n; ++i) {
				scanf_s("%d", &ID[i]);
			}
			printf("\n");
			break;


		case 2:

			printf("Enter ID to search: ");
			scanf_s("%d", &value);

			for (i = 0;i < n; ++i) {
				if (ID[i] == value)
					printf("%d is in the array[%d].\n", value, i);


			}break;


		case 3:

			printf("List IDs: ");
			for (int i = 0; i < n; ++i) {
				printf("<%d> ", ID[i]);
				
			}
			 break;



		case 4:

			printf("Enter ID to delete: ");
			scanf_s("%d", &del);

			for (i = 0;i < n; ++i) {
				if (ID[i] == del)
					ID[i] = 0;


			}
			printf("\n"); break;
		}



	}

}








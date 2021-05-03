#include <stdio.h>
#include <stdbool.h>

int main() {

	int std[100] = { 0, };
	int stdID, stdIDTemp, cpy[100], menu, i, pos, temp;
	int count = 0;
	int exit = 0;
	bool found;

	while (1) {
		printf("\n-----Student ID Management----- \n\n");
		printf("1. Add Student ID\n");
		printf("2. Delete Student ID\n");
		printf("3. Insert Student ID at a given position or index\n");
		printf("4. Search Student ID\n");
		printf("5. Update Student ID\n");
		printf("6. Display Student IDs\n");
		printf("7. Exit \n\n");
		printf("Enter a menu: ");
		scanf("%d", &menu);


		switch (menu)
		{
		case 1:

			found = false;

			printf("Enter a student ID (Add): ");
			scanf("%d", &stdID);

			for (i = 0; i < count; i++) {
				if (std[i] == stdID) {
					found = true;
				}
			}
			if (found == true) {
				printf("This ID is already registered.\n");
			}
			else {
				std[count] = stdID;
				count++;
				printf("Add clear!\n");
			}
			break;

		case 2:

			found = false;

			printf("Enter a student ID (Delete): ");
			scanf("%d", &stdID);

			for (i = 0; i < count; i++) {
				if (std[i] == stdID) {
					found = true;
					pos = i;
				}
				cpy[i] = std[i];
			}

			if (found == false) {
				printf("ID to delete does not exist\n");
			}
			else {
				for (i = pos; i < count-1; i++) {
					std[i] = cpy[i + 1];
					
				}
				count--;
				std[count] = 0;
				printf("Delete clear!\n");
			}
			break;


		case 3:

			found = false;
			printf("Enter a index (under 100): ");
			scanf("%d", &pos);
			printf("Enter a student ID: ");
			scanf("%d", &stdID);

			for (i = 0; i < 100; i++) {
				if (std[i] == stdID) {
					found = true;
				}
			}

			if (std[pos] == 0) {
				if (found == true) {
					printf("This ID is already registered.\n");
				}
				else {
					std[pos] = stdID;
					count++;
					printf("Put student ID index of %d\n", pos);		
				}
			}
			else {
				printf("The position already has an ID.\n");
			}
			

			break;

		case 4:
			
			found = false;
			printf("Enter a student ID (Search): ");
			scanf("%d", &stdID);

			for (i = 0; i < count; i++) {
				if (std[i] == stdID) {
					found = true;
					pos = i;
				}

			}
			if (found == true) {
				printf("%d is in the array (index: %d)\n", stdID, pos);
			}
			else {
				printf("%d is not in the array\n", stdID);
			}

			break;


		case 5:

			found = false;
			bool overlap = false;

			printf("Enter the original student ID: ");
			scanf("%d", &stdIDTemp);
			printf("Enter the student ID for update: ");
			scanf("%d", &stdID);

			for (i = 0; i < count; i++) {
				if (std[i] == stdIDTemp) {
					found = true;
					temp = i;
				}
				if (std[i] == stdID) {
					overlap = true;
				}
			}
			if (found == true) {
				if (overlap == false) {
					std[temp] = stdID;
					printf("Update clear\n");
				}
				else {
					printf("The studnet ID you are trying to update already exists. Try again!\n");
				}
				
			}
			else {
				printf("The student ID to update does not exist. Try again!\n");
			}

			break;



		case 6:

			for (i = 0; i < 100; i++) {
				if (std[i] != 0) {
					printf("\nIndex: %d \t ID: %d\n", i, std[i]);
				}
			}

			break;

		case 7:

			exit = 1;
			break;

		default:
			break;
		}


		if (exit == 1) {
			break;
		}


	}
	

	
}
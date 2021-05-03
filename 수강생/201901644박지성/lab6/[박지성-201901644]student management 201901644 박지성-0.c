# include <stdio.h>

int main(void) 
{
	int cmd, temp, i, idx = 0, del_idx, next, flag, tmp;
	int std_id[100];

	do {
		printf("\n\n Student ID Management Program \n");
		printf("1. Add Student ID\n");
		printf("2. Delete Student ID\n");
		printf("3. Insert Student ID\n");
		printf("4. Search Student ID\n");
		printf("5. Update Student ID\n");
		printf("6. Display Student IDs\n");
		printf("7. Exit\n\n");
		scanf_s("%d", &cmd);

		switch (cmd) {
		case 1:
			next = 1, flag = 0;
			while (1) {
				printf("\nEnter Student ID : ");
				scanf_s("%d", &temp);
				for (i = 0; i < idx; i++) {
					if (temp == std_id[i]) {
						flag = 1;
					}
				}
				if (!flag) {
					std_id[idx] = temp;
				}
				else if (flag == 1) {
					printf("\n This ID already exists\n");
					break;
				}

				idx++;

				printf("\nRecord Saved\n");
				printf("\nWould you like to add another record? \n<<Enter 1 to continue and 0 to exit>> ");
				scanf_s("%d", &next);
				if (next == 0) break;
			}
			break;
		case 2:
			printf("\nEnter the ID you want to delete : ");
			scanf_s("%d", &temp);
			flag = 0;
			for (i = 0; i < idx; i++) {
				if (temp == std_id[i]) {
					del_idx = i;
					flag = 1;
					break;
				}
			}
			for (i = del_idx; i < idx; i++) {
				std_id[i] = std_id[i + 1];
			}
			if (!flag) {
				printf("\n This ID is not in the system.\n");
			}
			break;
		case 3:
			printf("\nEnter the ID you want to insert : ");
			scanf_s("%d", &temp);
			flag = 0;
			for (i = 0; i < idx; i++) {
				if (temp == std_id[i]) {
					flag = 1;
				}
			}
			if (flag == 1) {
				printf("\n This ID already exists\n");
				break;
			}
			printf("Enter the index you want to insert : ");
			scanf_s("%d", &del_idx);
			for (i = idx; i >= del_idx - 1; i--) {
				std_id[i + 1] = std_id[i];
			}
			std_id[del_idx - 1] = temp;
			idx++;
			break;

		case 4:
			printf("\nEnter Student ID you want to find : ");
			scanf_s("%d", &temp);
			flag = 0;
			for (i = 0; i < idx; i++) {
				if (temp == std_id[i]) {
					printf("\n %d is in %d position.\n", temp, i + 1);
					flag = 1;
					break;
				}
			}
			if (!flag) {
				printf("\n %d is not in the system.\n", temp);
			}
			break;
		case 5:
			printf("\nEnter Student ID to update : ");
			scanf_s("%d", &temp);
			for (i = 0; i < idx; i++) {
				if (temp == std_id[i]) {
					printf("\nEnter Student ID you want to update : ");
					scanf_s("%d", &tmp);
					std_id[i] = tmp;
					flag = 1;
					break;
				}
			}
			break;
		case 6:
			printf("\nThe following is all the IDs in the system.\n");
			for (i = 0; i < idx; i++) {
				printf("%d\t", std_id[i]);
			}
			break;
		default:
			printf("Invalid choice! \n");
			break;
		}
	} 	while (cmd != 7);

	return 0;
}

#include <stdio.h>

int main() {
	int k = 0; // idx that continue while loop
	int idx = 0; //number of students
	while (k!=1)
	{
		int opt;
		int Id[100]; //maximum number of students are 100
		
		printf("Enter option you want to use \n1. Add Student ID\n2. Delete Student ID\n3. Search Student ID\n4. Update Student ID\n5.Display Student ID\n6.Exit\n");
		scanf_s("%d", &opt);
		switch (opt) {

		case 1: //add ID
		{
			
			int std; //student id
			int d_check = 0;//duplicated check index
			printf("Enter the student ID : ");
			scanf_s("%d", &std);
			for (int i = 0; i < idx; i++) {
				if (Id[i] == std) {
					printf("You entered duplicated ID\n\n");
					d_check++;
				}
			}
			if (d_check == 1) {
				break;
			}
			else {
				Id[idx] = std;
				idx++;
				break;
				printf("\n");
			}
		}

		case 2: //delete ID
		{
			int key; // id that we want to del
			int keyidx; // that id`s index
			printf("Enter student ID which you want to delete : ");
			scanf_s("%d", &key);
			for (int i = 0; i < idx; i++) {
				if (key == Id[i]) {
					keyidx= i;
				}
			}
			for (keyidx; keyidx < idx; keyidx++) {
				Id[keyidx] = Id[keyidx + 1];

			}
			idx--;
			printf("\n");

			break;
		}

		case 3: //search ID
		{
			int key; // id that user want to find
			int ans = 0;
			
			printf("Enter student ID you want to find: ");
			scanf_s("%d",&key);
			for (int i = 0; i < idx; i++) {
				if (key == Id[i]) {
					ans++;
				}
			}
			if (ans == 0) {
				printf("%d isn`t registered ID.\n",key);
			}
			else {
				printf("%d is registered ID.\n",key);
			}
			printf("\n");
			break;
		}

		case 4: //update ID
		{
			int old;
			int new;
			printf("Enter student ID that you want to update : ");
			scanf_s("%d", &old);
			printf("Enter new ID : ");
			scanf_s("%d", &new);
			for (int i = 0; i < idx; i++) {
				if (old == Id[i]) {
					Id[i] = new;
					break;
				}
			}
			printf("\n");
			break;
		}

		case 5: //diplay IDs
		{
			printf("\n");
			for (int i = 0; i < idx; i++) {
				printf("Student ID : %d\n",Id[i]);
			}
			printf("\n");
			break;
		}


		case 6: //exit
		{
			k = 1;
			break;
		}
		default :
			printf("You Entered wrong option\n");
		}
	}
}
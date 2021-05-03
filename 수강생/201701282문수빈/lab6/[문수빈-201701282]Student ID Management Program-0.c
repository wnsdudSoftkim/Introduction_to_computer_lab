#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int StId[20];
	int i, n, opt, index, pos, value;
	
	printf("1.Add Student ID\n2.Delete Student ID\n3.Insert Student ID at a given position or index\n");
	printf("4.Search Student ID\n5.Update Student ID\n6.Display Student ID\n\n");
	printf("Enter number(1~6): ");
	scanf("%d",&opt);
	
	while(1) {
		if (opt == 1) {
			printf("Add Student ID\n");
			printf("How many Student ID do you want? ");
			scanf("%d",&n);
			printf("Enter %d Student ID : ",n);
			for(i=0;i<n;i++) {
				scanf("%d",&StId[i]);
			}
		printf("\nEnter other section: ");
		scanf("%d", &opt);
		}
		else if(opt == 2) {
			printf("Delete Student ID\n");
			printf("Enter the position or index: ");
			scanf("%d",&pos);
			if(pos <0 || pos>n-1)
				printf("Invalid position");
			else {
				for(i=pos;i<n-1;i++)
					StId[i] = StId[i+1];
				n--;
				printf("the resultant array: ");
				for(i=0;i<n;i++)
					printf("%d ",StId[i]);
			}
		printf("\n\nEnter other section: ");
		scanf("%d", &opt);
		}
		else if(opt == 3) {
			printf("Insert Student ID at a given position or index\n");
			printf("Enter position: ");
			scanf("%d",&pos);
			if(pos<0 || pos>n-1) {
				printf("Invalid position\n");
			}
				
			else {
				for(i=n-1;i>=pos;i--) {
					StId[i+1] = StId[i];
				}
				n++;
				printf("Enter the new Student ID: ");
				scanf("%d",&StId[pos]);
				
				printf("the resultant array: ");
				for(i=0;i<n;i++)
					printf("%d ",StId[i]);
				
			}
		printf("\n\nEnter other section: ");
		scanf("%d", &opt);
		}
		else if(opt==4) {
			bool found = false;
			printf("Search Student ID: ");
			scanf("%d",&value);
			
			for(i=0;i<n;i++) {
				if(StId[i] == value)
					found = true;
			}
			if(found == true)
				printf("%d is in the array.\n",value);
			else
				printf("%d is not in the array.\n",value);
		printf("\nEnter other section: ");
		scanf("%d", &opt);
		}
		else if(opt==5) {
			printf("Update Student ID");
			printf("\nEnter the position: ");
			scanf("%d",&pos);
			if(pos<0 || pos>n-1)
				printf("Invalid position\n");
			else {
				printf("Enter the new Student ID: ");
				scanf("%d",&StId[pos]);
				printf("The resultant array: ");
				for(i=0;i<n;i++)
					printf("%d ",StId[i]);
			}
		printf("\n\nEnter other section: ");
		scanf("%d", &opt);
		}
		else if(opt==6){
			printf("\nDisplay Student ID\n");
			for(i=0;i<n;i++)
				printf("%d ",StId[i]);
			
		printf("\n\nEnter other section: ");
		scanf("%d", &opt);
		}
		else {
			break;
		}
	}
	return 0;
}


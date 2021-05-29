#include <stdio.h>
#include <string.h>
#include <conio.h>

struct info {
	int BookID;
	char BookName[20];
	char PublicDate[20];
	char PublisherName[20];
	char Phone[20];
	char AuthorName[20];
	char Email[50];
};

int main(void) {
	
	struct info library[100];
	
	int num,i=0, index=0, next=1,temp,flag=0, idx;
	char name;
	printf("1.Add book information.\n2.Update book information\n3.Delete book information\n");
	printf("4.Search book information\n5.Display a list of book(s) published by an author a\n");
	printf("6.Display a list of book(s) published by a publisher p\n7.Display a list of all book");
	
	printf("\n\nChoice one: ");
	scanf("%d",&num);
	
	
	while(1) {
		if(num == 1) {
			printf("1.Add book information.\n");
			printf("\nInput all information: ");
			scanf("%d",&library[index].BookID);
			if(library[index].BookID > 0) {
				scanf("%s",&library[index].BookName);
				scanf("%s",&library[index].PublicDate);
				scanf("%s",&library[index].PublisherName);
				scanf("%s",&library[index].Phone);
				scanf("%s",&library[index].AuthorName);
				scanf("%s",&library[index].Email);
			}
			else {
				printf("BookID should not be a negative number.");
				break;
			}
		
			index++;
			printf("\nRecord saved\n");
			printf("\nWould you like to add another record?\n<< Enter 1 to continew and 0 to exit>>");
			scanf("%d",&next);
			
			if(next == 0) {
				printf("\n\nChoice one: ");
				scanf("%d",&num);
			}
		}
		else if(num == 2) {
			printf("2.Update book information\n");
			printf("What index do you want to change?");
			scanf("%d",&temp);
			scanf("%d",&library[temp].BookID);
			scanf("%s",&library[temp].BookName);
			scanf("%s",&library[temp].PublicDate);
			scanf("%s",&library[temp].PublisherName);
			scanf("%s",&library[temp].Phone);
			scanf("%s",&library[temp].AuthorName);
			scanf("%s",&library[temp].Email);
		
			printf("\n\nChoice one: ");
			scanf("%d",&num);
		}
		else if(num == 3) {
			printf("3.Delete book information\n");
			printf("What index do you want to delete?");
			scanf("%d",&temp);
			for(i=temp;i<index;i++) {
				library[i] = library[i+1];
			}
			index--;
			printf("\n\nChoice one: ");
			scanf("%d",&num);
			
		}
		else if(num == 4) {
			printf("4.Search book information\n");
			printf("What index do you want to search?");
			scanf("%d",&temp);
			printf("%d\n",library[temp].BookID);
			printf("%s\n",library[temp].BookName);
			printf("%s\n",library[temp].PublicDate);
			printf("%s\n",library[temp].PublisherName);
			printf("%s\n",library[temp].Phone);
			printf("%s\n",library[temp].AuthorName);
			printf("%s\n",library[temp].Email);
		
			printf("\n\nChoice one: ");
			scanf("%d",&num);
		}
		else if(num == 5) {
			printf("Display a list of book(s) published by an author a");
			printf("\nEnter an author a: ");
			//scanf("%s",&name);
			for(i=0;i<=index;i++) {
				scanf("%s",&name);
				if(library[i].AuthorName == name) {
					idx = i;
					//printf("%d\n",idx);
					
				}
				printf("%d\n",library[idx].BookID);
				printf("%s\n",library[idx].BookName);
				
			}
			printf("\n\nChoice one: ");
			scanf("%d",&num);	
			
		}
			
		else if(num == 6) {
			printf("Display a list of book(s) published by a publisher p");
			printf("\nEnter an publisher p: ");
			//scanf("%s",&name);
			//getchar();
			for(i=0;i<=index;i++) {
				scanf("%s",&name);
				if(library[i].PublisherName == name) {
					idx = i;
				}
				printf("%d\n",library[idx].BookID);
				printf("%s\n",library[idx].BookName);
			}
			printf("\n\nChoice one: ");
			scanf("%d",&num);
		}
		else if(num == 7) {
			printf("Display a list of all book\n");
			for(i=0;i<=index;i++) {
				printf("%d\n",library[i].BookID);
				printf("%s\n",library[i].BookName);
				printf("%s\n",library[i].PublicDate);
				printf("%s\n",library[i].PublisherName);
				printf("%s\n",library[i].Phone);
				printf("%s\n",library[i].AuthorName);
				printf("%s\n\n",library[i].Email);
			}
			printf("\n\nChoice one: ");
			scanf("%d",&num);
		}
		else {
			break;
		}
	}
		
	return 0;
}

















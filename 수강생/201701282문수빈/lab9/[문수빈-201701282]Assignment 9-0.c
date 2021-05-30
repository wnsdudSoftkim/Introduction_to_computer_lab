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

struct info in[50];
int idx = 0;

int add() {
	
    int flag1 = 1;
    int i;
    printf("Enter Book ID :\n");
    scanf("%d", &in[idx].BookID);
    
    if (in[idx].BookID < 0)
    {
        printf("ID should not be a negative number.");
        return;
    }

    for (i=0; i<idx; i++)
    {
        if (in[idx].BookID == in[i].BookID)
        {
            flag1 = 0;
        }
    }
  
    if (flag1 == 0)
    {
        printf("\nThis ID already exists!\n");
        return;
    }

    printf("Enter Book Name : \n");
    scanf("%s", in[idx].BookName);
    
    printf("Enter Publication Date : \n");
    scanf("%s", in[idx].PublicDate);
    
    printf("Enter PublicationName : \n");
    scanf("%s", in[idx].PublisherName);
    
    printf("Enter publisher Phone number: \n");
    scanf("%d", &in[idx].Phone);
    
    printf("Enter Author name: \n");
    scanf("%s", in[idx].AuthorName);
    
    printf("Enter Author Email Address: \n");
    scanf("%s", in[idx].Email);
    idx++;
    return 0;
}

int update() {
	int unum, i, uflag = 0;

    printf("Enter Book ID :\n");
    scanf("%d", &unum);
    
    if (unum<0) {
        printf("ID should not be a negative number.");
        return;
    }
    for (i=0; i<idx; i++) {
	
        if (unum == in[i].BookID) {
        
            uflag=1;
            break;
        }
    }
    
    if (uflag == 1) {
    	
        printf("Enter Book Name : \n");
    	scanf("%s", in[idx].BookName);
    
    	printf("Enter Publication Date : \n");
    	scanf("%s", in[idx].PublicDate);
    
    	printf("Enter PublicationName : \n");
    	scanf("%s", in[idx].PublisherName);
    
    	printf("Enter publisher Phone number: \n");
    	scanf("%d", &in[idx].Phone);
    
    	printf("Enter Author name: \n");
    	scanf("%s", in[idx].AuthorName);
    
    	printf("Enter Author Email Address: \n");
    	scanf("%s", in[idx].Email);
    
		return;
    }
    else {
        printf("\nThis ID does not exist!\n");
        return;
    }
    return;
}

int del() {
	int dnum, i, j, dflag=0;
    
    printf("\nEnter Book ID to delete : ");
    scanf("%d", &dnum);
    if (dnum < 0) {
        printf("ID should not be a negative number.");
        return;
    }
    for (i=0; i<idx; i++) {
        if (dnum == in[i].BookID) {
            dflag = 1;
            break;
        }
    }
    if (dflag == 1){
        for (j=i; j<idx; j++) {
            in[j] = in[j + 1];
        }
        idx--;
    }
    else {
	
        printf("\n This ID is not in this system.\n");
        return;
    }
    return;
}

int search() {
	int i, snum, sflag=0;
   
    printf("\nEnter id of book to find : ");
    scanf("%d", &snum);
    if (snum < 0) {
	
        printf("ID should not be a negative number.");
        return;
    }
    for (i = 0; i < idx; i++) {
        if (snum == in[i].BookID) {
        	
            printf("%d is exist in index %d\n", snum, i);
            break;
        }
    }
    return;
}

int auth() {
	int i;
    char aname[20];
    printf("\nEnter author's name of book to find : ");
    scanf("%s", aname);
    for (i = 0; i < idx; i++) {
    	
        if (strcmp(aname, in[i].AuthorName) == 0) {
            
            printf("Book ID: %d\n",in[i].BookID);
			printf("Book Name: %s\n",in[i].BookName);
			printf("Publication Date: %s\n",in[i].PublicDate);
			printf("Publisher Name: %s\n",in[i].PublisherName);
			printf("Publisher Phone Number: %d\n",in[i].Phone);
			printf("Author Name: %s\n",in[i].AuthorName);
			printf("Author Email Address: %s\n\n",in[i].Email);
        }
    }
    return;
}

int pub() {
	int i;
    char pname[20];
    printf("\nEnter Publisher's name of book to find : ");
    scanf("%s", pname);
    for (i=0; i<idx; i++) {
       
        if (strcmp(pname, in[i].PublisherName) == 0) {
           
            printf("Book ID: %d\n",in[i].BookID);
			printf("Book Name: %s\n",in[i].BookName);
			printf("Publication Date: %s\n",in[i].PublicDate);
			printf("Publisher Name: %s\n",in[i].PublisherName);
			printf("Publisher Phone Number: %d\n",in[i].Phone);
			printf("Author Name: %s\n",in[i].AuthorName);
			printf("Author Email Address: %s\n\n",in[i].Email);
        }
    }
    return;
}

int all() {
	int i;
	printf("Display a list of all book\n");
    for (i=0; i<idx; i++)
    {		
		printf("Book ID: %d\n",in[i].BookID);
		printf("Book Name: %s\n",in[i].BookName);
		printf("Publication Date: %s\n",in[i].PublicDate);
		printf("Publisher Name: %s\n",in[i].PublisherName);
		printf("Publisher Phone Number: %d\n",in[i].Phone);
		printf("Author Name: %s\n",in[i].AuthorName);
		printf("Author Email Address: %s\n\n",in[i].Email);
    }
    return;
}

int main(void) {
	int flag=1, num;
	
	while(1) {
		printf("1.Add book information.\n2.Update book information\n3.Delete book information\n");
		printf("4.Search book information\n5.Display a list of book(s) published by an author a\n");
		printf("6.Display a list of book(s) published by a publisher p\n7.Display a list of all book");
	
		printf("\n\nChoice one: ");
		scanf("%d",&num);
	
		switch(num) {
	
		case 1:
			add();
			break;
		case 2:
			update();
			break;
		case 3:
			del();
			break;
		case 4:
			search();
			break;
		case 5:
			auth();
			break;
		case 6:
			pub();
			break;
		case 7:
			all();
			break;
		default:
			break;
		}
	}
	

}

















#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int autid = 0;

struct author token_author(char given[]);
struct book token_book(char given[]);

int dup_id_check(int key);
int dup_aut_check(char keyname[]);

void print_spec_aut(struct author a);
void print_spec_book(struct book b);
void display_all_book(void);

struct author findAut(char keyname[]);
struct book findBook(char keyname[]);
int find_autid(char keyname[]);

int del_book(char keyname[]);
int update_book(char keyname[]);
int del_aut(char keyname[]);
int update_aut(char keyname[]);

void add_aut(char name[]);
int read_autid(void);
void addbook(int tempid);

struct book {
	int id;
	char name[20];
	char pubDate[20];
	char pubName[20];
	int autid;
};
struct author {
	int autid;
	char name[20];
	char address[20];
	char phoneNum[20];
	char email[20];
	char bio[20];
};


struct book token_book(char given[]) {

	struct book temp;
	char seps[] = ";";
	char* token = NULL;
	char* next_token = NULL;

	token = strtok_s(given, seps, &next_token);

	int idx = 0;
	while ((token != NULL)) {
		switch (idx) {
		case 0:
			temp.id = atoi(token);
			break;
		case 1:
			strcpy_s(temp.name, 20, token);
			break;

		case 2:
			strcpy_s(temp.pubDate, 20, token);
			break;

		case 3:
			strcpy_s(temp.pubName, 20, token);
			break;

		case 4:
			temp.autid = atoi(token);
			break;

		default:
			break;
		}
		idx++;
		token = strtok_s(NULL, seps, &next_token);
	}
	return temp;
}
struct author token_author(char given[]) {

	struct author temp;
	char seps[] = ";";
	char* token = NULL;
	char* next_token = NULL;
	//문자열을 자르는 기준
	token = strtok_s(given, seps, &next_token);

	int idx = 0;
	while ((token != NULL)) {
		switch (idx) {
		case 0:
			temp.autid = atoi(token);
			break;
		case 1:
			strcpy_s(temp.name, 20, token);
			break;

		case 2:
			strcpy_s(temp.address, 20, token);
			break;

		case 3:
			strcpy_s(temp.phoneNum, 20, token);
			break;

		case 4:
			strcpy_s(temp.email, 20, token);
			break;

		case 5:
			strcpy_s(temp.bio, 20, token);
			break;
		default:
			break;
		}
		idx++;
		token = strtok_s(NULL, seps, &next_token);
	}
	return temp;
}

int dup_id_check(int key) { //dup => return 1 else return 0-----------------------------------------
	FILE* ptb;
	int error = fopen_s(&ptb, "bookinfo.txt", "r");
	if (error != 0) {
		return 0; //there isnt exist bookinfo file, so return 0
	}
	int dupidx=0;
	if (key < 0)
		dupidx++;
	
	char line[80];
	while (fgets(line, sizeof(line), ptb) != NULL) {
		struct book temp = token_book(line);
		if (key == temp.id) {
			dupidx++;
			break;
		}
	}
	
	fclose(ptb);
	if (dupidx == 0) {
		return 0;
	}
	else
		return 1;

}
int dup_aut_check(char keyname[]) {//there is dup name = return 1, else 0---------------------------------------
	FILE* pta;
	int error = fopen_s(&pta, "autinfo.txt", "r");
	if (error != 0) {
		return 0;//there isnt exist autinfo file, so return 0
	}
	int dupidx=0;
	char line[120];
	while (fgets(line, sizeof(line), pta)!=NULL) {
		struct author temp = token_author(line);
		if (strcmp(keyname, temp.name) == 0) {
			dupidx++;
		}
	}
	fclose(pta);
	if (dupidx == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

void print_spec_aut(struct author a) {
	printf("Author Name : %s\n", a.name);
	printf("Author Address : %s\n", a.address);
	printf("Author Phone Number : %s\n", a.phoneNum);
	printf("Author E-mail : %s\n", a.email);
	printf("Author short Biography : %s\n\n", a.bio);
}
void print_spec_book(struct book b) {
	printf("Book ID : %d\n", b.id);
	printf("Book Name : %s\n", b.name);
	printf("Publication Date : %s\n", b.pubDate);
	printf("Publisher : %s\n\n", b.pubName);
}
void display_all_book(void) {
	FILE* ptb;
	int error = fopen_s(&ptb, "bookinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	char line[80];
	while (fgets(line, sizeof(line), ptb) != NULL) {
		struct book temp = token_book(line);
		printf("Book name : %s\n", temp.name);
	}
	fclose(ptb);
	printf("\n");
}
struct author findAut_by_id(int keyid) {
	FILE* pta;
	int error = fopen_s(&pta, "autinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct author temp;
	int check = 0;
	char line[120];
	while (fgets(line, sizeof(line), pta) != NULL) {
		temp = token_author(line);
		if (keyid==temp.autid) {
			check++;
			break;
		}
	}
	fclose(pta);
	
	if (check != 0) {
		return temp;
	}
	else {
		struct author null_aut;
		null_aut.autid = -1;
		return null_aut;
	}
}

struct author findAut(char keyname[]) {//return entered name's struct.. if there isn't exist the name, return struct that autid is -1
	FILE* pta;
	int error = fopen_s(&pta, "autinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct author temp;
	int check = 0;
	char line[120];
	while (fgets(line, sizeof(line), pta) != NULL) {
		temp = token_author(line);
		if (strcmp(keyname, temp.name) == 0) {
			check++;
			break;
		}
	}
	fclose(pta);

	if (check != 0) {
		return temp;
	}
	else {
		struct author null_aut;
		null_aut.autid = -1;
		return null_aut;
	}


}
struct book findBook(char keyname[]) {//return entered name's struct.. if there isn't exist the name, return struct that bookid is -1
	FILE* ptb;
	int error = fopen_s(&ptb, "bookinfo.txt", "r");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct book temp;
	int check = 0;
	
	char line[100];
	while (fgets(line, sizeof(line), ptb) != NULL) {
		temp = token_book(line);
		if (strcmp(keyname, temp.name) == 0) {
			check++;
			break;
		}	
	}
	fclose(ptb);

	if (check != 0) {
		return temp;
	}
	else {
		struct book null_book;
		null_book.id = -1;
		return null_book;
	}
}

int find_autid(char keyname[]) {//return keyname's autid, if there isnt exist the name, return -1;
	struct author temp = findAut(keyname);
	if (temp.autid == -1) {
		return -1;
	}
	else {
		return temp.autid;
	}
}

int del_book(char keyname[]) {//delete success => return 1, else return 0;
	
	FILE* ptb;
	FILE* ptt;
	int error = fopen_s(&ptb, "bookinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	int error1 = fopen_s(&ptt, "tempinfo.txt", "w+");
	if (error1 != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct book temp;
	int delcheck = 0;
	
	char line[100];
	while (fgets(line, sizeof(line), ptb) != NULL) {
		temp = token_book(line);
		if (strcmp(keyname, temp.name) == 0) {
			delcheck++;
		}
		else {
			fprintf(ptt, "%d;%s;%s;%s;%d\n", temp.id, temp.name, temp.pubDate, temp.pubName, temp.autid);
		}
	}
	fclose(ptt);
	fclose(ptb);
	if (delcheck == 0) {
		return 0;
	}
	else {
		remove("bookinfo.txt");
		rename("tempinfo.txt", "bookinfo.txt");
		return 1;
	}
	
}
int update_book(char keyname[]) {
	FILE* ptb;
	FILE* ptt;
	int error = fopen_s(&ptb, "bookinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	int error1 = fopen_s(&ptt, "tempinfo.txt", "w+");
	if (error1 != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct book temp;
	int upcheck = 0;
	char line[100];
	
	while (fgets(line, sizeof(line), ptb) != NULL) {
		temp = token_book(line);
		if (strcmp(keyname, temp.name) == 0) {
			printf("Enter new Publication Date : ");
			gets(temp.pubDate);
			printf("Enter new Publisher name : ");
			gets(temp.pubName);
			printf("You want to upadate author? \n yes:1 no:0\n");
			int idx;
			scanf_s("%d", &idx);
			getchar();
			
			if (idx) {
				struct author a;
				printf("Enter new author name : ");
				char tempaut[20];
				gets(tempaut);
				int newid = find_autid(tempaut);
				printf("%d", newid);
				if (newid == -1) {//새 작가 추가
					temp.autid = autid;
					add_aut(tempaut);
				}
				else {//newid에 tempaut 의 autid 저장
					temp.autid = newid;
				}
			}
			fprintf(ptt, "%d;%s;%s;%s;%d\n", temp.id, temp.name, temp.pubDate, temp.pubName, temp.autid);
			upcheck++;
		}
		else {
			fprintf(ptt, "%d;%s;%s;%s;%d\n", temp.id, temp.name, temp.pubDate, temp.pubName, temp.autid);
		}
	}
	fclose(ptt);
	fclose(ptb);
	if (upcheck == 0) {
		return 0;
	}
	else {
		remove("bookinfo.txt");
		rename("tempinfo.txt", "bookinfo.txt");
		return 1;
	}
	
}

int del_aut(char keyname[]) {//delete success => return 1, else return 0;
	FILE* pta;
	FILE* ptt;
	int error = fopen_s(&pta, "autinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	int error1 = fopen_s(&ptt, "tempinfo.txt", "w+");
	if (error1 != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct author temp;
	int delcheck = 0;
	char line[100];
	
	while (fgets(line, sizeof(line), pta)!=NULL){
		temp = token_author(line);
		//삭제하려는 name
		if (strcmp(keyname, temp.name) == 0) {
			delcheck++;
		}
		//나머지는 temp에 다 넣어준다.
		else {
			fprintf(ptt, "%d;%s;%s;%s;%s;%s",temp.autid, temp.name, temp.address, temp.phoneNum, temp.email, temp.bio);
		}
	}
	
	fclose(ptt);
	fclose(pta);
	
	if (delcheck == 0) {
		return 0;
	}
	//기존에 있는 파일 
	else {
		remove("autinfo.txt");
		rename("tempinfo.txt", "autinfo.txt");
		return 1;
	}
}
int update_aut(char keyname[]) {
	FILE* pta;
	FILE* ptt;
	int error = fopen_s(&pta, "autinfo.txt", "a+");
	if (error != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	int error1 = fopen_s(&ptt, "tempinfo.txt", "w+");
	if (error1 != 0) {
		printf("File opening Error!!");
		exit(1);
	}
	struct author temp;
	int upcheck = 0;
	char line[100];
	while (fgets(line, sizeof(line), pta) != NULL) {
		temp = token_author(line);
		if (strcmp(keyname, temp.name) == 0) {
			//내용 업데이트 실시 후 파일에 쓰기
			printf("Enter new author address : ");
			gets(temp.address);
			printf("Enter new author phone number : ");
			gets(temp.phoneNum);
			printf("Enter new author E-mail : ");
			gets(temp.email);
			printf("Enter new author Biography : ");
			gets(temp.bio);
			fprintf(ptt, "%d;%s;%s;%s;%s;%s\n", temp.autid, temp.name, temp.address, temp.phoneNum, temp.email, temp.bio);
			upcheck++;
		}
		else {//그대로 temp에 쓰기
			fprintf(ptt, "%d;%s;%s;%s;%s;%s", temp.autid, temp.name, temp.address, temp.phoneNum, temp.email, temp.bio);
		}
	}
	fclose(pta);
	fclose(ptt);
	if (upcheck == 0) {
		return 0;
	}
	else {
		remove("autinfo.txt");
		rename("tempinfo.txt", "autinfo.txt");
		return 1;
	}


}

void add_aut(char name[]) {
	int check = dup_aut_check(name);
	
	if (check == 0) {
		
		struct author temp;
        //문자 복사
		strcpy_s(temp.name, 20, name);
		printf("Enter author address : ");
		gets(temp.address);
		printf("Enter author phone number : ");
		gets(temp.phoneNum);
		printf("Enter author E-mail : ");
		gets(temp.email);
		printf("Enter author Biography : ");
		gets(temp.bio);
		FILE* pta;
        //a+: 파일을 읽고 추가쓰기 위해 오픈
        // 지정한 파일이 있으면 파일의 끝에서부터 내용을 추가
		int error = fopen_s(&pta, "autinfo.txt", "a+");
		if (error != 0) {
			//파일이 없으면 프로그램 종료
			printf("File opening Error!!");
			exit(1);
		}
		//특정한 형식에 맞춰 작성
		fprintf(pta, "%d;%s;%s;%s;%s;%s\n", autid, temp.name, temp.address, temp.phoneNum, temp.email, temp.bio);
		fclose(pta);
		autid++;
	}
	else {
		printf("%s's information is already exist!!\n\n",name);
	}
	
}
int read_autid(void) {
	FILE* pta;
    //fopen 리턴값 변수
	int error = fopen_s(&pta, "autinfo.txt", "r");
	if (error != 0) {
		return 0;
	}
	char line[120];
	while (fgets(line, sizeof(line), pta) != NULL){
	}
	struct author temp = token_author(line);
	fclose(pta);
	temp.autid++;
	return temp.autid;
}
int read_bookid(void) {
	FILE* ptb;
	int error = fopen_s(&ptb, "bookinfo.txt", "r");
	if (error != 0) {
		return 0;
	}
	char line[100];
	while (fgets(line, sizeof(line), ptb) != NULL) {
	}
	struct book temp = token_book(line);
	fclose(ptb);
	temp.id++;
	return temp.id;
}
void addbook(int tempid) {
	struct book b;
	b.id = tempid;
	getchar();

	printf("\nEnter Book Name : ");
	gets(b.name);
	printf("\nEnter Publication Date : ");
	gets(b.pubDate);
	printf("\nEnter Publisher Name : ");
	gets(b.pubName);

	char tempname[20];
	printf("\nEnter Author name : ");
	gets(tempname);

	FILE* pta;
	int error = fopen_s(&pta, "autinfo.txt", "a+");
	if (error != 0) {
		printf("File error!!");
		exit(1);
	}
	int autfindint;
	int autidx = 0;

	char temp[100];
	while (fgets(temp, sizeof(temp), pta) != NULL) {
		struct author tempaut = token_author(temp);
		if (strcmp(tempaut.name, tempname) == 0) {
			autfindint = tempaut.autid;
			autidx++;
		}
	}
	fclose(pta);
	if (autidx == 0) {//작가 정보 추가
		b.autid = autid;
		struct author a;
		strcpy_s(a.name, 20, tempname);
		printf("\nEnter author address : ");
		gets(a.address);
		printf("\nEnter author phone number : ");
		gets(a.phoneNum);
		printf("\nEnter author E-mail : ");
		gets(a.email);
		printf("\nEnter author Biography : ");
		gets(a.bio);
		FILE* ptv;
		int error = fopen_s(&ptv, "autinfo.txt", "a+");
		if (error != 0) {
			printf("File opening Error!!");
			exit(1);
		}
		fprintf(ptv, "%d;%s;%s;%s;%s;%s\n", autid, a.name, a.address, a.phoneNum, a.email, a.bio);
		fclose(ptv);
		FILE* ptk;
		int error2 = fopen_s(&ptk, "bookinfo.txt", "a+");
		if (error2 != 0) {
			printf("File opening Error!!");
			exit(1);
		}
		fprintf(ptk, "%d;%s;%s;%s;%d\n", b.id, b.name, b.pubDate, b.pubName, b.autid);
		fclose(ptk);
		autid++;
		printf("Book information saved successfully\n\n");
	}
	else {
		b.autid = autfindint;
		FILE* newptr;
		int error3 = fopen_s(&newptr, "bookinfo.txt", "a+");
		if (error3 != 0) {
			printf("File opening Error!!");
			exit(1);
		}
		fprintf(newptr, "%d;%s;%s;%s;%d\n", b.id, b.name, b.pubDate, b.pubName, b.autid);
		fclose(newptr);
		printf("You already entered %s's information,\nIf you want to update the information, go to option 2!\n\n", tempname);
	}

}


int main() {
	
	autid = read_autid();
	int flag = 0;
	do {
		int opt;
		printf("--------------------------------------------\n");
		printf("1. Add author information\n");
		printf("2. Update author information\n");
		printf("3. Delete author information\n");//
		printf("4. Search author information\n");//
		printf("5. Add book information\n");
		printf("6. Update book information\n");
		printf("7. Delete book information\n");//
		printf("8. Search book information\n");//
		printf("9. Display a list of all books\n");//
		printf("10. Exit\n");
		printf("Enter option you want to use : ");
		scanf_s("%d", &opt);
		printf("\n--------------------------------------------\n");
		getchar();
		switch (opt) {

		case(1): {//Add author information
			char tempaut[20];
			printf("Enter author name : ");
			gets(tempaut);
			add_aut(tempaut);
			break;
		}
		case(2): {//Update author information
			char key[20];
			printf("Enter Author Name you want to update : ");
			gets(key);
			printf("\n");
			int idx = update_aut(key);
			if (idx == 0) {
				printf("There isn't %s's information!!\n\n", key);
				break;
			}
			else {
				printf("%s's information updated successfully!!\n\n", key);
				break;
			}
			break;
		}
		case(3): {//Delete author information
			char key[20];
			printf("Enter Author Name you want to delete : ");
			gets(key);
			printf("\n");
			int idx = del_aut(key);
			if (idx == 0) {
				printf("There isn't %s's information!!\n\n", key);
				break;
			}
			else {
				printf("%s's information deleted successfully!!\n\n", key);
				break;
			}
		}
		case(4): {//search aut info
			struct author a;
			printf("Enter name you want to find : ");
			char key[20];
			gets(key);
			printf("\n\n");
			a = findAut(key);
			if (a.autid == -1) {
				printf("There isn't %s's information!!\n\n", key);
				break;
			}
			print_spec_aut(a);
			break;
		}
		case(5): {//Add book information
			int tempid;
			printf("Enter Book ID : ");
			scanf_s("%d", &tempid);
			int dupcheck = dup_id_check(tempid);
			if (dupcheck) {//duplicated ID input
				printf("You entered worng ID (duplicated or negative number!!)\n\n");
				break;
			}
			addbook(tempid);
			break;
		}
		case(6): {// Update book information
			char key[20];
			printf("Enter Book Name you want to update : ");
			gets(key);
			printf("\n");
			int idx = update_book(key);
			if (idx == 0) {
				printf("There isn't book %s!!\n\n", key);
				break;
			}
			else {
				printf("%s updated successfully!!\n\n", key);
				break;
			}
			
		}
		case(7): {//Delete book information
			char key[20];
			printf("Enter Book Name you want to delete : ");
			gets(key);
			printf("\n");
			int idx = del_book(key);
			if (idx == 0) {
				printf("There isn't book %s!!\n\n", key);
				break;
			}
			else {
				printf("%s deleted successfully!!\n\n", key);
				break;
			}
		}
		case(8): {//Search book information
			struct book b;
			printf("Enter name you want to find : ");
			char key[20];
			gets(key);
			b = findBook(key);
			if (b.id == -1) {
				printf("There isn't %s's information!!\n\n", key);
				break;
			}
			print_spec_book(b);
			struct author a = findAut_by_id(b.autid);
			if (a.autid == -1) {
				printf("There isn't exist %s author information!",b.name);
			}
			else if (a.autid != -1) {
				print_spec_aut(a);
			}

			break;
		}
		case(9): {//Display a list of all books
			display_all_book();
			break;
		}
		case(10): {
			flag++;
			break;
		}
		default:
			printf("You entered wrong number.\n\n");
		}
		} while (flag == 0);
}
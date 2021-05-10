#include <stdio.h>
#include <string.h>
struct Book
{
    int ID;
    char BookName[20];
    char BookDate[20];
    char PublisherName[20];
    int PublisherPhone;
    char AuthorName[20];
    char AuthorEmail[20];
};

int main()
{
    //반복문을 위한 변수
    int flag = 1;
    int number;
    //struct 변수 선언
    struct Book n[20];
    //책 갯수를 위한 변수
    int count = 0;

    while (flag){
        printf("\nEnter menu Select: \n");
        printf("1 : ADD BOOK\n");
        printf("2 : Update Book\n");
        printf("3 : Delete Book\n");
        printf("4: Search Book\n");
        printf("5: Display a list of book published by an author\n");
        printf("6: Display a list of book published by a publisher\n");
        printf("7: Display a list of all book\n");
        printf("8: Exit\n");
        scanf("%d", &number);
        switch (number)
        {

            case 1: {

                //중복확인 변수
                int Addflag = 1;
                printf("Enter ID :\n");
                scanf("%d", &n[count].ID);
                //ID가 음수일 경우 case문을 종료시킨다.
                if (n[count].ID < 0)
                {
                    printf("Enter a positive number");
                    break;
                }

                for (int i = 0; i < count; i++)
                {
                    if (n[count].ID == n[i].ID)
                    {
                        Addflag = 0;
                    }
                }
                //중복된게 있을 시 case 종료
                if (Addflag == 0)
                {
                    printf("Duplicate ID");
                    break;
                }

                printf("Enter Book Name : \n");
                scanf("%s", n[count].BookName);
                printf("Enter Publication Date : \n");
                scanf("%s", n[count].BookDate);
                printf("Enter PublicationName : \n");
                scanf("%s", n[count].PublisherName);
                printf("Enter publisher Phone number: \n");
                scanf("%d", &n[count].PublisherPhone);
                printf("Enter Author name: \n");
                scanf("%s", n[count].AuthorName);
                printf("Enter Author Email Address: \n ");
                scanf("%s", n[count].AuthorEmail);
                count++;
                break;
            };
            //업데이트
            case 2: {

                int updatenum, i;
                int updateflag = 0;
                printf("Enter ID :\n");
                scanf("%d", &updatenum);
                //ID가 음수일 경우 case문을 종료시킨다.
                if (updatenum < 0)
                {
                    printf("Enter a positive number");
                    break;
                }
                for (i = 0; i < count; i++)
                {
                    if (updatenum == n[i].ID)
                    {
                        updateflag = 1;
                        break;
                    }
                }
                //찾으려는 ID가 존재할 시
                if (updateflag == 1)
                {
                    printf("Enter Book Name : \n");
                    scanf("%s", n[i].BookName);
                    printf("Enter Publication Date : \n");
                    scanf("%s", n[i].BookDate);
                    printf("Enter PublicationName : \n");
                    scanf("%s", n[i].PublisherName);
                    printf("Enter publisher Phone number: \n");
                    scanf("%d", &n[i].PublisherPhone);
                    printf("Enter Author name: \n");
                    scanf("%s", n[i].AuthorName);
                    printf("Enter Author Email Address: \n ");
                    scanf("%s", n[i].AuthorEmail);
                    break;
                }
                else
                {
                    printf("No update ID");
                    break;
                }
                break;
            };
            //삭제
            case 3:{
                int deletenum, i;
                int deleteflag = 0;
                printf("Enter delete ID");
                scanf("%d", &deletenum);
                if (deletenum < 0)
                {
                    printf("Enter a positive number");
                    break;
                }
                for (i = 0; i < count; i++)
                {
                    if (deletenum == n[i].ID)
                    {
                        deleteflag = 1;
                        break;
                    }
                }
                if (deleteflag == 1)
                {
                    for (int j = i; j < count; j++)
                    {
                        n[j] = n[j + 1];
                    }
                    count--;
                }
                else
                {
                    printf("No Delete ID");
                    break;
                }
                break;
            //검색
            };
            case 4: {
                int searchnum;
                int searchflag = 0;
                printf("Enter a Search ID : ");
                scanf("%d", &searchnum);
                if (searchnum < 0)
                {
                    printf("Enter a positive number");
                    break;
                }
                for (int i = 0; i < count; i++)
                {
                    if (searchnum == n[i].ID)
                    {
                        printf("%d is exist in index %d", searchnum, i);
                        break;
                    }
                }
                break;
            }
            case 5: {
                char authorname[20];
                printf("Enter authorname: ");
                scanf("%s", authorname);
                for (int i = 0; i < count; i++)
                {
                    //두 문자열이 같으면 0
                    if (strcmp(authorname, n[i].AuthorName) == 0)
                    {
                        printf("Book ID: %d Book Name: %s Publication Date :%s Publisher Name: %s Publisher Phone Number:%d Author Name:%s Author Email Address:%s",
                        n[i].ID, n[i].BookName, n[i].BookDate, n[i].PublisherName, n[i].PublisherPhone, n[i].AuthorName, n[i].AuthorEmail);
                    }
                }
                break;
            }
            case 6: {
                char publishername[20];
                printf("Enter publishername: ");
                scanf("%s", publishername);
                for (int i = 0; i < count; i++)
                {
                    //두 문자열이 같으면 0
                    if (strcmp(publishername, n[i].PublisherName) == 0)
                    {

                        printf("Book ID: %d Book Name: %s Publication Date :%s Publisher Name: %s Publisher Phone Number:%d Author Name:%s Author Email Address:%s",
                        n[i].ID, n[i].BookName, n[i].BookDate, n[i].PublisherName, n[i].PublisherPhone, n[i].AuthorName, n[i].AuthorEmail);
                    }
                }
                break;
            };
            case 7:
                for (int i = 0; i < count; i++)
                {
                    printf("Book ID: %d Book Name: %s Publication Date :%s Publisher Name: %s Publisher Phone Number:%d Author Name:%s Author Email Address:%s",
                    n[i].ID, n[i].BookName, n[i].BookDate, n[i].PublisherName, n[i].PublisherPhone, n[i].AuthorName, n[i].AuthorEmail);
                    
                }
                break;
            case 8:
                flag = 0;
                break;
            default:
                break;
        }
        
    }
}
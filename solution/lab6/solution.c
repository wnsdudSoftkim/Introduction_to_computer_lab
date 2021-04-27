#include <stdio.h>
#include <string.h>
int main() {
    int tasknum=0;
    int studentID[100];
    //index
    int count = 0;
    while(1) {

        printf("Enter the number of Task 1~6 : \n");
        scanf("%d",&tasknum);
        if(tasknum<1|| tasknum>6) {
            break;
        }else if(tasknum==1) {
            //StudentID Should be limit 10 letter 
            //ex) 201700945
            int name=0;
            int flag = 0;
            printf("Plese Enter StudentID: \n");
            scanf("%d",&name);
            //Add index+1
            //Array value will be unique
            for(int i=0; i<count; i++) {
                if(name==studentID[i]) {
                    //when it's not unique
                    //count--
                    flag=1;
                    break;
                }
            }
            if(flag==1) {
                printf("This StudentID is not valid.\n");
            }else {
                studentID[count] = name;
                count++;
                printf("StudentID regist Success\n");
            }
        }else if(tasknum==2) {
            int name=0;
            printf("Enter the deleteID\n");
            scanf("%d",&name);
            int flag=0;
            for(int i=0; i<count; i++) {
                //find delete position
                if(name==studentID[i]) {
                    flag=1;
                    for(int j=i; j<count; j++) {
                        studentID[i] = studentID[i+1];
                        break;
                    }
                }
            }

            if(flag==0) {
                printf("Not Found\n");
            }else {
                count--;
            }
        }else if(tasknum==3) {
            int index = 0;
            int name=0;
            printf("Enter index and Student ID : \n");
            scanf("%d %d",&index,&name);
            //check id is unique
            int flag=0;
            for(int i=0; i<count; i++) {
                if(name==studentID[i]) {
                    //when it's not unique
                    //count--
                    flag=1;
                    break;
                }
            }
            if(index<0 || index>99 || flag==1)  {
                printf("Error");
            }else {
                count++;
                for(int i=index; i<count; i++) {
                    studentID[i] = studentID[i+1];

                }
                studentID[index-1] = name;
            }
        }else if(tasknum==4) {
            int name=0;
            printf("Plese Enter StudentID: \n");
            scanf("%d",&name);
            for(int i=0; i<count; i++) {
                if(name==studentID[i]) {
                    //when it's not unique
                    //count--
                    printf("Find ID %d",name);
                    break;
                }
            }
        }else if(tasknum==5) {
            int index = 0;
            int name=0;
            printf("Enter index and Student ID : \n");
            scanf("%d %d",&index,&name);
            if(index<0 || index>99)  {
                printf("Error");
            }else {
                studentID[index] = name;
                printf("Successfully Update!");
            }
        }else if(tasknum==6) {
            printf("StudentList :\n");
            for(int i=0; i<count; i++) {
                printf("%d\n",studentID[i]);
            }
        }
    }
    printf("Good bye~ \n");

}
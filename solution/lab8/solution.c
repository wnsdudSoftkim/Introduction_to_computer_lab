#include <stdio.h>
#include <string.h>
int studentID[100];
//index
int count = 0;
int searchStudent(int* name) {
    //To define True or False
    int flag = 0;
    for(int i=0; i<count; i++) {
        if((int)*name==studentID[i]) {
            //when it's not unique
            //count--
            flag=1;
            break;
        }
    }
    return flag;

}
int addStudent() {
    //StudentID Should be limit 10 letter 
    //ex) 201700945
    int name[10];
    int flag = 0;
    printf("Plese Enter StudentID: \n");
    scanf("%d",&name);
    //Add index+1
    //Array value will be unique
    flag = searchStudent(name);
    if(flag==1) {
        printf("This StudentID is not valid.\n");
    }else {
        studentID[count] = *name;
        count++;
        printf("StudentID regist Success\n");
    }
    
}
int deleteStudent() {
    int name[10];
    printf("Enter the deleteID\n");
    scanf("%d",&name);
    int flag=0;
    for(int i=0; i<count; i++) {
        //find delete position
        if(*name==studentID[i]) {
            flag=1;
        }
        for(int j=i; j<count; j++) {
            studentID[i] = studentID[i+1];
        }
    }

    if(flag==0) {
        printf("Not Found\n");
    }else {
        count--;
    }

}
int insertStudent() {
    int index = 0;
    int name[10];
    printf("Enter index and Student ID : \n");
    scanf("%d %d",&index,&name);
    //check id is unique
    int flag = searchStudent(name);
    if(index<0 || index>99 || flag==1)  {
        printf("Error");
    }else {
        count++;
        for(int i=index; i<count; i++) {
            studentID[i] = studentID[i+1];

        }
        studentID[index-1] = *name;
    }

}
//update exist ID change to New ID
int updateStudent() {
    int index = 0;
    int name[10];
    printf("Enter index and Student ID : \n");
    scanf("%d %d",&index,&name);
    if(index<0 || index>99)  {
        printf("Error");
    }else {
        studentID[index] = *name;
        printf("Successfully Update!");
    }

}
int displayStudent() {
    printf("StudentList :\n");
    for(int i=0; i<count; i++) {
        printf("%d\n",studentID[i]);
    }
}
int main() {
    int tasknum=0;
    while(1) {
        printf("Enter the number of Task 1~6 : \n");
        scanf("%d",&tasknum);
        if(tasknum<1|| tasknum>6) {
            break;
        }else if(tasknum==1) {
            addStudent();
        }else if(tasknum==2) {
            deleteStudent();
        }else if(tasknum==3) {
            insertStudent();
        }else if(tasknum==4) {
            int name[10];
            printf("Plese Enter StudentID: \n");
            scanf("%d",&name);
            searchStudent(name);
        }else if(tasknum==5) {
            updateStudent();
        }else if(tasknum==6) {
            displayStudent();
        }
    }
    printf("Good bye~ \n");

}
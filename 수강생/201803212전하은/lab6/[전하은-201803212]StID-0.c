#include<stdio.h>
#include<stdbool.h>

int main()
{
    int count=0, c;
    int stid[50];
   
     do{
        int id, i,num=-1;
        bool found = false;

        printf("What task do you want? \n1.add 2.delete 3.insert in position 4.search 5.update 6.display 7.out >> ");
        scanf_s("%d",&c);
        
        if (c<7){//c=7일경우 입력 안받고 종료
            printf("Enter student id :");
            scanf_s("%d", &id);
            if (id <= 0) {//id가 음수면 종료
                printf("inavailable id");
                c = 7;
            }
        }
        
        if (c == 1 || c == 3 || c == 5) {
            for (i = 0; i < count; i++) {//중복된 id를 입력하면 종료
                if (stid[i] == id) {
                    printf("id should be unique\n");
                    c = 7;
                }
            }
        }
        // 기능 시작
        if (c == 1) { //더하기
            stid[count] = id;
            
            count++;
        }
        else if (c == 2) {//빼기 -해당 위치 찾고 그 뒤에거 앞당기기
            for (i = 0; i < count; i++) {
                if (stid[i] == id) {
                    num = i;
                }
            } 
            if (num == -1) {
                printf("We can't find your id\n");
            }
            else { 
                for (i = num; i < count; i++) {
                    stid[i] = stid[i + 1];
                }
                count--;
            }
           
        }
        else if (c == 3) {//특정 위치에 집어넣기 -집어넣고 뒤에거 한칸씩 이동
            printf("where do you want to insert id? (it should be between 0 and %d): ", count);
            scanf_s("%d", &num); 
            for (i = num; i < count; i++) {
                stid[i+1] = stid[i];
            }
            stid[num] = id;
            count++;
        }
        else if (c == 4) {//찾기
            for (i = 0; i < count; i++)
                if (stid[i] == id) found = true;

            if (found == true)
                printf("%d is in the array.\n", id);
            else
                printf("%d is not in the array.\n", id);

        }
        else if (c == 5) {//업데이트
            for (i = 0; i < count; i++) {
                if (stid[i] == id) {
                    printf("Enter new id : ");
                    scanf_s("%d",&id);
                    stid[i] = id;
                }
            }
            
        }
        else if (c == 6) {//찾아서 화면에 프린트
            for (i = 0; i < count; i++) {
                if (stid[i] == id) {
                    printf("Your id : %d\n", id);
                    found = true;
                }
            }
            if (found == false) {
                printf("We can't find your id\n");
            }    
        }
        else {
            break;
        }
        printf("Student ID list >>\n");//현 리스트 상황 보여주기 
            for (i = 0; i < count; i++) {
                printf("%d\n", stid[i]);
            }
   

     } while (c >= 1 && c < 7);
     
}
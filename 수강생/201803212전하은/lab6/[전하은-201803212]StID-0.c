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
        
        if (c<7){//c=7�ϰ�� �Է� �ȹް� ����
            printf("Enter student id :");
            scanf_s("%d", &id);
            if (id <= 0) {//id�� ������ ����
                printf("inavailable id");
                c = 7;
            }
        }
        
        if (c == 1 || c == 3 || c == 5) {
            for (i = 0; i < count; i++) {//�ߺ��� id�� �Է��ϸ� ����
                if (stid[i] == id) {
                    printf("id should be unique\n");
                    c = 7;
                }
            }
        }
        // ��� ����
        if (c == 1) { //���ϱ�
            stid[count] = id;
            
            count++;
        }
        else if (c == 2) {//���� -�ش� ��ġ ã�� �� �ڿ��� �մ���
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
        else if (c == 3) {//Ư�� ��ġ�� ����ֱ� -����ְ� �ڿ��� ��ĭ�� �̵�
            printf("where do you want to insert id? (it should be between 0 and %d): ", count);
            scanf_s("%d", &num); 
            for (i = num; i < count; i++) {
                stid[i+1] = stid[i];
            }
            stid[num] = id;
            count++;
        }
        else if (c == 4) {//ã��
            for (i = 0; i < count; i++)
                if (stid[i] == id) found = true;

            if (found == true)
                printf("%d is in the array.\n", id);
            else
                printf("%d is not in the array.\n", id);

        }
        else if (c == 5) {//������Ʈ
            for (i = 0; i < count; i++) {
                if (stid[i] == id) {
                    printf("Enter new id : ");
                    scanf_s("%d",&id);
                    stid[i] = id;
                }
            }
            
        }
        else if (c == 6) {//ã�Ƽ� ȭ�鿡 ����Ʈ
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
        printf("Student ID list >>\n");//�� ����Ʈ ��Ȳ �����ֱ� 
            for (i = 0; i < count; i++) {
                printf("%d\n", stid[i]);
            }
   

     } while (c >= 1 && c < 7);
     
}
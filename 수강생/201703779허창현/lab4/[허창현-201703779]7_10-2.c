#include<stdio.h>
#include<string.h>
//7.10
#define max 50

int main_10()
{
    char s1[max];
    int count = 0;
    printf("���ڿ��� �Է��ϼ���: ");

    scanf_s("%[^\n]%*c",s1, sizeof(s1)); //\n �Է� ������ ��� ���ڿ��� �Է� ����
  
    for (int i = 0; i < max ; i++) {
        //printf("%d\n", i);
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A'
            || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U') {
            count++;
        }
    }
    printf("Your sentnece contains %d vowels\n", count);
}
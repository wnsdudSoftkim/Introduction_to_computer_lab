#include <stdio.h>

int Prime_Number(int a);

int main(void) {
    int num;
    printf("Enter a number:");
    scanf_s("%d", &num);
    Prime_Number(num);
    return 0;
}

int Prime_Number(int a) {
    int count = 0; //����� ������ �˷��ִ� ����
    for (int i = 1; i <= a; i++) {        //1���� �Է��� ����ŭ �ݺ�
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)               //i���ٰ� 1���� i��ŭ ���� ������ ��� ���� ����
                count++;
        }
        if (count == 2) // �Ҽ��̸� ���
            printf("%d ", i);
        count = 0; //����� ���� �ʱ�ȭ
    }
    printf("\n");
    return 0;
}
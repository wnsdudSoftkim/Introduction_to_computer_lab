#include <stdio.h>

int main(void)
{
    char ch, initial = ' ';
    int count = 0;

    printf("Enter a first and last name:");//맨앞 , 중간, 끝 스페이스 한번 

    ch = getchar();
    while (ch != '\n') {
        
        if (count == 1) {
            initial = ch;
            count++;
        }
        else if (count == 3) {
            printf("%c", ch);
        }
         
        if (ch == ' ') {
            count++;
            if (count == 4) {
            printf(", %c.", initial); break;
            }
        }
        ch = getchar();
    }
    

    return 0;
}

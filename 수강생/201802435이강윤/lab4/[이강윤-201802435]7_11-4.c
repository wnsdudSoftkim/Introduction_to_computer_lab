#include <stdio.h>
#define N 20

int main(void)
{
    char name[N];
    printf("Enter a first and last name: ");

    int i = -1, stack; 
    // i는 인덱스 번호가 될 것이고, stack은 스페이스가 되는 부분의 인덱스를 저장할 것임.
    do
    {   
        i++;
        name[i] = getchar();
        if (name[i] == ' ')     // stack은 이름 중에서 중간 스페이스 인덱스가 될 것임.
            stack = i;
    } while (name[i] != '\n'); // 엔터가 아닌 곳까지 name array에 문자들을 저장.

    for (int i = 0; name[i] != '\n'; i++) { // stack은 스페이스 해놓은 name인덱스. 그 이후로 출력해주면 last name이 나옴.
        if (i > stack)
            printf("%c", name[i]);
    }

    printf(", %c.", name[0]);
    
    return 0;
}
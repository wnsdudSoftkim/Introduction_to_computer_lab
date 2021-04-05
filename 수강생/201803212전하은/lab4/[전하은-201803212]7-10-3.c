#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    printf("Enter a sentence: ");
    ch = getchar();
    while (ch != '\n') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
            ch == 'A'|| ch =='E' || ch =='I' || ch=='O' || ch =='U') {
            count++; 
        }
       ch = getchar();
    }
    printf("Your sentence contains %d vowels.\n", count);

    return 0;
}

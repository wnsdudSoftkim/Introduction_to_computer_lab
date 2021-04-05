#include <stdio.h>
#define N 10

int main(void)
{
    char str[N] = {'A', 'a', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    char word;
    int count;

    printf("Enter a sentence: ");
    do
    {
        scanf("%c", &word);
        for (int i = 0; i < N; i++)
        {
            if (word == str[i])  count++;
        }
        
    } while (word != '\n');
    
    printf("Your sentence contains %d vowels", count);
    
    return 0;
}
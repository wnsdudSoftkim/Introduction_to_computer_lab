#include<stdio.h>
#include<string.h>

int main()
{
   char input;
   int answer;
   while(1) {
        input = getchar();
        if(input =='\n') break;
        strlwr(input);
        switch (input) {
            case 'a':
                answer++;
                break;
            case 'e':
                answer++;
                break;
            case 'i':
                answer++;
                break;
            case 'o':
                answer++;
                break;
            case 'u':
                answer++;
                break;
        
       default:
           break;
       }
   }
    printf("Your sentence contains %d vowels.", answer);
}

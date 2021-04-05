#include<stdio.h>
#include <ctype.h>

int main() {
    char input;
    int answer=0;
    printf("Enter sentence: ");
    while((input = getchar()) != '\n') {
        switch (tolower(input)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                answer++;
                break;
        }
    }
    printf("Your sentence contains %d vowels.", answer);
}

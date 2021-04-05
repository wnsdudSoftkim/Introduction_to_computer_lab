#include <stdio.h>
#include <string.h>

int main() {
    char arr[80] = {0};
    int i, n = 0;
    
    printf("Enter a sentence: ");
    gets(arr);

    for (i = 0; i < 80; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u') {
            n++;
        }
        else if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'e' || arr[i] == 'O' || arr[i] == 'U') {
            n++;
        }
    }

    printf("Your sentence contains %d vowels.", n);
}
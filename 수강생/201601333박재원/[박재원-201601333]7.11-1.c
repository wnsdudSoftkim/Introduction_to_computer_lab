#include <stdio.h>

int main() {
    char arr[30] = {0};
    int i, j = 0;

    printf("Enter a first and last name: ");
    gets(arr);

    while (arr[i] != ' ') {
        i++;
    }

    for (j = i; j < 30; j++) {
        printf("%c", arr[j]);
    }

    printf(", %c", arr[0]);

}
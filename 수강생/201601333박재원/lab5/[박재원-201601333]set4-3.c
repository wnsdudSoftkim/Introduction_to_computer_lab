// 4 - Write a C program to find smallest element in a list.
#include <stdio.h>

int main() {
    int arr[5] = {0};
    int i, j;

    printf("Enter 5 elements for the set: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arr[i] > arr[j]) break;
            if (j == 4) {
                printf("The smallest element is: %d", arr[i]);
            }
        }
    }
}
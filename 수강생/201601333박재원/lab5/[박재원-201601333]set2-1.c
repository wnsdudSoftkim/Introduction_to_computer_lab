// 2 - Write a C program to find union of two sets.

#include <stdio.h>

int main() {
    int arr1[5] = {0};
    int arr2[5] = {0};
    int uArr[10] = {0};
    int i = 0;
    int j = 0;
    int m = 0;

    printf("Enter 5 elements for first set: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    

    printf("Enter 5 elements for second set: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 5; i++) {
        uArr[m] = arr1[i];
        m++;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arr2[i] == arr1[j]) break;
            if (j == 4) {
                uArr[m] = arr2[i];
                m++;
            }
        }
    }
    printf("The union of two sets are: ");

    for (i = 0; i < m; i++) {
        printf("%d ", uArr[i]);
    }

}
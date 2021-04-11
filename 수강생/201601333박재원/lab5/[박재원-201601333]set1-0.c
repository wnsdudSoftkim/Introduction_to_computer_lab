//1 - Write a C program to find intersection of two sets.

#include <stdio.h>

int main() {
    int arr1[5] = {0};
    int arr2[5] = {0};
    int iArr[5] = {0};
    int i = 0;
    int j = 0;
    int k = 0;


    printf("Enter 5 elements for first set: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    

    printf("Enter 5 elements for second set: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (arr1[i] == arr2[j]) {
                iArr[k] = arr1[i];
                k++;
            }
        }
    }
    printf("The intersection of two sets are: ");

    for (i = 0; i < k; i++) {
        printf("%d ", iArr[i]);
    }


}

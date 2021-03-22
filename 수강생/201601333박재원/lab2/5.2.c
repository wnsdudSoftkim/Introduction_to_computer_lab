#include <stdio.h>

int main() {
    int hour = 0;
    int min = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    
    if (hour > 12) {
        hour -= 12;
        printf("Equivalent 12-hour time: %d:%d PM", hour, min);
    }
    else printf("Equivalent 12-hour time: %d:%d AM", hour, min);
}
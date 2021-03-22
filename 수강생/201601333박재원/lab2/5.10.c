#include <stdio.h>

int main() {
    int num = 0;
    
    printf("Enter numerical grade: ");
    scanf("%d", &num);

    printf("Letter grade: ");

    switch(num) {

        case 0 ... 59 :
           printf("F");
           break;
        case 60 ... 69 :
           printf("D");
           break;
        case 70 ... 79 :
           printf("C");
           break;
        case 80 ... 89 :
           printf("B");
           break;
        case 90 ... 100 :
           printf("A");
           break;
    }
}
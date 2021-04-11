#include <stdlib.h>

int main() {
    int random_list[10];
    int random_list2[10];
    int answer[10];
    int count=0;
    for(int i=0; i<10; i++) {
        random_list[i] = rand();
        random_list2[i] = rand();
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if( random_list[i] == random_list2[j]) {
                answer[count++] = random_list[i];
                break;
            }
        }
    }
    for(int i=0; i<count; i++) {
        printf("answer : %d \n",answer[i]);
    }
    
}





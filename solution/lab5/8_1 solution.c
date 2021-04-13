#include <stdlib.h>

int main() {
    int random_list[10];
    int random_list2[10];
    int answer[10];
    int count=0;
    printf("List1 List2 : \n");
    for(int i=0; i<10; i++) {
        random_list[i] = rand()%30;
        random_list2[i] = rand()%30;
        printf("%d %d \n", random_list[i],random_list2[i]);

    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if( random_list[i] == random_list2[j]) {
                answer[count] = random_list[i];
                count++;
                break;
            }
        }
    }
    for(int i=0; i<count; i++) {
        printf("answer : %d \n",answer[i]);
    }
    
}





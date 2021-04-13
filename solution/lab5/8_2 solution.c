int main() {
    int random_list[10];
    int random_list2[10];
    int answer[20];
    int count=10;
    printf("List1 List2 : \n");
    for(int i=0; i<10; i++) {
        random_list[i] = rand()%30;
        random_list2[i] = rand()%30;
        printf("%d %d \n", random_list[i],random_list2[i]);

    }
    for(int i=0; i<10; i++) {
        answer[i] =random_list[i];
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if( answer[i] == random_list2[j]) {
                break;
            }
            if(j ==9) {
                answer[count] = random_list2[i];
                count++;
            }
        }
    }
    for(int i=0; i<count; i++) {
        printf("answer : %d\n ",answer[i]);
    }
    
}
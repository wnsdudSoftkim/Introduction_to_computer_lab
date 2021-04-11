int main() {
    int random_list[10];
    int random_list2[10];
    int answer[20];
    int count=10;
    for(int i=0; i<10; i++) {
        random_list[i] = rand();
        random_list2[i] = rand();
    }
    for(int i=0; i<10; i++) {
        answer[i] =random_list[i];
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if( random_list[i] == random_list2[j]) {
                break;
            }else {
                answer[count++] = random_list2[j];
            }
        }
    }
    for(int i=0; i<count; i++) {
        printf("answer : %d\n ",answer[i]);
    }
    
}
int main2() {
    int random_list[10];
    int min = 0;
    printf("List Value: \n");
    for(int i=0; i<strlen(random_list); i++) {
        random_list[i] = rand();
        printf("%d",random_list[i]);
        if(random_list[i]<min) {
            min = random_list[i];
        }
    }
    printf("min : %d",min);
}
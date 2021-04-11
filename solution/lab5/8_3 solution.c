int main() {
    int max = 0;
    int random_list[10];
    printf("List Value: \n");
    for(int i=0; i<strlen(random_list); i++) {
        random_list[i] = rand();
        printf("%d",random_list[i]);
        if(random_list[i]>max) {
            max = random_list[i];
        }
    }
    printf("max : %d",max);
}
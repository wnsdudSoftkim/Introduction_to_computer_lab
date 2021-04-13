int main() {
    int random_list[10];
    int min = 100;
    printf("List Value: \n");
    for(int i=0; i<10; i++) {
        random_list[i] = rand()%30;
        printf("%d \n",random_list[i]);
        if(random_list[i]<min) {
            min = random_list[i];
        }
    }
    printf("min : %d",min);
}
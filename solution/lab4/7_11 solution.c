int main() {
    char first[10];
    char last[10];
    printf("Enter a first and last name: ");
    scanf("%s %s",first,last);
    for(int i=0; i<strlen(last); i++) {
        printf("%c",last[i]);
    }
    printf(", %c",first[0]);
}
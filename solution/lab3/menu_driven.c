int even() {
    int number, count=0;
    int answer[500];
    printf("Enter a Number: ");
    scanf("%d",&number);
    for(int i =0; i<=number; i++){
        if(i%2==0){
            answer[count]=i;
            count++;
        }
    }
    //10입력시[0,2,4,6,8,10]
    for(int i =0; i<count; i++){
        printf("%d\n",answer[i]);
    }
}
int odd() {
    int number, count=0;
    int answer[500];
    printf("Enter a Number: ");
    scanf("%d",&number);
    for(int i =0; i<=number; i++){
        if(i%2!=0){
            answer[count]=i;
            count++;
        }
    }
    //10입력시[1,3,5,7,9]
    for(int i =0; i<count; i++){
        printf("%d\n",answer[i]);
    }
}
int checkPrime() {
    int number;
    printf("Enter a Number: ");
    scanf("%d",&number);
    if(number ==1) {
        printf("Prime");
    }else {
        for(int i=2; i<=number; i++){
            if(number%i==0){ // 나머지 있으니까 소수 x
                printf("Not Prime");
                break;
            }else {
                printf("Prime");
                break;
            }
        }
    }
}
int getPrime() {
    int a,b,number,i=0,j=0,count=0,temp=0;
    int answer[500];
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);

    if (a >b){
        printf("No Prime");
    }else if(a ==b) {
        number = a;
        checkPrime();
    }else {
        for(j=a; j<=b; j++){
            for(i =2; i<=j;i++){
                if((j%i)==0){
                    break;
                }
            }
            if(i==j){
                answer[count] = j;
                count++;
            }
        }
        
    }
    for(int i =0; i<count; i++){
        printf("%d\n",answer[i]);
    }


}
int factorial(int fac) {
    if (fac==1) {
            return 1.0;
    }
    return fac*factorial(fac-1);
}
int fibonacci(num) {
    if(num==0) return 0;
    if(num==1) return 1;
    return fibonacci(num-2)+fibonacci(num-1);
}
int main() {
    int selectNum=1;
    int fac;
    int fac1,fac2;
    int num;
    printf("1. Display a list of even numbers.\n");
    printf("2. Display a list of odd numbers.\n");
    printf("3. For a given number \'n\' check if \'n\' is a prime number.\n");
    printf("4. Display a list of prime numbers between numbers \'n\' and \'m\'.\n");
    printf("5. Display a factorial of a given number \'n\'\n");
    printf("6. Find factorial of all numbers between numbers \'n\' and \'m\'\n");
    printf("7. Generate the Fibonacci sequence up to a number \'n\'");
    printf("\n0.exit\n");
    while(1){
        printf("Select menu item:");
        scanf("%d",&selectNum);
        if(selectNum==0){
            break;
        }
        if(selectNum==1){
            even();
        }else if(selectNum==2) {
            odd();
        }else if(selectNum==3) {
            checkPrime();
        }else if(selectNum==4) {
            getPrime();
        }else if(selectNum==5) {
            scanf("%d",&fac);
            printf("%d",factorial(fac));
        }
        else if(selectNum==6) {
            scanf("%d%d",&fac1,&fac2);
            for(int i =fac1; i<=fac2; i++){
                printf("%d",factorial(i));
            } 
        }
        else if(selectNum==7) {
            scanf("%d",&num);
            printf("%d",fibonacci(num));

        }
    }
}
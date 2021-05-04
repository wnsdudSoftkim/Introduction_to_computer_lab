#include <stdio.h>
//선택 정렬

int main() {
    int number,temp,data[10];
    printf("Enter a number of list : ");
    scanf("%d",&number);
    for(int i=0; i<number; i++) {
        scanf("%d",&data[i]);
    }
    for(int i=0; i<number-1; i++) {

        for(int j=i+1; j<number; j++) {
            //기준이 되는 것보다 크면 바꿔준다.
            if(data[i]>data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }   
    }
    for(int i=0; i<number; i++) {
        printf("%d ",data[i]);
    }
}
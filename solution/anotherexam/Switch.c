#include <stdio.h>

int main() {
    int number,i,j,m,temp,A[10];
    printf("Enter a number of list : ");
    scanf("%d",&number);
    for(i=0; i<number; i++) {
        scanf("%d",&A[i]);
    }
    for(int x=0; x<number-1; x++) {
        int highest = x;
        for(int y=x+1; y<number; y++) {
            if((A[x]==A[y] && (x!=y))) {
                printf("%d\n",A[y]);
            }
        }
    }
    j=i-1;
    i=0;
    while(i<j) {
        temp = A[i];
        A[i] = A[j];
        A[j] =  temp;
        i++;
        j--;
    }
    for(int i=0; i<number; i++) {
        printf("%d\n",A[i]);
    }
}
#include <math.h>
#include <stdio.h>
float factorial(int fac) {
    if (fac==1) {
        return 1.0;
    }
    return (float)fac*factorial(fac-1);
}
float mathematiclal(int n) {
    float answer = 1.0;
    if (n==0) {
        answer= 1.0;
    }
    else {
        for(int i =1; i<n; i++){
            answer +=  (1.0/factorial(i));
            // printf("%f",answer);
        }
    }
    return answer;
}

int main() {
    int n;
    printf("Enter integer:");
    scanf("%d",&n);
    printf("nearbyint: %.0f",nearbyint(mathematiclal(n)));
}

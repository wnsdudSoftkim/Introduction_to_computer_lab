#include <math.h>
#include <stdio.h>
//e값을 추정하는 문제
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
//#6-11
//double factorial(double a);
//
//int main() {
//	int n, i;
//	double j,e=1;
//
//	printf("Enter the n : ");
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		j = 1 / factorial(i);
//		e += j;
//	}
//	printf("approximates e : %f ",e);
//}
//double factorial(double a) {
//	int x, y=1;
//
//	for (x = 1; x <= a; x++) {
//		y *= x;
//	}
//	return y;
//}

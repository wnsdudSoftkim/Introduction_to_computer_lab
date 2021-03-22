// 사용자가 입력 한 4 개의 정수 중 가장 큰 것과 
// 가장 작은 것을 찾는 프로그램을 작성하십시오.
// 4 개의 정수 입력 : 21 43 10 35
// 최대 : 43
// 최소 : 10
// 가능한 한 적은 if 문 사용
//C에는 최소와 최대를 구하는 min, max 함수가 없다.
//다음과 같이 min, max를 직접 정의하여 
//사용해야 한다.
#define max(a,b)  (((a) > (b)) ? (a) : (b))
#define min(a,b)  (((a) < (b)) ? (a) : (b))

int main(){
    int a,b,c,d;
    printf("Enter four integers :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Largest: %d\n", max(max(a,b),max(c,d)));
    printf("Smallest: %d",min(min(a,b),min(c,d)));
}



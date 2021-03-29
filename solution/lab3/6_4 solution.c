// 사용자가 하나 이상의 거래를 입력 할 수 있도록
//  섹션 5.2의 broker.c 프로그램에 루프를 추가하고 
//  프로그램은 각각에 대한 수수료를 계산합니다.
//   사용자가 거래 가치로 0을 입력하면 프로그램이
//    종료됩니다.
// 거래 가치 입력 : 30000
// 커미션 : $ 166.00
// 거래 가치 입력 : 20000
// 커미션 : $ 144.00
// 거래 가치 입력 : 0
int main() {
    int value;
    float commission;
    while(1) {
        printf("Enter value of trade : ");
        scanf("%d",&value);
        if (value==0){
            break;
        }
        if (value<=2500) {
            commission = 30+(float)value*0.017;

        }else if(value <= 6250) {
            commission = 56+(float)value*0.0066;

        }else if(value <= 20000) {
            commission = 76+(float)value*0.0034;
            
        }else if(value <= 50000) {
            commission = 100+(float)value*0.0022;
            
        }else if(value <= 500000) {
            commission = 155+(float)value*0.0011;
            
        }else {
            commission = 255+(float)value*0.0009;
        }
        printf("Commission: $%.2f\n",commission);
    }
    

}
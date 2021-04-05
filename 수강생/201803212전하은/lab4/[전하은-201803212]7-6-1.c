#include <stdio.h>
int main(void) {
    
    printf("int: %d, short: %d, long: %d, float: %d double: %d,long double: %d\n",
        sizeof(int),       
        sizeof(short),      
        sizeof(long),         
        sizeof(float),
        sizeof(double),
        sizeof(long double)    
    );

    return 0;

}
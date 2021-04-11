#include <stdio.h>

int main(void) {
	int i;
	int a[] = {1,2,5,6,8,9,10};
	int b[] = {1,2,3,4,7,9,10};
	
	for(i=0;i<sizeof(a)/sizeof(int);i++) {
		if(a[i] == b[i])
			printf("intersection: %d\n",a[i]);
	}
	for(i=0;i<sizeof(a)/sizeof(int);i++) {
		if(a[i] != b[i]) {
			printf("union :%d \n",a[i]);
			printf("union :%d\n",b[i]);
		}
	}
}

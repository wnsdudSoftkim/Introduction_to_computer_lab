#include <stdio.h>

int main(void) {
	int i;
	int arr[] = {3,4,20,1,43,18,93,100,201,5};
	int temp = arr[0];
	
	for(i=0;i<sizeof(arr)/sizeof(int);i++) {
		if(temp < arr[i])
			temp = arr[i];
	}
	printf("largest element in a list: %d\n",temp);
	
	for(i=0;i<sizeof(arr)/sizeof(int);i++) {
		if(temp > arr[i])
			temp = arr[i];
	}
	printf("smallest element in a list: %d\n",temp);
	return 0;
}

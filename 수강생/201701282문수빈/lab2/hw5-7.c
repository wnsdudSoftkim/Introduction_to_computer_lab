#include <stdio.h>

int main(void) {
	int n1,n2,n3,n4,small1,small2,large1,large2;	
	int Largest, Smallest;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1<n2) {
		small1 = n1;
		large1 = n2;
	}
	else {
		small1 = n2;
		large1 = n1;
	}
	
	if(n3<n4) {
		small2 = n3;
		large2 = n4;
	}
	else {
		small2 = n4;
		large2 = n3;
	}
	
	if(small1 < small2) 
		Smallest = small1;
	else
		Smallest = small2;
	
	if(large1 < large2)
		Largest = large2;
	else
		Largest = large1;
		
	printf("Largest:%d\n",Largest);
	printf("Smallest:%d\n",Smallest);
	
	return 0;
}

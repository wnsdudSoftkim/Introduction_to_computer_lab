# include <stdio.h>

int main(){
	int d_amount;
	
	printf("Enterr a dollar amount : ");
	scanf_s("%d", &d_amount);
	
	printf("$20 bills : %d\n", d_amount/20);
	printf("$10 bills : %d\n", (d_amount%20)/10);
	printf("$5 bills : %d\n", (d_amount%10)/5);
	printf("$1 bills : %d\n", (d_amount%5));
	
	return 0;
}

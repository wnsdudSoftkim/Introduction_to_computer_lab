#include<stdio.h>

int main_2(void)
{
	float pi = 3.141592f, r = 10.0f;               //Assign pi and r values.    
	float volume;

	volume = (4.0f / 3.0f) * pi * r * r * r;       
	
	/* Volume. if use (4/3), its value will be 1. 
	* If so, it will be miscalculated due to the wrong formula.*/

	printf("Volume :  %.1f\n", volume);
	return 0;
}

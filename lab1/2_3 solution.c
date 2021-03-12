# include <stdio.h>
# define PI 3.14

int main(){
	float volume, r;
	printf("Please Enter a radius (m) : ");
	scanf_s("%f", &r);
	
	volume = (4.0f/3.0f)*r*r*r*PI;
	printf("the volume of a sphere : %.3f\n", volume);
	
	return 0;
}

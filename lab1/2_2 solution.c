# include <stdio.h>
# define PI 3.14

int main(){
	float volume = 10 * 10 * 10 * PI * (4.0f/3.0f);
	printf("the volume of a sphere with a 10-meter radius : %.3f\n", volume);
	
	return 0;
}

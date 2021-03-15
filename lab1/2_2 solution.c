/*
v = 4 / 3pie r ^ 3 공식을 사용하여 
반경이 10 미터 인 구의 기둥을 계산하는 프로그램을 작성하십시오
*/
# include <stdio.h>
# define PI 3.14

int main(){
	/* 공식 4/3r^3PI 이므로 */
	float volume = 10 * 10 * 10 * PI * (4.0f/3.0f);
	printf("the volume of a sphere with a 10-meter radius : %.5f\n", volume);
	
	return 0;
}

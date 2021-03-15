# include <stdio.h>
# define PI 3.14
// 사용자에게 구의 반경을 입력하라는 메시지를 표시하도록 
// 프로그래밍 project2의 프로그램을 수정합니다.
int main(){
	float volume, r;
	printf("Please Enter a radius (m) : ");
	scanf_s("%f", &r);
	//4/3*r^3*PI
	volume = (4.0f/3.0f)*r*r*r*PI;
	printf("the volume of a sphere : %.3f\n", volume);
	
	return 0;
}

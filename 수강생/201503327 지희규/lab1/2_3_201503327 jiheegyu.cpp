# include <stdio.h>

# define pie 3.14f

int main(void)
{
	int radius;
	
	printf("Enter the radius : ");
	scanf_s("%d", &radius);

	printf("The volume of a %d meter sphere is : %.2f\n", radius, (4.0f / 3.0f) * pie * radius * radius * radius);

	return 0;
}






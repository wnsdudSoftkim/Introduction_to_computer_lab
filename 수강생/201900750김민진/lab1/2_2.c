// computes the volume of a sphere with a 10-meter radius
// write 4/3 as 4.0f/3.0f

#include <stdio.h>

main()
{
	float volume, pi = 3.141592;

	volume = 4.0f / 3.0f * pi * 10 * 10 * 10;

	printf("The volume of a sphere with a 10-meter radius is %f cube meter.\n", volume);
}

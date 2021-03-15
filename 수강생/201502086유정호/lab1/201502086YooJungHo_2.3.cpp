#include <stdio.h> ////////////////////// Chapter2 Question 2.3

int main(void)
{
    int radius;
    float NUM_PIE = 3.141592;
    printf("\nEnter the radius of a sphere: ");
    scanf_s("%d", &radius);

    printf("The volume of a %d-meter sphere is: %.2f\n\n",
        radius, (4.0f / 3.0f) * NUM_PIE * (radius * radius * radius));

    return 0;
}
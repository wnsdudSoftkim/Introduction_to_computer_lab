#include <stdio.h> ////////////////////// Chapter2 Question 2.2

int main(void)
{
    int RAD = 10;
    float NUM_PIE = 3.141592;
    printf("\nThe volume of a %d-meter sphere is: %.2f\n\n",
        RAD, (4.0f / 3.0f) * NUM_PIE * (RAD * RAD * RAD));

    return 0;
}

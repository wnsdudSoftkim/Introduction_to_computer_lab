#include <stdio.h>
#define PIE 3.14f

int main()
{
    int radius;
    int mul3radius;
    float formula = 4.0f/3.0f;
    float volume;

    scanf("%d", &radius);
    mul3radius = radius * radius * radius;
    volume = formula * mul3radius * PIE;

    printf("%f",volume);

    return 0;
    
}
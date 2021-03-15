#include <stdio.h>
#define PIE 3.14f

int main()
{
    int radius = 10;
    int mul3radius = 10*10*10;
    float formula = 4.0f/3.0f;
    float volume = mul3radius * formula * PIE;

    printf("%f",volume);

    return 0;
    
}
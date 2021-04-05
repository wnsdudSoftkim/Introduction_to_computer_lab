#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char name, input;

    printf("Enter a first and last name : ");
    scanf_s(" %c", &name);

    while ((input = getchar()) != '\n')
    {
        if (input != ' ')
            putchar(input);
    }

    printf(", %c.", name);

    return 0;
}

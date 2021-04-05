#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char first_name, input_char;

    printf("\nEnter a first and last name: ");
    scanf_s(" %c", &first_name, sizeof(first_name));

    while (getchar() != ' ');

    while ((input_char = getchar()) != '\n')
    {
        if (input_char != ' ')
            putchar(input_char);
    }
    printf(", %c.\n", first_name);

    return 0;
}

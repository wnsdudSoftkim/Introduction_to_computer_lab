#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input_char;
    int vowel_number = 0;

    printf("\nEnter a sentence: ");

    while ((input_char = getchar()) != '\n')
    {
        switch (toupper(input_char))
        {
        case 'A':
            vowel_number++;
            break;
        case 'E':
            vowel_number++;
            break;
        case 'I':
            vowel_number++;
            break;
        case 'O':
            vowel_number++;
            break;
        case 'U':
            vowel_number++;
            break;
        }
    }

    printf("Your sentence contains %d vowels.\n\n", vowel_number);

    return 0;
}
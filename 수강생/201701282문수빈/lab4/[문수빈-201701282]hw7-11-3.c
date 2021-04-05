#include <stdio.h>

int main(void)
{
    char first, last;
   
    printf("Enter a first and last name: ");
    scanf(" %c", &first);    

    while (getchar() != ' ') {}

    while ((last = getchar()) != '\n') {
        if (last == ' ') {
		}
            
        else {
        	printf("%c", last);
		}
        
    }       

    printf(", %c.\n", first); 

    return 0;
} 

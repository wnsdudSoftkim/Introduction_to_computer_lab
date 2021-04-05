/* The program reformulates a name from user input */
#include <stdio.h>

int main(void)
{
  char input, first;
  input = ' ';
  int flag = 0;
  printf("Enter a first and last name: ");

  while(input != '\n'){
    if(flag == 0 && input != ' '){
      first = input;
      flag = 1;
    }
    else if(flag == 1 && input == ' '){
      flag = 2;
    }
    else if(flag == 2 && input != ' '){
      printf("%c", input);
    }
    input = getchar();
  }
  
  printf(", %c.\n", first);

  return 0;
}

/* Vowel counter in sentence from user  */
#include <stdio.h>

int main(void)
{
  char c;
  int sum = 0;
  printf("Enter a sentence: ");

  while(c != '\n'){
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
         sum += 1;
       }
  }
  printf("Your sentence contains %d vowels.\n", sum);

  return 0;
}

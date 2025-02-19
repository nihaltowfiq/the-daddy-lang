/*
  Character is Vowel or Consonant
  Write a program that checks whether a given character is a vowel (a, e, i, o, u) or a
  consonant.
*/

#include <stdio.h>

int main() {
  char character;

  printf("Enter a character: ");
  scanf("%c", &character);

  if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
     character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
    printf("%c is a vowel", character);
  } else {
    printf("%c is a consonant", character);
  }

  return 0;
}
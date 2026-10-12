#include <stdio.h>

int main() {
  char str[100] = "Welcome to compiler design lab";
  int i = 0;
  int words = 1;

  while (str[i] != '\0') {
    if (str[i] == ' ') {
      words++;
    }
    i++;
  }
  printf("Total number of words = %d \n\n", words);

  return 0;
}
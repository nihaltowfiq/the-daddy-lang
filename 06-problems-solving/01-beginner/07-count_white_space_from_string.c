#include <stdio.h>

int main() {
  char str[100] = "C programming language tools";
  int i = 0;
  int spaces = 0;

  while (str[i] != '\0') {
    if (str[i] == ' ') {
      spaces++;
    }
    i++;
  }

  printf("Total white spaces = %d \n\n", spaces);

  return 0;
}
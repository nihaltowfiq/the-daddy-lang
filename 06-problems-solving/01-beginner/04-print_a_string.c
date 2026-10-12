#include <stdio.h>

int main() {
  char str[100] = "Kazi Nihal Towfiq";
  int i = 0;

  printf("String elements: ");

  while (str[i] != '\0') {
    printf("%c", str[i]);
    i++;
  }
  printf("\n\n\n\n");

  return 0;
}
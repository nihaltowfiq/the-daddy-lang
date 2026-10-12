#include <stdio.h>

int main() {
  char str[100] = "Kazi Nihal Towfiq";
  int len = 0;

  while (str[len] != '\0') {
    len++;
  }
  printf("Length of the string = %d \n\n", len);

  return 0;
}
#include <stdio.h>

void shiftRight(int arr[], int size, int k) {
  for (int i = size - 1; i >= k; i--) {
    arr[i] = arr[i - k];
  }

  for (int i = 0; i < k; i++) {
    arr[i] = 0;
  }
}

int main() {
  int source[6] = {10, 20, 30, 40, 50, 60};
  int size = sizeof(source) / sizeof(source[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  shiftRight(source, size, 3);

  printf("\nArray after right shift with k cells: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  return 0;
}

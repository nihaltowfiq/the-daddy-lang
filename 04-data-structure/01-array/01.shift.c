#include <stdio.h>

void leftShift(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }

  arr[size - 1] = 0;
}

void rightShift(int arr[], int size) {
  for (int i = size - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }

  arr[0] = 0;
}

int main() {
  // Left shift example
  printf("\nLeft Shift Example -- \n");
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  leftShift(arr, size);

  printf("\nArray after left shift: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n\n");

  // Right shift example
  printf("\nRight Shift Example -- \n");
  int arr2[5] = {1, 2, 3, 4, 5};
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr2[i]);
  }

  rightShift(arr2, size2);

  printf("\nArray after right shift: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}
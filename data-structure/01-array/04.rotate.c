#include <stdio.h>

void leftRotate(int arr[], int size) {
  int temp = arr[0];
  for (int i = 0; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[size - 1] = temp;
};

void rightRotate(int arr[], int size) {
  int temp = arr[size - 1];
  for (int i = size - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = temp;
};

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  leftRotate(arr, size);
  rightRotate(arr, size);

  printf("\nArray after rotate: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
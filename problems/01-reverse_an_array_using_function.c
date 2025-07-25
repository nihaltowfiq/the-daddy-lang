#include <stdio.h>

void reverse(int arr[], int size) {
  int temp;
  for (int i = 0; i < size / 2; i++) {
    temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
}

// two-pointer technique
void reverse2(int arr[], int size) {
  int left = 0, right = size - 1;

  while (left < right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    left++;
    right--;
  }
}

int main() {
  int arr[5] = {51, 21, 34, 4, 555};
  int size = sizeof(arr) / sizeof(arr[0]);

  //   reverse(arr, size);
  reverse2(arr, size);

  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
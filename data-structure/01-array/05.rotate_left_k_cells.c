// Consider an array named source. Write a method/function named rotateLeft( source, k)
// that rotates all the elements of the source array to the left by 'k' positions. You must
// execute the method by passing an array and number of cells to be shifted. After calling
// the method, print the array to show whether the elements have been shifted properly.
// Example:
// source=[10,20,30,40,50,60]
// rotateLeft(source,3)
// After calling rotateLeft(source,3), printing the array should give the output as:
// [ 40, 50, 60, 10, 20, 30]

#include <stdio.h>

void rotateLeft(int arr[], int size, int k) {
  int temp[k];

  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  for (int i = 0; i < size - k; i++) {
    arr[i] = arr[i + k];
  }

  for (int i = 0; i < k; i++) {
    arr[size - k + i] = temp[i];
  }
}

int main() {
  int source[6] = {10, 20, 30, 40, 50, 60};
  int size = sizeof(source) / sizeof(source[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  rotateLeft(source, size, 3);

  printf("\nArray after rotating left by k cells: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  return 0;
}
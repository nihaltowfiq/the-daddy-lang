// Consider an array named source. Write a method/function named shiftLeft( source, k)
// that shifts all the elements of the source array to the left by 'k' positions. You must
// execute the method by passing an array and number of cells to be shifted. After calling
// the method, print the array to show whether the elements have been shifted properly.
// Example:
// source=[10,20,30,40,50,60]
// shiftLeft(source,3)
// After calling shiftLeft(source,3), printing the array should give the output as:
// [ 40, 50, 60, 0, 0, 0 ]

#include <stdio.h>

void shiftLeft(int arr[], int size, int k) {
  for (int i = 0; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }

  for (int i = size - k; i < size; i++) {
    arr[i] = 0;
  }
}

int main() {
  int source[5] = {1, 2, 3, 4, 5};
  int size = sizeof(source) / sizeof(source[0]);

  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  shiftLeft(source, size, 2);

  printf("\nArray after left shift with k cells: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", source[i]);
  }

  return 0;
}

// guard:
// if (k >= size) {
//   // If k is greater than or equal to size, set all elements to 0
//   for (int i = 0; i < size; i++) {
//     arr[i] = 0;
//   }
//   return;
// }
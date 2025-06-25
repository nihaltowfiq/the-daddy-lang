// Shift Right k Cells
// Consider an array named source. Write a method/function named shifRight( source, k)
// that shifts all the elements of the source array to the right by 'k' positions. You must
// execute the method by passing an array and number of cells to be shifted. After calling
// the method, print the array to show whether the elements have been shifted properly.
// Example:
// source=[10,20,30,40,50,60]
// shiftRight(source,3)
// After calling shiftRight(source,3), printing the array should give the output as:
// [ 0,0,0,10,20,30 ]

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

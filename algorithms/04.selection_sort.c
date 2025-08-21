/*
  Selection Sort - Sort an Array of Integers:
    ○ Question: Write a program to sort an array of integers in ascending order using
    selection sort.
    Sample Input:
    arr = [64, 25, 12, 22, 11]
    Sample Output:
    Sorted Array: [11, 12, 22, 25, 64]
*/

#include <stdio.h>

void selection_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;

    for (int j = i + 1; j < size; j++) {
      if (arr[min_index] > arr[j]) {
        min_index = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}

int main() {
  int arr[] = {88, 85, 11, 2, 1, 10, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, size);

  printf("Sorted Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

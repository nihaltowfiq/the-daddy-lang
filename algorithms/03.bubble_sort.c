/*
  Bubble Sort - Sort an Array in Ascending Order:
    ○ Question: You are given an array of integers. Write a program to sort the array in
    ascending order using bubble sort.
    Sample Input:
    arr = [29, 10, 14, 37, 14]
    Sample Output:
    Sorted Array: [10, 14, 14, 29, 37]
*/

#include <stdio.h>

void bubble_sort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {88, 85, 11, 2, 1, 10, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(arr, size);

  printf("Sorted Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
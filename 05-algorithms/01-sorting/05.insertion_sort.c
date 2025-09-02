/*
  Insertion Sort - Sort a Partially Sorted Array:
    ○ Question: You are given a partially sorted array of integers. Write a program to
    fully sort the array using insertion sort.
    Sample Input:
    arr = [3, 8, 12, 15, 6, 20]
    Sample Output:
    Sorted Array: [3, 6, 8, 12, 15, 20]
*/
#include <stdio.h>

void insertion_sort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int temp = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main() {
  int arr[] = {88, 85, 11, 2, 1, 10, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertion_sort(arr, size);

  printf("Sorted Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

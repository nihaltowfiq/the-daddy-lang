/*
Binary Search- Find a Value in a Sorted Array:
    ○ Question: You are given a sorted array of 1000 integers. Write a program to perform binary search to find the
    index of a target value. If the value is found, return its index. If it is not found, return-1.

    Sample Input: arr = [3, 6, 9, 12, 15, 18] target = 12 Sample Output: Index: 3

    Sample Input (target not in array): arr = [10, 20, 30, 40, 50] target = 25 Sample Output:-1
*/
#include <stdio.h>

int binary_search(int arr[], int size, int target) {
  int low = 0, high = size - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] > target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {3, 6, 9, 12, 15, 18};
  int target = 12;
  int size = sizeof(arr) / sizeof(arr[0]);

  int index = binary_search(arr, size, target);

  if (index == -1) {
    printf("%d\n", index);
  } else {
    printf("Index: %d\n", index);
  }

  return 0;
}
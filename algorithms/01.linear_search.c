/*
  Linear Search- Find the First Occurrence of a Value:
    ○ Question: You are given an unsorted array of 1000 integers. Write a program to search for the first occurrence of
    a target value using linear search. If the value is found, return its index. If it is not found, return-1.

    Sample Input:
      arr = [22, 13, 45, 67, 13, 89, 76]
      target = 13
  Sample Output:
      Index:1

  Sample Input (target not in array):
      arr = [5, 8, 12, 3, 7]
      target = 10
  Sample Output:
      -1
*/
#include <stdio.h>

int linear_search(int arr[], int size, int target) {
  int result = -1;

  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      result = 1;
      break;
    }
  }

  return result;
}

int main() {
  int arr[1000] = {22, 13, 45, 67, 13, 89, 76};
  int target = 10;

  int size = sizeof(arr) / sizeof(arr[0]);

  int isFound = linear_search(arr, size, target);

  printf("isFound: %d", isFound);

  return 0;
}
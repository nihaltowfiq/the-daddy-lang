/*
  Create a basic singly linked list structure in C. Define a structure for a node that holds an
  integer value and a pointer to the next node. Implement functions to add nodes at the
  beginning and end of the list.

  Sample Input:
  - Add 5 to the beginning.
  - Add 10 to the end.
  - Add 15 to the end.

  Sample Output:
  Linked List: 5 -> 10 -> 15
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addNode(int v) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

  newNode->value = v;
  newNode->next = NULL;

  if (head == NULL) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }
}

void printList() {
  struct Node *temp = head;
  int i = 0;
  while (temp != NULL) {
    printf("%d->", temp->value);
    temp = temp->next;
    i++;
  }
  printf("\n");
}

int main() {
  addNode(5);
  addNode(10);
  addNode(15);

  printList();

  return 0;
};

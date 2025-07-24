/*
  Extend your linked list operations. Implement functions to insert a node after a specific value
  or at a given position and to delete nodes with a given value or at a given position.

  Sample Input:
  - Insert 25 after 10.
  - Delete the node with the value 10.
  - Insert 20 at position 2.
  - Delete the node at position 3.
  Sample Output:
  Linked List: 5 -> 25 -> 20
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

void insertAfterValue(int v, int specific) {
  struct Node *temp = head;
  int i = 0;
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->value = v;
  newNode->next = NULL;

  while (temp != NULL) {
    if (temp->value == specific) {
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
    i++;
  }
}

void insertAtPosition(int v, int position) {
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->value = v;
  newNode->next = NULL;

  if (position == 0) {
    newNode->next = head;
    head = newNode;
    return;
  }

  int i = 0;
  struct Node *temp = head;

  while (temp != NULL) {
    if (i == position - 1) {
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
    i++;
  }
}

void deleteNodePosition(int position) {
  if (position == 0) {
    head = head->next;
    return;
  }

  struct Node *temp = head;
  int i = 0;

  while (temp != NULL) {
    if (i == position - 1) {
      temp->next = temp->next->next;
      break;
    }
    temp = temp->next;
    i++;
  }
}

void deleteNodeWithValue(int v) {
  struct Node *temp = head;
  int i = 0;

  struct Node *tempItem = NULL;

  while (temp != NULL) {
    if (temp->value == v && tempItem == NULL) {
      head = head->next;
      break;
    } else if (temp->value == v && tempItem != NULL) {
      tempItem->next = temp->next;
      break;
    }

    tempItem = temp;
    temp = temp->next;
    i++;
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

  insertAfterValue(25, 10);
  deleteNodeWithValue(10);
  insertAtPosition(20, 2);
  deleteNodePosition(3);

  printList();

  return 0;
}

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
